#include <chrono>
#include <iostream>
#include <regex>
#include <sstream>

#include "ai.h"
#include "game.h"
#include "gif.h"
#include "render.h"

void generate_gif(const Size& sz, size_t max_frames) {
  std::ostringstream ss;
  ss << "snake" << sz.width() << "x" << sz.height() << ".gif";
  gif::FileDevice dev(ss.str());
  dev.open(gif::FileDevice::write_only);

  Game game(sz);
  GameAI ai(game);
  GameRender r(game);

  size_t c = 0;
  do {
    if (c++ > max_frames) {
      break;
    }
    r.draw_frame(0);
    ai.next_move();
  } while (!game.is_over());

  r.draw_frame(100);
  r.draw_game_over(100);
  r.save(dev);
}

using namespace std::chrono;

struct Params {
  Size field_size = {4, 3};
  size_t max_frames = 3000;

  void parse(int argc, char** argv) {
    std::string args;
    for (int i = 1; i < argc; i++) {
      args += argv[i];
    }
    std::smatch sz_match;
    std::regex_search(args, sz_match, std::regex("size\\s*=\\s*(\\d+)x(\\d+)"));
    if (sz_match.size() == 3) {
      field_size = Size(std::max(std::stoi(sz_match[1]), 4),
                        std::max(std::stoi(sz_match[2]), 3));
    }
    std::smatch mf_match;
    std::regex_search(args, mf_match, std::regex("maxframes\\s*=\\s*(\\d+)"));
    if (mf_match.size() == 2) {
      max_frames = std::stoi(mf_match[1]);
    }
  }
};

int main(int argc, char** argv) {
  Params params;
  params.parse(argc, argv);
  auto start = high_resolution_clock::now();
  generate_gif(params.field_size, params.max_frames);
  auto stop = high_resolution_clock::now();
  std::cout << "Completed in "
            << duration_cast<milliseconds>(stop - start).count() << "ms\n";
  return 0;
}
