#ifndef SPRITES_H
#define SPRITES_H

#include  <cstdint>

uint8_t SpritesGif[] = {
    0x47, 0x49, 0x46, 0x38, 0x37, 0x61, 0xa0, 0x00, 0x48, 0x00, 0xee, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x74, 0x00, 0x00, 0x7c,
    0x00, 0x00, 0x7e, 0x00, 0x00, 0x90, 0x00, 0x00, 0x94, 0x00, 0x00, 0x95,
    0x00, 0x00, 0x9c, 0x00, 0x00, 0x9f, 0x00, 0x00, 0xa3, 0x00, 0x00, 0xa4,
    0x00, 0x00, 0xa5, 0x00, 0x00, 0xa7, 0x00, 0x00, 0xa7, 0x0e, 0x00, 0xae,
    0x05, 0x00, 0xb0, 0x00, 0x00, 0xff, 0x00, 0x01, 0x79, 0x00, 0x01, 0xa0,
    0x00, 0x01, 0xa8, 0x03, 0x01, 0xff, 0x00, 0x02, 0xa7, 0x00, 0x03, 0xa1,
    0x0e, 0x05, 0xef, 0x00, 0x08, 0xe0, 0x00, 0x0e, 0xca, 0x00, 0x14, 0x5b,
    0x00, 0x18, 0xa3, 0x00, 0x18, 0xb4, 0x0b, 0x22, 0x82, 0x00, 0x25, 0x75,
    0x00, 0x2c, 0x01, 0x03, 0x2d, 0x63, 0x00, 0x2e, 0x5c, 0x00, 0x32, 0x44,
    0x00, 0x35, 0x5d, 0x00, 0x37, 0x35, 0x00, 0x37, 0x4d, 0x00, 0x3a, 0x3a,
    0x3a, 0x3b, 0x53, 0x00, 0x3c, 0x73, 0x00, 0x3d, 0x66, 0x00, 0x3d, 0x6c,
    0x00, 0x42, 0x61, 0x00, 0x44, 0x58, 0x00, 0x47, 0x28, 0x00, 0x47, 0x70,
    0x00, 0x48, 0x5e, 0x00, 0x4b, 0x46, 0x00, 0x4b, 0x65, 0x00, 0x4b, 0x6d,
    0x00, 0x51, 0x5a, 0x00, 0x52, 0x20, 0x00, 0x53, 0x59, 0x00, 0x54, 0x53,
    0x00, 0x55, 0x4a, 0x00, 0x5b, 0x61, 0x07, 0x5e, 0x67, 0x00, 0x61, 0x15,
    0x00, 0x62, 0x4f, 0x00, 0x67, 0x10, 0x01, 0x6b, 0x46, 0x00, 0x6c, 0x0d,
    0x03, 0x6e, 0x0b, 0x03, 0x70, 0x34, 0x00, 0x70, 0x42, 0x00, 0x73, 0x29,
    0x00, 0x74, 0x08, 0x05, 0x79, 0x06, 0x06, 0x79, 0x3f, 0x00, 0x7a, 0x05,
    0x07, 0x7b, 0x05, 0x07, 0x7c, 0x57, 0x07, 0x7e, 0x4c, 0x05, 0x7f, 0x04,
    0x09, 0x80, 0x59, 0x0a, 0x81, 0x67, 0x13, 0x84, 0x3e, 0x00, 0x85, 0x21,
    0x00, 0x89, 0x31, 0x00, 0x8b, 0x43, 0x09, 0x8b, 0x45, 0x00, 0x8b, 0x52,
    0x05, 0x8d, 0x43, 0x00, 0x8e, 0x22, 0x00, 0x8e, 0x22, 0x26, 0x95, 0x55,
    0x0d, 0x96, 0x45, 0x06, 0x98, 0x2a, 0x05, 0x98, 0x47, 0x10, 0x9c, 0x2e,
    0x00, 0x9c, 0x55, 0x15, 0xa1, 0x1a, 0x00, 0xa1, 0x3e, 0x03, 0xa6, 0x48,
    0x0a, 0xa6, 0x7a, 0x61, 0xa7, 0x2b, 0x09, 0xa9, 0x21, 0x00, 0xab, 0x16,
    0x00, 0xad, 0x40, 0x08, 0xaf, 0x25, 0x0b, 0xb1, 0x12, 0x00, 0xb3, 0x1e,
    0x00, 0xb4, 0x3c, 0x1a, 0xb8, 0x29, 0x01, 0xb8, 0x2a, 0x04, 0xba, 0x32,
    0x08, 0xba, 0x36, 0x06, 0xbb, 0x1b, 0x05, 0xc1, 0x2a, 0x0f, 0xc1, 0x2c,
    0x02, 0xc7, 0x13, 0x00, 0xc9, 0x16, 0x11, 0xca, 0x23, 0x13, 0xcd, 0x30,
    0x1f, 0xcd, 0x44, 0x18, 0xd0, 0x03, 0x08, 0xd0, 0x0f, 0x00, 0xd2, 0x19,
    0x14, 0xd2, 0x24, 0x09, 0xe5, 0x1b, 0x1b, 0xe7, 0x22, 0x11, 0xe9, 0xd4,
    0xd5, 0xf3, 0xe8, 0xe8, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x2c, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x48, 0x00, 0x00, 0x07,
    0xff, 0x80, 0x60, 0x82, 0x83, 0x84, 0x85, 0x60, 0x11, 0x88, 0x89, 0x8a,
    0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x89, 0x86, 0x92, 0x93, 0x94, 0x95, 0x96,
    0x97, 0x98, 0x99, 0x92, 0x74, 0x9c, 0x9d, 0x82, 0x9d, 0x9e, 0x89, 0x1a,
    0x25, 0x3b, 0x3b, 0x1a, 0x90, 0xa8, 0xa9, 0x8d, 0x60, 0xa0, 0x9c, 0x9f,
    0xad, 0xaf, 0xa0, 0xb1, 0x9e, 0xac, 0xb0, 0xb5, 0xb2, 0xb7, 0xb4, 0xad,
    0x74, 0xb3, 0xae, 0xb9, 0xbe, 0xbb, 0xbd, 0xbc, 0xbf, 0xc3, 0xc1, 0x88,
    0xa3, 0x3b, 0x44, 0x4b, 0xa6, 0xaa, 0xcd, 0xa9, 0xc4, 0xc2, 0xd1, 0xd0,
    0xd3, 0xc1, 0xd4, 0xb6, 0xd5, 0xd8, 0xd7, 0xda, 0xb8, 0xc6, 0xc8, 0xca,
    0x56, 0xcb, 0xa7, 0xce, 0xe3, 0x8c, 0xd6, 0xdc, 0xdb, 0xba, 0xe8, 0xc0,
    0xea, 0xc5, 0xec, 0xd2, 0xd9, 0xe7, 0xb2, 0x25, 0xa4, 0xca, 0x7c, 0x7e,
    0x7b, 0xe1, 0xa9, 0x1a, 0x1c, 0xf3, 0xfd, 0xfe, 0xfd, 0x1f, 0x30, 0x3c,
    0x32, 0x97, 0x2e, 0x5e, 0xc1, 0x83, 0xeb, 0x0c, 0x26, 0x44, 0xd8, 0x4e,
    0x61, 0x43, 0x86, 0x60, 0x4a, 0x7d, 0xf3, 0x03, 0x00, 0xc0, 0x92, 0x7c,
    0x8e, 0xf6, 0x95, 0x70, 0x51, 0xa3, 0x94, 0xc7, 0x8f, 0x1e, 0x4b, 0x04,
    0x5c, 0x05, 0x0f, 0x22, 0xc1, 0x85, 0x28, 0x1f, 0xa6, 0x7c, 0xe7, 0xee,
    0x24, 0x2f, 0x22, 0xca, 0x96, 0x58, 0xd9, 0x03, 0x00, 0xc4, 0x45, 0x22,
    0x3b, 0x12, 0x05, 0x10, 0xc5, 0xcf, 0xc5, 0x8e, 0x1e, 0x3f, 0x60, 0x0a,
    0x1d, 0x0a, 0xf3, 0x47, 0xa9, 0x12, 0x19, 0xca, 0x95, 0x5c, 0xe9, 0x92,
    0xa5, 0x43, 0xa7, 0x26, 0xab, 0x69, 0xba, 0x48, 0xb5, 0xea, 0x12, 0x22,
    0x01, 0xb2, 0x66, 0x8d, 0x30, 0x6a, 0x5e, 0x47, 0x98, 0x47, 0xac, 0x8a,
    0x45, 0x42, 0x04, 0xc8, 0x8e, 0x12, 0x02, 0x15, 0x69, 0x5a, 0xcb, 0xb6,
    0xad, 0xdb, 0xb7, 0x92, 0xff, 0xc4, 0x56, 0xc5, 0xaa, 0x75, 0x67, 0xd7,
    0x12, 0x5f, 0x89, 0x84, 0x95, 0x6b, 0xb5, 0xec, 0x8e, 0x0f, 0x8b, 0x26,
    0x91, 0x1b, 0x4c, 0xb8, 0x70, 0xb9, 0x49, 0x4b, 0x5f, 0xc6, 0x9c, 0x59,
    0xf3, 0x66, 0x4e, 0x44, 0x3b, 0x8f, 0xf5, 0xfc, 0x19, 0x94, 0xa8, 0xd0,
    0x22, 0x73, 0xcf, 0xa6, 0x45, 0x04, 0xcd, 0xb0, 0xe7, 0xcf, 0xcd, 0x9a,
    0x42, 0x93, 0x28, 0xd3, 0xcf, 0x09, 0x8b, 0x38, 0xc5, 0x35, 0xd2, 0xc8,
    0x11, 0xa4, 0xc7, 0xca, 0x54, 0x91, 0x18, 0x05, 0x1c, 0xc9, 0x18, 0xe8,
    0xdb, 0xb8, 0xd5, 0x26, 0x8e, 0x36, 0x2f, 0xd9, 0x12, 0x7b, 0x7b, 0x52,
    0xeb, 0xe3, 0xf7, 0xaf, 0x9f, 0xc4, 0x98, 0x57, 0xcf, 0xea, 0x86, 0x95,
    0xbb, 0xf9, 0x6d, 0xd1, 0xdd, 0xe8, 0xc9, 0x14, 0xfe, 0xf9, 0x03, 0x3d,
    0xcc, 0xc9, 0x4b, 0x2c, 0x97, 0xe5, 0xbc, 0xbb, 0x61, 0xe8, 0xcc, 0xb9,
    0xd2, 0xa3, 0x0e, 0xfa, 0xc3, 0x8e, 0xa0, 0x8e, 0xb5, 0xd7, 0x0e, 0xef,
    0xbd, 0xbd, 0x33, 0xf0, 0xdc, 0x8f, 0x91, 0x62, 0x86, 0x1b, 0x83, 0xf4,
    0xec, 0xdb, 0x43, 0xb9, 0xdf, 0xff, 0x4c, 0x6a, 0x26, 0xfe, 0x11, 0xdc,
    0x87, 0x93, 0x7a, 0x9c, 0x49, 0xf2, 0x8c, 0x81, 0xab, 0x14, 0xe2, 0x08,
    0x21, 0x87, 0xa9, 0x65, 0x09, 0x24, 0x82, 0x19, 0x56, 0x17, 0x24, 0x02,
    0x2a, 0x47, 0x58, 0x84, 0x10, 0x4a, 0x02, 0x40, 0x82, 0x84, 0x6c, 0x78,
    0x98, 0x20, 0x1e, 0x46, 0x02, 0x46, 0x88, 0x97, 0x84, 0xf8, 0xa1, 0x82,
    0x8e, 0x40, 0xf0, 0xc0, 0x02, 0xa8, 0x6c, 0x45, 0xa1, 0x6f, 0xf8, 0x5d,
    0x68, 0xdb, 0x82, 0x0f, 0x8a, 0x88, 0xa1, 0x8d, 0x23, 0x06, 0x96, 0x63,
    0x81, 0x95, 0x98, 0x18, 0xd8, 0x8c, 0x8b, 0x20, 0x70, 0xc0, 0x05, 0x0e,
    0xb4, 0x18, 0xd9, 0x23, 0x15, 0x12, 0x48, 0x4e, 0xff, 0x67, 0x03, 0x59,
    0x42, 0x22, 0x25, 0x3e, 0x76, 0xa8, 0xe3, 0x93, 0x3d, 0x0e, 0x04, 0x64,
    0x22, 0x0a, 0x30, 0x50, 0x80, 0x01, 0xa9, 0xb8, 0x88, 0x24, 0x8c, 0x03,
    0x16, 0xc6, 0x24, 0x8d, 0x20, 0x56, 0x64, 0x26, 0x88, 0x38, 0x9a, 0x09,
    0x00, 0x9a, 0x0e, 0x32, 0x18, 0x81, 0x94, 0x3c, 0x8e, 0xa8, 0xa6, 0x9a,
    0x56, 0xb2, 0x97, 0x88, 0x05, 0x08, 0x54, 0x90, 0x00, 0x05, 0x90, 0x68,
    0xb0, 0x43, 0x56, 0xf4, 0x35, 0x92, 0xa4, 0x2a, 0x18, 0x58, 0xe7, 0xcf,
    0x98, 0x1c, 0xee, 0x28, 0x22, 0x95, 0x8a, 0xb2, 0x89, 0x23, 0x9a, 0x70,
    0xbe, 0x39, 0x88, 0x8f, 0xfd, 0xd9, 0x19, 0x81, 0x00, 0x03, 0x54, 0x50,
    0x41, 0x07, 0x0d, 0x3c, 0xe2, 0xe7, 0x50, 0x81, 0x2e, 0x32, 0x28, 0x24,
    0x85, 0xce, 0xf7, 0x11, 0xa2, 0x27, 0x52, 0x5a, 0x51, 0x9a, 0x8b, 0xea,
    0x58, 0x65, 0x9c, 0x94, 0xa2, 0x32, 0xe6, 0x06, 0x2b, 0xbc, 0x90, 0x82,
    0xa6, 0x15, 0x10, 0x30, 0xc1, 0x6a, 0x3b, 0xf4, 0x15, 0x6a, 0x22, 0x78,
    0xfd, 0x70, 0xc4, 0x11, 0x3f, 0xd4, 0xa0, 0x24, 0x23, 0x19, 0xcc, 0x57,
    0x99, 0x50, 0xa8, 0xba, 0xaa, 0x28, 0x99, 0x8d, 0x3e, 0x2b, 0xe9, 0xab,
    0xd3, 0x4a, 0x5b, 0x69, 0x7c, 0x30, 0x34, 0x11, 0xc4, 0x15, 0x3e, 0xe0,
    0x5a, 0x81, 0x07, 0x12, 0x2c, 0xe2, 0xa7, 0x5c, 0xe4, 0x25, 0xc2, 0x81,
    0x0b, 0x3d, 0xc0, 0xd4, 0x83, 0x0b, 0x1c, 0x3c, 0x62, 0xdf, 0x0e, 0x40,
    0x10, 0x81, 0x84, 0x55, 0x37, 0xa6, 0x5a, 0xad, 0x20, 0x6d, 0x6a, 0xe8,
    0x6c, 0x45, 0x65, 0x3a, 0x5a, 0x6f, 0x93, 0x86, 0x44, 0xa0, 0x02, 0x13,
    0x4f, 0xa8, 0x91, 0xc6, 0x16, 0x54, 0x68, 0x8a, 0x43, 0x0e, 0x33, 0x28,
    0x32, 0x2e, 0x4d, 0x36, 0x2d, 0x01, 0x02, 0x00, 0xc1, 0xfd, 0xea, 0xcd,
    0xff, 0x80, 0xaa, 0x31, 0x62, 0x5e, 0xbc, 0x72, 0xfd, 0x9b, 0xef, 0x86,
    0x86, 0x30, 0x1a, 0xf2, 0xbe, 0x92, 0x82, 0x1c, 0xed, 0xc8, 0x07, 0x06,
    0xac, 0x03, 0x16, 0x63, 0xd8, 0xa1, 0x87, 0x19, 0x6c, 0x54, 0x50, 0x05,
    0x1a, 0x59, 0x44, 0xc1, 0x43, 0x22, 0xbd, 0x5a, 0x41, 0x91, 0x45, 0x4b,
    0x00, 0x70, 0x82, 0x1f, 0x56, 0xe0, 0xc4, 0xc8, 0xb9, 0xa5, 0xb0, 0xeb,
    0xee, 0x7d, 0x17, 0x15, 0xc1, 0xec, 0x95, 0x24, 0x47, 0x70, 0xe6, 0xc9,
    0xfa, 0x7e, 0x8c, 0xc8, 0xaa, 0xfe, 0x4e, 0x4a, 0xe7, 0xb5, 0xa1, 0x8c,
    0x20, 0xc5, 0x1a, 0x78, 0xc0, 0xf1, 0x46, 0x17, 0x62, 0xb8, 0x71, 0x47,
    0x1c, 0x65, 0x38, 0xd1, 0x02, 0x22, 0xbe, 0x01, 0x77, 0xd1, 0x1e, 0x7e,
    0xf0, 0x91, 0x1c, 0x23, 0xa3, 0xd4, 0x60, 0x6c, 0xc6, 0x8b, 0x98, 0xf7,
    0xc3, 0xbc, 0x37, 0x11, 0x61, 0xd4, 0x0e, 0xcd, 0x4a, 0xed, 0xa0, 0xc8,
    0x85, 0x44, 0x39, 0xe9, 0x94, 0xac, 0x8e, 0xc3, 0x64, 0x0c, 0x53, 0x40,
    0xf1, 0xc5, 0x10, 0x11, 0x90, 0x71, 0x46, 0x1e, 0x75, 0xcc, 0xa1, 0x85,
    0x0c, 0x88, 0x48, 0x67, 0x05, 0x38, 0x32, 0x81, 0x13, 0xe6, 0xd0, 0xf3,
    0xb4, 0xfb, 0x25, 0x72, 0x30, 0x1d, 0x55, 0x42, 0xdf, 0x85, 0xb7, 0x0a,
    0xeb, 0xd3, 0x82, 0x3b, 0x5a, 0x20, 0xa3, 0xb1, 0x42, 0x38, 0x23, 0x0b,
    0x34, 0xd8, 0x80, 0x88, 0x10, 0x5e, 0xb4, 0x21, 0x47, 0x18, 0x4a, 0x84,
    0x20, 0x1f, 0x8c, 0x99, 0x95, 0x40, 0xb7, 0x7c, 0xbe, 0xbf, 0x18, 0x93,
    0xd2, 0x67, 0x7d, 0xa0, 0x29, 0xe9, 0xb0, 0x12, 0x9e, 0xfc, 0xea, 0x4d,
    0x9b, 0x5e, 0x6d, 0xeb, 0x75, 0xc6, 0xd7, 0xc8, 0x0d, 0x46, 0x70, 0x91,
    0x84, 0x09, 0x0e, 0x23, 0x9d, 0xdd, 0xef, 0xc0, 0x1e, 0xcb, 0x88, 0x80,
    0xb3, 0xe1, 0x8a, 0xfc, 0xff, 0xd4, 0x82, 0xad, 0xba, 0x7c, 0xc9, 0xcd,
    0x33, 0x1f, 0xa7, 0xc7, 0xeb, 0x49, 0xdf, 0x08, 0x09, 0x28, 0x88, 0x00,
    0x77, 0x92, 0xdc, 0x8b, 0x52, 0x3f, 0xb0, 0x60, 0x6a, 0x26, 0x3e, 0xd3,
    0x27, 0x46, 0x7a, 0xbe, 0xea, 0xcf, 0x53, 0xde, 0xbd, 0xa2, 0x46, 0x12,
    0x4b, 0x39, 0x63, 0x54, 0x9e, 0x49, 0x92, 0xb7, 0xd8, 0xb7, 0x88, 0x39,
    0x99, 0x89, 0x11, 0x57, 0x9b, 0x9a, 0xaa, 0x1e, 0xd8, 0x40, 0x13, 0x39,
    0xd0, 0x81, 0x00, 0x43, 0x51, 0xe5, 0xf2, 0xe7, 0xbd, 0xfd, 0x28, 0x50,
    0x7c, 0x08, 0x02, 0x90, 0x08, 0x9d, 0xe5, 0xa6, 0x0d, 0xc6, 0x64, 0x73,
    0x7d, 0x3a, 0xca, 0xfd, 0x9a, 0x91, 0x24, 0x0c, 0xec, 0xcf, 0x80, 0xfd,
    0x1b, 0xc4, 0x89, 0x1a, 0xf4, 0xa8, 0x10, 0x0e, 0xb0, 0x84, 0xd1, 0xd3,
    0x8f, 0x09, 0xd3, 0x83, 0x8a, 0x4f, 0x61, 0x2c, 0x81, 0x60, 0x0a, 0xdf,
    0xf1, 0xf8, 0x47, 0xc2, 0xc1, 0xf9, 0xcd, 0x79, 0x25, 0xaa, 0xa1, 0xff,
    0x0a, 0xe8, 0x3e, 0x04, 0xf2, 0x8a, 0x08, 0x9a, 0x3b, 0xcb, 0x0a, 0x51,
    0x71, 0x1f, 0xe2, 0x89, 0x64, 0x88, 0x30, 0x54, 0xa2, 0x06, 0x03, 0xf8,
    0x37, 0x2d, 0x46, 0xea, 0x12, 0xae, 0xb3, 0x93, 0x13, 0xc5, 0x95, 0x0c,
    0xb6, 0xb9, 0x6d, 0x40, 0xc5, 0xe9, 0xdc, 0x14, 0x91, 0x16, 0xba, 0xb3,
    0x8c, 0x8e, 0x88, 0xeb, 0x23, 0xe0, 0x12, 0xab, 0x46, 0xad, 0x24, 0x2e,
    0x08, 0x48, 0x63, 0x14, 0x85, 0x6f, 0x7c, 0x06, 0xb4, 0xe4, 0xb8, 0x66,
    0x07, 0x35, 0x70, 0x41, 0x09, 0x38, 0x70, 0x3f, 0xbb, 0xe1, 0xed, 0x2a,
    0x7a, 0x2b, 0xc5, 0xf8, 0x3a, 0x34, 0x27, 0x3a, 0x4a, 0xcb, 0x91, 0x17,
    0x34, 0xdf, 0xf3, 0x1a, 0x69, 0xad, 0xf6, 0xe9, 0x30, 0x40, 0x1c, 0x54,
    0xc4, 0x91, 0x60, 0x34, 0xb1, 0x3d, 0x60, 0xce, 0xff, 0x32, 0x45, 0xe9,
    0xc1, 0x0e, 0x04, 0x49, 0xc8, 0x46, 0xbc, 0x0b, 0x39, 0x4b, 0x50, 0x1a,
    0x4c, 0x16, 0x69, 0x44, 0x24, 0xb6, 0x52, 0x7d, 0x5c, 0xcc, 0xa0, 0xe0,
    0xa0, 0x87, 0x28, 0x27, 0xd6, 0x25, 0x00, 0xa8, 0xe4, 0x4b, 0x55, 0x8e,
    0x10, 0x3a, 0x63, 0xcd, 0xe3, 0x77, 0x1b, 0xcb, 0xe5, 0x45, 0x18, 0x18,
    0x4b, 0x58, 0xce, 0x11, 0x6a, 0xd0, 0x3b, 0x1f, 0x2c, 0x63, 0x88, 0x2f,
    0xfc, 0x9d, 0xd0, 0x42, 0x90, 0xa9, 0x8b, 0x30, 0x75, 0xb9, 0x04, 0x5e,
    0xe2, 0xc4, 0x97, 0xc1, 0x5b, 0xc4, 0xbb, 0xe2, 0x75, 0xc8, 0x61, 0xda,
    0xd0, 0x5e, 0x5d, 0x54, 0x26, 0xfa, 0xc4, 0x09, 0x4e, 0xe7, 0x31, 0xf3,
    0x10, 0xce, 0xe4, 0xa1, 0x4e, 0x70, 0x16, 0x93, 0x4e, 0x7e, 0x12, 0x94,
    0x3f, 0x10, 0x25, 0x29, 0xef, 0x97, 0xac, 0x52, 0x2c, 0x6b, 0x95, 0x70,
    0x2c, 0xe6, 0x38, 0xc9, 0x27, 0x43, 0x49, 0x39, 0x0d, 0x70, 0xcd, 0x2c,
    0x27, 0xbe, 0x24, 0xa9, 0x14, 0x31, 0x66, 0x92, 0x57, 0x17, 0xa9, 0x48,
    0x1f, 0x71, 0xf2, 0xc7, 0x40, 0x0e, 0x72, 0x8a, 0x11, 0x28, 0x95, 0x6b,
    0x58, 0x09, 0xc0, 0x8a, 0x0e, 0xce, 0xa2, 0x28, 0x6b, 0x1e, 0x00, 0x0b,
    0xda, 0xc4, 0x83, 0x22, 0xd4, 0x8c, 0xd9, 0x49, 0xe3, 0x43, 0xc7, 0x51,
    0xaa, 0x43, 0xe5, 0xf3, 0x98, 0xa9, 0xcb, 0x11, 0x46, 0xe5, 0x44, 0xc1,
    0x22, 0x0e, 0x34, 0x99, 0x6f, 0xc2, 0xa3, 0x47, 0x11, 0x1a, 0xc5, 0x6c,
    0x7a, 0x87, 0xa2, 0x8f, 0xcc, 0x29, 0xa4, 0x74, 0x5a, 0xc9, 0x7c, 0x2d,
    0xf1, 0x8e, 0x06, 0x7d, 0x66, 0x07, 0x1d, 0xd6, 0xab, 0x1f, 0xba, 0x07,
    0xa7, 0xb3, 0x24, 0xd9, 0x4a, 0x61, 0xca, 0x48, 0x1c, 0x02, 0xb5, 0xa3,
    0x42, 0xd5, 0x87, 0x0a, 0xf9, 0x83, 0x54, 0x01, 0x26, 0x6f, 0xa9, 0xb2,
    0xff, 0xba, 0xe8, 0x2b, 0x99, 0x78, 0xc9, 0x3c, 0x8e, 0x10, 0x5a, 0x4e,
    0x85, 0x60, 0xf9, 0x54, 0xc5, 0x20, 0x82, 0xde, 0x70, 0x8b, 0x70, 0x5a,
    0x53, 0x3f, 0xc1, 0xba, 0x56, 0x72, 0x78, 0xd5, 0xad, 0x33, 0x25, 0x66,
    0x1c, 0x37, 0x5a, 0x3a, 0x9f, 0xca, 0xb1, 0x95, 0x3f, 0xd5, 0x22, 0x61,
    0xbc, 0x91, 0x9e, 0x15, 0x6a, 0x60, 0x85, 0xa7, 0x54, 0x27, 0x67, 0xf2,
    0x99, 0x88, 0x48, 0x42, 0x22, 0x82, 0x15, 0x8c, 0x24, 0x41, 0x11, 0x8b,
    0xd8, 0x1f, 0x65, 0xb1, 0x4f, 0xda, 0x33, 0xaa, 0xa0, 0x86, 0x8a, 0x08,
    0xbb, 0x45, 0xd5, 0x92, 0xae, 0xf8, 0xaa, 0x66, 0x63, 0xfa, 0xd8, 0x8c,
    0x68, 0xaf, 0xaf, 0xab, 0xf9, 0xa5, 0x23, 0xac, 0x93, 0x0c, 0xec, 0xa0,
    0x90, 0xb3, 0xee, 0xdb, 0x2c, 0x55, 0x83, 0x21, 0x52, 0x91, 0x62, 0xf2,
    0x1b, 0x98, 0xbb, 0x5c, 0x8c, 0x16, 0x41, 0x1c, 0xcf, 0x29, 0xa2, 0x37,
    0xc9, 0x00, 0x1d, 0x34, 0x51, 0x7b, 0x49, 0xd5, 0xee, 0x67, 0x34, 0x7f,
    0x0c, 0x6e, 0x04, 0xd2, 0x76, 0x8f, 0xb5, 0xb5, 0xed, 0x6d, 0xe2, 0xc2,
    0xcb, 0xdc, 0x16, 0x61, 0x4f, 0x98, 0xc4, 0x66, 0x36, 0xf9, 0xc9, 0xac,
    0x6f, 0x01, 0x04, 0x0d, 0x50, 0x5a, 0x97, 0x08, 0xc3, 0x85, 0xa2, 0x69,
    0x78, 0xa6, 0x50, 0x70, 0x3c, 0x46, 0x11, 0x44, 0x1b, 0xa5, 0x6d, 0x11,
    0x71, 0x99, 0xde, 0x6d, 0x86, 0xb7, 0xd2, 0x9d, 0xee, 0x6f, 0x83, 0x41,
    0x4d, 0xb1, 0x70, 0xa5, 0x8c, 0x8d, 0x91, 0x18, 0xc5, 0x30, 0x22, 0x8a,
    0xf1, 0x48, 0x51, 0x11, 0xe4, 0x32, 0x0b, 0x6d, 0xf4, 0xaa, 0xde, 0xdf,
    0xc6, 0xa5, 0xbd, 0x55, 0x39, 0x06, 0xef, 0xaa, 0xf2, 0xab, 0x08, 0x9c,
    0x2b, 0x5d, 0x44, 0x58, 0xd7, 0x78, 0xad, 0x42, 0x16, 0xb3, 0xa0, 0xc5,
    0xa5, 0x70, 0x89, 0xb0, 0xff, 0x84, 0x25, 0x7c, 0x5d, 0x50, 0xea, 0x31,
    0x97, 0x05, 0x0e, 0x50, 0x0d, 0x84, 0x45, 0x2c, 0x63, 0x29, 0x82, 0x28,
    0x7b, 0x43, 0x0a, 0x47, 0xa3, 0xd2, 0x92, 0xdd, 0xc0, 0x87, 0xc4, 0x4f,
    0x09, 0xae, 0x70, 0x2f, 0x2c, 0x94, 0x0c, 0xbf, 0x56, 0xb0, 0xc3, 0x05,
    0x89, 0x48, 0xce, 0x8b, 0x59, 0x95, 0xd8, 0x18, 0x2a, 0x4c, 0x31, 0xb1,
    0x8e, 0xdd, 0xd1, 0xda, 0x34, 0x92, 0x11, 0x50, 0xf7, 0x73, 0xe2, 0x3f,
    0x46, 0xf2, 0x54, 0x14, 0x1b, 0x39, 0xc7, 0x25, 0x4e, 0xf2, 0x53, 0x3e,
    0xe3, 0x25, 0x47, 0xbc, 0x15, 0x6b, 0x48, 0x7e, 0xca, 0x89, 0xa3, 0x7c,
    0xe4, 0x1b, 0x33, 0xf9, 0x48, 0x4e, 0x9e, 0xa9, 0xe1, 0x76, 0x2c, 0x65,
    0x2e, 0x57, 0x19, 0xc7, 0x56, 0xf6, 0x4c, 0x93, 0x05, 0xa5, 0xe5, 0xf7,
    0x78, 0x99, 0xca, 0x68, 0xbe, 0xf1, 0x94, 0xc3, 0x5c, 0x98, 0x09, 0x7d,
    0x0e, 0xc6, 0x86, 0x9b, 0xb0, 0x9c, 0xe7, 0xfc, 0x96, 0x3e, 0xf4, 0xa1,
    0x2a, 0x76, 0xce, 0xf3, 0x9d, 0xf5, 0x7c, 0x67, 0xaa, 0xe8, 0x19, 0xcf,
    0x7c, 0xbe, 0x48, 0x9e, 0xc5, 0xf2, 0x67, 0x3f, 0xf7, 0x19, 0xd0, 0x87,
    0x5e, 0x42, 0xa1, 0x05, 0x3d, 0x68, 0x43, 0xdb, 0x19, 0xd1, 0x89, 0x6e,
    0xb4, 0xa3, 0x09, 0xcd, 0xe7, 0x4a, 0x5b, 0xfa, 0xd2, 0x98, 0xae, 0x34,
    0xa3, 0xf7, 0xfc, 0xe8, 0x4d, 0x27, 0x9a, 0xd1, 0x94, 0xee, 0xb4, 0xa2,
    0x45, 0x3d, 0x69, 0x40, 0x53, 0xfa, 0xd4, 0x56, 0x21, 0x35, 0xa8, 0x53,
    0xfd, 0xe9, 0x51, 0xa3, 0x1a, 0xd2, 0x99, 0x8e, 0xb5, 0xac, 0x03, 0xed,
    0xea, 0x51, 0x77, 0xfa, 0xcf, 0xb8, 0xe6, 0xf4, 0xa3, 0x1b, 0xad, 0x6b,
    0x4f, 0xdf, 0x3a, 0xd0, 0xbc, 0xee, 0xf3, 0xa0, 0x7f, 0xcd, 0xe9, 0x4d,
    0xd7, 0x7a, 0xd8, 0xc2, 0xde, 0x75, 0xb2, 0x8b, 0x8d, 0x6d, 0xeb, 0x59,
    0x3b, 0xfb, 0xd9, 0xc2, 0x56, 0x74, 0xb3, 0x7d, 0x1d, 0x6c, 0x60, 0x27,
    0xdb, 0xd6, 0xd4, 0xa6, 0x76, 0xb5, 0x7b, 0x4d, 0xec, 0x63, 0xd3, 0x5a,
    0xd3, 0xd8, 0xee, 0x36, 0xb1, 0xa1, 0x4d, 0xee, 0x4c, 0x1b, 0x7a, 0xda,
    0xcd, 0xde, 0xf6, 0xa1, 0x25, 0xed, 0x69, 0x44, 0xb3, 0xba, 0xd0, 0x8b,
    0x46, 0x77, 0xa9, 0x8d, 0x9d, 0xee, 0x65, 0x7b, 0x1b, 0xdb, 0x8e, 0x2e,
    0xb7, 0xbe, 0xe1, 0xad, 0xec, 0x71, 0xfb, 0x3b, 0xd7, 0xea, 0x46, 0xb6,
    0xb1, 0xf9, 0x2d, 0xee, 0x6f, 0x6b, 0xfa, 0xdf, 0x03, 0x8f, 0x74, 0xc0,
    0xf7, 0xbd, 0xef, 0x84, 0xfb, 0xdb, 0xd7, 0xd3, 0x36, 0xb8, 0xae, 0x99,
    0x8d, 0xec, 0x71, 0x3b, 0x3c, 0xd8, 0x11, 0xb7, 0x77, 0xc1, 0x05, 0x4d,
    0x6f, 0x86, 0x7b, 0x3c, 0xde, 0x20, 0x57, 0x35, 0xbe, 0xb3, 0x2d, 0xef,
    0x92, 0x13, 0x9c, 0xdd, 0x96, 0xa6, 0x77, 0xbb, 0xf3, 0xed, 0xee, 0x7b,
    0xbf, 0xfb, 0xe3, 0xcf, 0x0e, 0x04, 0x00, 0x3b};

#endif  // SPRITES_H
