// Microsoft 8K Nascom ROM BASIC
// (c) 1978 Microsoft Corporation
// used for educational historical recreation purposes
// Sourcecode attached below

static const byte basrom[8192] ={
0xc3, 0x03, 0xe0, 0xf3, 0xdd, 0x21, 0x00, 0x00,
0xc3, 0x12, 0xe0, 0x8b, 0xe9, 0xf2, 0xf0, 0xc3,
0x3c, 0xe7, 0x21, 0x00, 0x10, 0xf9, 0xc3, 0xbb,
0xfe, 0x11, 0xdf, 0xe2, 0x06, 0x63, 0x21, 0x00,
0x10, 0x1a, 0x77, 0x23, 0x13, 0x05, 0xc2, 0x21,
0xe0, 0xf9, 0xcd, 0xdf, 0xe4, 0xcd, 0x81, 0xeb,
0x32, 0xaa, 0x10, 0x32, 0xf9, 0x10, 0x21, 0x03,
0xe1, 0xcd, 0x10, 0xf2, 0xcd, 0xfc, 0xe4, 0xcd,
0x36, 0xe8, 0xb7, 0xc2, 0x5b, 0xe0, 0x21, 0x5d,
0x11, 0x23, 0x7c, 0xb5, 0xca, 0x6d, 0xe0, 0x7e,
0x47, 0x2f, 0x77, 0xbe, 0x70, 0xca, 0x49, 0xe0,
0xc3, 0x6d, 0xe0, 0xcd, 0xa5, 0xe9, 0xb7, 0xc2,
0xad, 0xe3, 0xeb, 0x2b, 0x3e, 0xd9, 0x46, 0x77,
0xbe, 0x70, 0xc2, 0x36, 0xe0, 0x2b, 0x11, 0x5c,
0x11, 0xcd, 0x8a, 0xe6, 0xda, 0x36, 0xe0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x11, 0xce, 0xff, 0x22, 0xaf, 0x10, 0x19, 0x22,
0x5a, 0x10, 0xcd, 0xba, 0xe4, 0x2a, 0x5a, 0x10,
0x11, 0xef, 0xff, 0x19, 0x11, 0xf9, 0x10, 0x7d,
0x93, 0x6f, 0x7c, 0x9a, 0x67, 0xe5, 0x21, 0xc5,
0xe0, 0xcd, 0x10, 0xf2, 0xe1, 0xcd, 0xad, 0xf9,
0x21, 0xb7, 0xe0, 0xcd, 0x10, 0xf2, 0x31, 0x66,
0x10, 0xcd, 0xdf, 0xe4, 0xc3, 0xf8, 0xe3, 0x20,
0x42, 0x79, 0x74, 0x65, 0x73, 0x20, 0x66, 0x72,
0x65, 0x65, 0x0d, 0x00, 0x00, 0x4e, 0x41, 0x53,
0x43, 0x4f, 0x4d, 0x20, 0x52, 0x4f, 0x4d, 0x20,
0x42, 0x41, 0x53, 0x49, 0x43, 0x20, 0x56, 0x65,
0x72, 0x20, 0x34, 0x2e, 0x37, 0x20, 0x20, 0x20,
0x0d, 0x43, 0x6f, 0x70, 0x79, 0x72, 0x69, 0x67,
0x68, 0x74, 0x20, 0x28, 0x43, 0x29, 0x20, 0x31,
0x39, 0x37, 0x38, 0x20, 0x62, 0x79, 0x20, 0x4d,
0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74,
0x0d, 0x00, 0x00, 0x4d, 0x65, 0x6d, 0x6f, 0x72,
0x79, 0x20, 0x73, 0x69, 0x7a, 0x65, 0x00, 0x22,
0xf8, 0xe6, 0xf8, 0x38, 0xf8, 0x03, 0x10, 0xd0,
0xf0, 0x41, 0xf4, 0xfe, 0xf0, 0xac, 0xfa, 0x8b,
0xfb, 0xc7, 0xf6, 0xfa, 0xfa, 0x00, 0xfc, 0x06,
0xfc, 0x67, 0xfc, 0x7c, 0xfc, 0xa3, 0xf5, 0xbc,
0xfd, 0x51, 0x10, 0x82, 0xf3, 0x9a, 0xf1, 0x1c,
0xf4, 0x91, 0xf3, 0xa2, 0xf3, 0xb2, 0xf3, 0xe2,
0xf3, 0xec, 0xf3, 0xc5, 0x4e, 0x44, 0xc6, 0x4f,
0x52, 0xce, 0x45, 0x58, 0x54, 0xc4, 0x41, 0x54,
0x41, 0xc9, 0x4e, 0x50, 0x55, 0x54, 0xc4, 0x49,
0x4d, 0xd2, 0x45, 0x41, 0x44, 0xcc, 0x45, 0x54,
0xc7, 0x4f, 0x54, 0x4f, 0xd2, 0x55, 0x4e, 0xc9,
0x46, 0xd2, 0x45, 0x53, 0x54, 0x4f, 0x52, 0x45,
0xc7, 0x4f, 0x53, 0x55, 0x42, 0xd2, 0x45, 0x54,
0x55, 0x52, 0x4e, 0xd2, 0x45, 0x4d, 0xd3, 0x54,
0x4f, 0x50, 0xcf, 0x55, 0x54, 0xcf, 0x4e, 0xce,
0x55, 0x4c, 0x4c, 0xd7, 0x41, 0x49, 0x54, 0xc4,
0x45, 0x46, 0xd0, 0x4f, 0x4b, 0x45, 0xc4, 0x4f,
0x4b, 0x45, 0xd3, 0x43, 0x52, 0x45, 0x45, 0x4e,
0xcc, 0x49, 0x4e, 0x45, 0x53, 0xc3, 0x4c, 0x53,
0xd7, 0x49, 0x44, 0x54, 0x48, 0xcd, 0x4f, 0x4e,
0x49, 0x54, 0x4f, 0x52, 0xd3, 0x45, 0x54, 0xd2,
0x45, 0x53, 0x45, 0x54, 0xd0, 0x52, 0x49, 0x4e,
0x54, 0xc3, 0x4f, 0x4e, 0x54, 0xcc, 0x49, 0x53,
0x54, 0xc3, 0x4c, 0x45, 0x41, 0x52, 0xc3, 0x4c,
0x4f, 0x41, 0x44, 0xc3, 0x53, 0x41, 0x56, 0x45,
0xce, 0x45, 0x57, 0xd4, 0x41, 0x42, 0x28, 0xd4,
0x4f, 0xc6, 0x4e, 0xd3, 0x50, 0x43, 0x28, 0xd4,
0x48, 0x45, 0x4e, 0xce, 0x4f, 0x54, 0xd3, 0x54,
0x45, 0x50, 0xab, 0xad, 0xaa, 0xaf, 0xde, 0xc1,
0x4e, 0x44, 0xcf, 0x52, 0xbe, 0xbd, 0xbc, 0xd3,
0x47, 0x4e, 0xc9, 0x4e, 0x54, 0xc1, 0x42, 0x53,
0xd5, 0x53, 0x52, 0xc6, 0x52, 0x45, 0xc9, 0x4e,
0x50, 0xd0, 0x4f, 0x53, 0xd3, 0x51, 0x52, 0xd2,
0x4e, 0x44, 0xcc, 0x4f, 0x47, 0xc5, 0x58, 0x50,
0xc3, 0x4f, 0x53, 0xd3, 0x49, 0x4e, 0xd4, 0x41,
0x4e, 0xc1, 0x54, 0x4e, 0xd0, 0x45, 0x45, 0x4b,
0xc4, 0x45, 0x45, 0x4b, 0xd0, 0x4f, 0x49, 0x4e,
0x54, 0xcc, 0x45, 0x4e, 0xd3, 0x54, 0x52, 0x24,
0xd6, 0x41, 0x4c, 0xc1, 0x53, 0x43, 0xc3, 0x48,
0x52, 0x24, 0xcc, 0x45, 0x46, 0x54, 0x24, 0xd2,
0x49, 0x47, 0x48, 0x54, 0x24, 0xcd, 0x49, 0x44,
0x24, 0x80, 0x72, 0xe8, 0x79, 0xe7, 0xf6, 0xec,
0x70, 0xea, 0xfd, 0xeb, 0x28, 0xef, 0x2c, 0xec,
0x87, 0xea, 0x2d, 0xea, 0x10, 0xea, 0xff, 0xea,
0x46, 0xe8, 0x1c, 0xea, 0x4b, 0xea, 0x72, 0xea,
0x70, 0xe8, 0x4d, 0xf4, 0xe1, 0xea, 0xb1, 0xe8,
0x53, 0xf4, 0x06, 0xf1, 0xaa, 0xf5, 0xc7, 0xfd,
0xe6, 0xfd, 0xad, 0xfd, 0x8b, 0xfd, 0xa5, 0xfd,
0xa2, 0xfe, 0x54, 0x10, 0x57, 0x10, 0x23, 0xeb,
0x9e, 0xe8, 0xdd, 0xe6, 0xca, 0xe9, 0xf9, 0xf4,
0xc3, 0xf4, 0xb9, 0xe4, 0x79, 0x94, 0xf9, 0x79,
0xc8, 0xf5, 0x7c, 0x06, 0xf7, 0x7c, 0x67, 0xf7,
0x7f, 0xb5, 0xfa, 0x50, 0x81, 0xee, 0x46, 0x80,
0xee, 0x4e, 0x46, 0x53, 0x4e, 0x52, 0x47, 0x4f,
0x44, 0x46, 0x43, 0x4f, 0x56, 0x4f, 0x4d, 0x55,
0x4c, 0x42, 0x53, 0x44, 0x44, 0x2f, 0x30, 0x49,
0x44, 0x54, 0x4d, 0x4f, 0x53, 0x4c, 0x53, 0x53,
0x54, 0x43, 0x4e, 0x55, 0x46, 0x4d, 0x4f, 0xc3,
0xae, 0xe0, 0xc3, 0xa0, 0xe9, 0xd3, 0x00, 0xc9,
0xd6, 0x00, 0x6f, 0x7c, 0xde, 0x00, 0x67, 0x78,
0xde, 0x00, 0x47, 0x3e, 0x00, 0xc9, 0x00, 0x00,
0x00, 0x35, 0x4a, 0xca, 0x99, 0x39, 0x1c, 0x76,
0x98, 0x22, 0x95, 0xb3, 0x98, 0x0a, 0xdd, 0x47,
0x98, 0x53, 0xd1, 0x99, 0x99, 0x0a, 0x1a, 0x9f,
0x98, 0x65, 0xbc, 0xcd, 0x98, 0xd6, 0x77, 0x3e,
0x98, 0x52, 0xc7, 0x4f, 0x80, 0xdb, 0x00, 0xc9,
0x01, 0x2f, 0x1c, 0x00, 0x00, 0x05, 0x00, 0x05,
0x00, 0x00, 0x00, 0x00, 0x00, 0xc3, 0x07, 0xe6,
0xc3, 0x79, 0xff, 0xc3, 0x40, 0xff, 0xc3, 0x55,
0xff, 0x5d, 0x11, 0xfe, 0xff, 0xfa, 0x10, 0x20,
0x45, 0x72, 0x72, 0x6f, 0x72, 0x00, 0x20, 0x69,
0x6e, 0x20, 0x00, 0x4f, 0x6b, 0x0d, 0x00, 0x00,
0x42, 0x72, 0x65, 0x61, 0x6b, 0x00, 0x21, 0x04,
0x00, 0x39, 0x7e, 0x23, 0xfe, 0x81, 0xc0, 0x4e,
0x23, 0x46, 0x23, 0xe5, 0x69, 0x60, 0x7a, 0xb3,
0xeb, 0xca, 0x70, 0xe3, 0xeb, 0xcd, 0x8a, 0xe6,
0x01, 0x0d, 0x00, 0xe1, 0xc8, 0x09, 0xc3, 0x5a,
0xe3, 0xcd, 0x93, 0xe3, 0xc5, 0xe3, 0xc1, 0xcd,
0x8a, 0xe6, 0x7e, 0x02, 0xc8, 0x0b, 0x2b, 0xc3,
0x7f, 0xe3, 0xe5, 0x2a, 0xda, 0x10, 0x06, 0x00,
0x09, 0x09, 0x3e, 0xe5, 0x3e, 0xd0, 0x95, 0x6f,
0x3e, 0xff, 0x9c, 0xda, 0xa2, 0xe3, 0x67, 0x39,
0xe1, 0xd8, 0x1e, 0x0c, 0xc3, 0xc1, 0xe3, 0x2a,
0xc9, 0x10, 0x22, 0x5c, 0x10, 0x1e, 0x02, 0x01,
0x1e, 0x14, 0x01, 0x1e, 0x00, 0x01, 0x1e, 0x12,
0x01, 0x1e, 0x22, 0x01, 0x1e, 0x0a, 0x01, 0x1e,
0x18, 0xcd, 0xdf, 0xe4, 0x32, 0x45, 0x10, 0xcd,
0x74, 0xeb, 0x21, 0xb9, 0xe2, 0x57, 0x3e, 0x3f,
0xcd, 0x9b, 0xe6, 0x19, 0x7e, 0xcd, 0x9b, 0xe6,
0xcd, 0x36, 0xe8, 0xcd, 0x9b, 0xe6, 0x21, 0x3f,
0xe3, 0xcd, 0x10, 0xf2, 0x2a, 0x5c, 0x10, 0x11,
0xfe, 0xff, 0xcd, 0x8a, 0xe6, 0xca, 0x12, 0xe0,
0x7c, 0xa5, 0x3c, 0xc4, 0xa5, 0xf9, 0x3e, 0xc1,
0xaf, 0x32, 0x45, 0x10, 0xcd, 0x74, 0xeb, 0x21,
0x4b, 0xe3, 0xcd, 0x10, 0xf2, 0x21, 0xff, 0xff,
0x22, 0x5c, 0x10, 0xcd, 0xf2, 0xe5, 0xda, 0x05,
0xe4, 0xcd, 0x36, 0xe8, 0x3c, 0x3d, 0xca, 0x05,
0xe4, 0xf5, 0xcd, 0xa5, 0xe9, 0xd5, 0xcd, 0x09,
0xe5, 0x47, 0xd1, 0xf1, 0xd2, 0x16, 0xe8, 0xd5,
0xc5, 0xaf, 0x32, 0xcc, 0x10, 0xcd, 0x36, 0xe8,
0xb7, 0xf5, 0xcd, 0x99, 0xe4, 0xda, 0x3e, 0xe4,
0xf1, 0xf5, 0xca, 0x46, 0xea, 0xb7, 0xc5, 0xd2,
0x55, 0xe4, 0xeb, 0x2a, 0xd6, 0x10, 0x1a, 0x02,
0x03, 0x13, 0xcd, 0x8a, 0xe6, 0xc2, 0x46, 0xe4,
0x60, 0x69, 0x22, 0xd6, 0x10, 0xd1, 0xf1, 0xca,
0x7c, 0xe4, 0x2a, 0xd6, 0x10, 0xe3, 0xc1, 0x09,
0xe5, 0xcd, 0x79, 0xe3, 0xe1, 0x22, 0xd6, 0x10,
0xeb, 0x74, 0xd1, 0x23, 0x23, 0x73, 0x23, 0x72,
0x23, 0x11, 0x61, 0x10, 0x1a, 0x77, 0x23, 0x13,
0xb7, 0xc2, 0x74, 0xe4, 0xcd, 0xc5, 0xe4, 0x23,
0xeb, 0x62, 0x6b, 0x7e, 0x23, 0xb6, 0xca, 0x05,
0xe4, 0x23, 0x23, 0x23, 0xaf, 0xbe, 0x23, 0xc2,
0x8d, 0xe4, 0xeb, 0x73, 0x23, 0x72, 0xc3, 0x81,
0xe4, 0x2a, 0x5e, 0x10, 0x44, 0x4d, 0x7e, 0x23,
0xb6, 0x2b, 0xc8, 0x23, 0x23, 0x7e, 0x23, 0x66,
0x6f, 0xcd, 0x8a, 0xe6, 0x60, 0x69, 0x7e, 0x23,
0x66, 0x6f, 0x3f, 0xc8, 0x3f, 0xd0, 0xc3, 0x9c,
0xe4, 0xc0, 0x2a, 0x5e, 0x10, 0xaf, 0x77, 0x23,
0x77, 0x23, 0x22, 0xd6, 0x10, 0x2a, 0x5e, 0x10,
0x2b, 0x22, 0xce, 0x10, 0x2a, 0xaf, 0x10, 0x22,
0xc3, 0x10, 0xaf, 0xcd, 0x46, 0xe8, 0x2a, 0xd6,
0x10, 0x22, 0xd8, 0x10, 0x22, 0xda, 0x10, 0xc1,
0x2a, 0x5a, 0x10, 0xf9, 0x21, 0xb3, 0x10, 0x22,
0xb1, 0x10, 0xaf, 0x6f, 0x67, 0x22, 0xd4, 0x10,
0x32, 0xcb, 0x10, 0x22, 0xde, 0x10, 0xe5, 0xc5,
0x2a, 0xce, 0x10, 0xc9, 0x3e, 0x3f, 0xcd, 0x9b,
0xe6, 0x3e, 0x20, 0xcd, 0x9b, 0xe6, 0xc3, 0x4e,
0x10, 0xaf, 0x32, 0xae, 0x10, 0x0e, 0x05, 0x11,
0x61, 0x10, 0x7e, 0xfe, 0x20, 0xca, 0x91, 0xe5,
0x47, 0xfe, 0x22, 0xca, 0xb1, 0xe5, 0xb7, 0xca,
0xb8, 0xe5, 0x3a, 0xae, 0x10, 0xb7, 0x7e, 0xc2,
0x91, 0xe5, 0xfe, 0x3f, 0x3e, 0x9e, 0xca, 0x91,
0xe5, 0x7e, 0xfe, 0x30, 0xda, 0x3c, 0xe5, 0xfe,
0x3c, 0xda, 0x91, 0xe5, 0xd5, 0x11, 0x42, 0xe1,
0xc5, 0x01, 0x8d, 0xe5, 0xc5, 0x06, 0x7f, 0x7e,
0xfe, 0x61, 0xda, 0x55, 0xe5, 0xfe, 0x7b, 0xd2,
0x55, 0xe5, 0xe6, 0x5f, 0x77, 0x4e, 0xeb, 0x23,
0xb6, 0xf2, 0x57, 0xe5, 0x04, 0x7e, 0xe6, 0x7f,
0xc8, 0xb9, 0xc2, 0x57, 0xe5, 0xeb, 0xe5, 0x13,
0x1a, 0xb7, 0xfa, 0x89, 0xe5, 0x4f, 0x78, 0xfe,
0x88, 0xc2, 0x78, 0xe5, 0xcd, 0x36, 0xe8, 0x2b,
0x23, 0x7e, 0xfe, 0x61, 0xda, 0x81, 0xe5, 0xe6,
0x5f, 0xb9, 0xca, 0x67, 0xe5, 0xe1, 0xc3, 0x55,
0xe5, 0x48, 0xf1, 0xeb, 0xc9, 0xeb, 0x79, 0xc1,
0xd1, 0x23, 0x12, 0x13, 0x0c, 0xd6, 0x3a, 0xca,
0x9f, 0xe5, 0xfe, 0x49, 0xc2, 0xa2, 0xe5, 0x32,
0xae, 0x10, 0xd6, 0x54, 0xc2, 0x12, 0xe5, 0x47,
0x7e, 0xb7, 0xca, 0xb8, 0xe5, 0xb8, 0xca, 0x91,
0xe5, 0x23, 0x12, 0x0c, 0x13, 0xc3, 0xa8, 0xe5,
0x21, 0x60, 0x10, 0x12, 0x13, 0x12, 0x13, 0x12,
0xc9, 0x3a, 0x44, 0x10, 0xb7, 0x3e, 0x00, 0x32,
0x44, 0x10, 0xc2, 0xd5, 0xe5, 0x05, 0xca, 0xf2,
0xe5, 0xcd, 0x9b, 0xe6, 0x3e, 0x05, 0x2b, 0xca,
0xe9, 0xe5, 0x7e, 0xcd, 0x9b, 0xe6, 0xc3, 0x10,
0xe6, 0x05, 0x2b, 0xcd, 0x9b, 0xe6, 0xc2, 0x10,
0xe6, 0xcd, 0x9b, 0xe6, 0xcd, 0x81, 0xeb, 0xc3,
0x07, 0xe6, 0xcd, 0x6d, 0xfe, 0xca, 0x07, 0xe6,
0x2a, 0x75, 0x0c, 0x7e, 0xfe, 0x74, 0xca, 0x07,
0xe6, 0xcd, 0xe8, 0xfe, 0xc3, 0x86, 0xeb, 0x21,
0x61, 0x10, 0x06, 0x01, 0xaf, 0x32, 0x44, 0x10,
0xcd, 0xcc, 0xe6, 0x4f, 0xfe, 0x7f, 0xca, 0xc1,
0xe5, 0x3a, 0x44, 0x10, 0xb7, 0xca, 0x29, 0xe6,
0x3e, 0x00, 0xcd, 0x9b, 0xe6, 0xaf, 0x32, 0x44,
0x10, 0x79, 0xfe, 0x07, 0xca, 0x6d, 0xe6, 0xfe,
0x03, 0xcc, 0x81, 0xeb, 0x37, 0xc8, 0xfe, 0x0d,
0xca, 0x7c, 0xeb, 0xfe, 0x15, 0xca, 0xec, 0xe5,
0xfe, 0x40, 0xca, 0xe9, 0xe5, 0xfe, 0x5f, 0xca,
0xe1, 0xe5, 0xfe, 0x08, 0xca, 0xe1, 0xe5, 0xfe,
0x12, 0xc2, 0x68, 0xe6, 0xc5, 0xd5, 0xe5, 0x36,
0x00, 0xcd, 0xf4, 0xff, 0x21, 0x61, 0x10, 0xcd,
0x10, 0xf2, 0xe1, 0xd1, 0xc1, 0xc3, 0x10, 0xe6,
0xfe, 0x20, 0xda, 0x10, 0xe6, 0x78, 0xfe, 0x49,
0x3e, 0x07, 0xd2, 0x82, 0xe6, 0x79, 0x71, 0x32,
0xcc, 0x10, 0x23, 0x04, 0xcd, 0x9b, 0xe6, 0xc3,
0x10, 0xe6, 0xcd, 0x9b, 0xe6, 0x3e, 0x08, 0xc3,
0x7c, 0xe6, 0x7c, 0x92, 0xc0, 0x7d, 0x93, 0xc9,
0x7e, 0xe3, 0xbe, 0x23, 0xe3, 0xca, 0x36, 0xe8,
0xc3, 0xad, 0xe3, 0xf5, 0x3a, 0x45, 0x10, 0xb7,
0xc2, 0x45, 0xf2, 0xf1, 0xc5, 0xf5, 0xfe, 0x20,
0xda, 0xbf, 0xe6, 0x3a, 0x42, 0x10, 0x47, 0x3a,
0xab, 0x10, 0x04, 0xca, 0xbb, 0xe6, 0x05, 0xb8,
0xcc, 0x81, 0xeb, 0x3c, 0x32, 0xab, 0x10, 0xf1,
0xc1, 0xf5, 0xf1, 0xf5, 0xc5, 0x4f, 0xcd, 0xd9,
0xfc, 0xc1, 0xf1, 0xc9, 0xcd, 0x05, 0xfd, 0xe6,
0x7f, 0xfe, 0x0f, 0xc0, 0x3a, 0x45, 0x10, 0x2f,
0x32, 0x45, 0x10, 0xaf, 0xc9, 0xcd, 0xa5, 0xe9,
0xc0, 0xc1, 0xcd, 0x99, 0xe4, 0xc5, 0xcd, 0x33,
0xe7, 0xe1, 0x4e, 0x23, 0x46, 0x23, 0x78, 0xb1,
0xca, 0xf8, 0xe3, 0xcd, 0x46, 0xe7, 0xcd, 0x61,
0xe8, 0xc5, 0xcd, 0x81, 0xeb, 0x5e, 0x23, 0x56,
0x23, 0xe5, 0xeb, 0xcd, 0xad, 0xf9, 0x3e, 0x20,
0xe1, 0xcd, 0x9b, 0xe6, 0x7e, 0xb7, 0x23, 0xca,
0xe9, 0xe6, 0xf2, 0x09, 0xe7, 0xd6, 0x7f, 0x4f,
0x11, 0x43, 0xe1, 0x1a, 0x13, 0xb7, 0xf2, 0x1b,
0xe7, 0x0d, 0xc2, 0x1b, 0xe7, 0xe6, 0x7f, 0xcd,
0x9b, 0xe6, 0x1a, 0x13, 0xb7, 0xf2, 0x25, 0xe7,
0xc3, 0x0c, 0xe7, 0xe5, 0x2a, 0x48, 0x10, 0x22,
0x46, 0x10, 0xe1, 0xc9, 0x21, 0xde, 0xfe, 0x22,
0x7e, 0x0c, 0xc3, 0xf8, 0xe3, 0xfe, 0xe5, 0xd5,
0x2a, 0x46, 0x10, 0x11, 0xff, 0xff, 0xed, 0x5a,
0x22, 0x46, 0x10, 0xd1, 0xe1, 0xf0, 0xe5, 0x2a,
0x48, 0x10, 0x22, 0x46, 0x10, 0x3a, 0x4c, 0x10,
0xb7, 0xc2, 0xe5, 0xfe, 0xcd, 0x05, 0xfd, 0xfe,
0x03, 0xca, 0x70, 0xe7, 0xe1, 0xc3, 0x46, 0xe7,
0x2a, 0x48, 0x10, 0x22, 0x46, 0x10, 0xc3, 0xb1,
0xe0, 0x3e, 0x64, 0x32, 0xcb, 0x10, 0xcd, 0x87,
0xea, 0xc1, 0xe5, 0xcd, 0x70, 0xea, 0x22, 0xc7,
0x10, 0x21, 0x02, 0x00, 0x39, 0xcd, 0x5a, 0xe3,
0xd1, 0xc2, 0xa9, 0xe7, 0x09, 0xd5, 0x2b, 0x56,
0x2b, 0x5e, 0x23, 0x23, 0xe5, 0x2a, 0xc7, 0x10,
0xcd, 0x8a, 0xe6, 0xe1, 0xc2, 0x8d, 0xe7, 0xd1,
0xf9, 0xeb, 0x0e, 0x08, 0xcd, 0x8a, 0xe3, 0xe5,
0x2a, 0xc7, 0x10, 0xe3, 0xe5, 0x2a, 0x5c, 0x10,
0xe3, 0xcd, 0x44, 0xed, 0xcd, 0x90, 0xe6, 0xa6,
0xcd, 0x41, 0xed, 0xe5, 0xcd, 0x5f, 0xf8, 0xe1,
0xc5, 0xd5, 0x01, 0x00, 0x81, 0x51, 0x5a, 0x7e,
0xfe, 0xab, 0x3e, 0x01, 0xc2, 0xe5, 0xe7, 0xcd,
0x36, 0xe8, 0xcd, 0x41, 0xed, 0xe5, 0xcd, 0x5f,
0xf8, 0xcd, 0x13, 0xf8, 0xe1, 0xc5, 0xd5, 0xf5,
0x33, 0xe5, 0x2a, 0xce, 0x10, 0xe3, 0x06, 0x81,
0xc5, 0x33, 0xcd, 0x40, 0xfd, 0xb7, 0xc4, 0x66,
0xe8, 0x22, 0xce, 0x10, 0x7e, 0xfe, 0x3a, 0xca,
0x16, 0xe8, 0xb7, 0xc2, 0xad, 0xe3, 0x23, 0x7e,
0x23, 0xb6, 0xca, 0x7a, 0xe8, 0x23, 0x5e, 0x23,
0x56, 0xeb, 0x22, 0x5c, 0x10, 0xeb, 0xcd, 0x36,
0xe8, 0x11, 0xf2, 0xe7, 0xd5, 0xc8, 0xd6, 0x80,
0xda, 0x87, 0xea, 0xfe, 0x25, 0xd2, 0xad, 0xe3,
0x07, 0x4f, 0x06, 0x00, 0xeb, 0x21, 0x5a, 0xe2,
0x09, 0x4e, 0x23, 0x46, 0xc5, 0xeb, 0x23, 0x7e,
0xfe, 0x3a, 0xd0, 0xfe, 0x20, 0xca, 0x36, 0xe8,
0xfe, 0x30, 0x3f, 0x3c, 0x3d, 0xc9, 0xeb, 0x2a,
0x5e, 0x10, 0xca, 0x5b, 0xe8, 0xeb, 0xcd, 0xa5,
0xe9, 0xe5, 0xcd, 0x99, 0xe4, 0x60, 0x69, 0xd1,
0xd2, 0x46, 0xea, 0x2b, 0x22, 0xdc, 0x10, 0xeb,
0xc9, 0xcd, 0x40, 0xfd, 0xb7, 0xc8, 0xcd, 0xcc,
0xe6, 0xfe, 0x13, 0xcc, 0xcc, 0xe6, 0xfe, 0x03,
0xc0, 0xf6, 0xc0, 0x22, 0xce, 0x10, 0x21, 0xf6,
0xff, 0xc1, 0x2a, 0x5c, 0x10, 0xf5, 0x7d, 0xa4,
0x3c, 0xca, 0x8d, 0xe8, 0x22, 0xd2, 0x10, 0x2a,
0xce, 0x10, 0x22, 0xd4, 0x10, 0xaf, 0x32, 0x45,
0x10, 0xcd, 0x74, 0xeb, 0xf1, 0x21, 0x50, 0xe3,
0xc2, 0xe1, 0xe3, 0xc3, 0xf8, 0xe3, 0x2a, 0xd4,
0x10, 0x7c, 0xb5, 0x1e, 0x20, 0xca, 0xc1, 0xe3,
0xeb, 0x2a, 0xd2, 0x10, 0x22, 0x5c, 0x10, 0xeb,
0xc9, 0xcd, 0x84, 0xf4, 0xc0, 0x32, 0x41, 0x10,
0xc9, 0x06, 0xff, 0xcd, 0x36, 0xe8, 0x78, 0x32,
0xce, 0x10, 0x3e, 0x01, 0x32, 0xcb, 0x10, 0xcd,
0x2d, 0xef, 0xe5, 0x32, 0xcb, 0x10, 0x60, 0x69,
0x0b, 0x0b, 0x0b, 0x0b, 0x3a, 0xce, 0x10, 0xb7,
0xf5, 0xeb, 0x19, 0xeb, 0x4e, 0x06, 0x00, 0x09,
0x09, 0x23, 0xe5, 0xd5, 0xc5, 0x3a, 0xce, 0x10,
0xfe, 0xff, 0xcc, 0xd5, 0xfc, 0x3a, 0xce, 0x10,
0xfe, 0xff, 0xc4, 0xc8, 0xfc, 0x00, 0x00, 0x00,
0x21, 0x00, 0x00, 0x22, 0x4a, 0x10, 0xc1, 0xd1,
0xe1, 0x06, 0xd2, 0xc3, 0xd6, 0xff, 0x78, 0xcd,
0xb7, 0xf4, 0xcd, 0xb7, 0xf4, 0xc3, 0x1d, 0xe9,
0x0e, 0x04, 0xcd, 0xb4, 0xf4, 0xb8, 0xc2, 0x10,
0xe9, 0x0d, 0xc2, 0x12, 0xe9, 0xcd, 0x44, 0xed,
0xcd, 0x8a, 0xe6, 0xca, 0x37, 0xe9, 0xf1, 0xf5,
0x7e, 0xf4, 0xba, 0xf4, 0xfc, 0xb4, 0xf4, 0x77,
0xcd, 0x40, 0xe9, 0x23, 0xc3, 0x20, 0xe9, 0xcd,
0x4d, 0xe9, 0xcd, 0xd5, 0xfc, 0xf1, 0xe1, 0xc9,
0xe5, 0x2a, 0x4a, 0x10, 0x06, 0x00, 0x4f, 0x09,
0x22, 0x4a, 0x10, 0xe1, 0xc9, 0x3a, 0xce, 0x10,
0xb7, 0xfa, 0x60, 0xe9, 0x3a, 0x4a, 0x10, 0xcd,
0xba, 0xf4, 0x3a, 0x4b, 0x10, 0xc3, 0xba, 0xf4,
0xcd, 0xb4, 0xf4, 0xf5, 0xcd, 0xb4, 0xf4, 0xc1,
0x58, 0x57, 0x2a, 0x4a, 0x10, 0xcd, 0x8a, 0xe6,
0xc8, 0xcd, 0xd5, 0xfc, 0xc3, 0x6b, 0xf5, 0x7e,
0xfe, 0x41, 0xd8, 0xfe, 0x5b, 0x3f, 0xc9, 0xcd,
0x36, 0xe8, 0xcd, 0x41, 0xed, 0xcd, 0x13, 0xf8,
0xfa, 0xa0, 0xe9, 0x3a, 0xe7, 0x10, 0xfe, 0x90,
0xda, 0xbb, 0xf8, 0x01, 0x80, 0x90, 0x11, 0x00,
0x00, 0xe5, 0xcd, 0x8e, 0xf8, 0xe1, 0x51, 0xc8,
0x1e, 0x08, 0xc3, 0xc1, 0xe3, 0x2b, 0x11, 0x00,
0x00, 0xcd, 0x36, 0xe8, 0xd0, 0xe5, 0xf5, 0x21,
0x98, 0x19, 0xcd, 0x8a, 0xe6, 0xda, 0xad, 0xe3,
0x62, 0x6b, 0x19, 0x29, 0x19, 0x29, 0xf1, 0xd6,
0x30, 0x5f, 0x16, 0x00, 0x19, 0xeb, 0xe1, 0xc3,
0xa9, 0xe9, 0xca, 0xc9, 0xe4, 0xcd, 0x82, 0xe9,
0x2b, 0xcd, 0x36, 0xe8, 0xe5, 0x2a, 0xaf, 0x10,
0xca, 0xed, 0xe9, 0xe1, 0xcd, 0x90, 0xe6, 0x2c,
0xd5, 0xcd, 0x82, 0xe9, 0x2b, 0xcd, 0x36, 0xe8,
0xc2, 0xad, 0xe3, 0xe3, 0xeb, 0x7d, 0x93, 0x5f,
0x7c, 0x9a, 0x57, 0xda, 0xa2, 0xe3, 0xe5, 0x2a,
0xd6, 0x10, 0x01, 0x28, 0x00, 0x09, 0xcd, 0x8a,
0xe6, 0xd2, 0xa2, 0xe3, 0xeb, 0x22, 0x5a, 0x10,
0xe1, 0x22, 0xaf, 0x10, 0xe1, 0xc3, 0xc9, 0xe4,
0xca, 0xc5, 0xe4, 0xcd, 0xc9, 0xe4, 0x01, 0xf2,
0xe7, 0xc3, 0x2c, 0xea, 0x0e, 0x03, 0xcd, 0x8a,
0xe3, 0xc1, 0xe5, 0xe5, 0x2a, 0x5c, 0x10, 0xe3,
0x3e, 0x8c, 0xf5, 0x33, 0xc5, 0xcd, 0xa5, 0xe9,
0xcd, 0x72, 0xea, 0xe5, 0x2a, 0x5c, 0x10, 0xcd,
0x8a, 0xe6, 0xe1, 0x23, 0xdc, 0x9c, 0xe4, 0xd4,
0x99, 0xe4, 0x60, 0x69, 0x2b, 0xd8, 0x1e, 0x0e,
0xc3, 0xc1, 0xe3, 0xc0, 0x16, 0xff, 0xcd, 0x56,
0xe3, 0xf9, 0xfe, 0x8c, 0x1e, 0x04, 0xc2, 0xc1,
0xe3, 0xe1, 0x22, 0x5c, 0x10, 0x23, 0x7c, 0xb5,
0xc2, 0x6a, 0xea, 0x3a, 0xcc, 0x10, 0xb7, 0xc2,
0xf7, 0xe3, 0x21, 0xf2, 0xe7, 0xe3, 0x3e, 0xe1,
0x01, 0x3a, 0x0e, 0x00, 0x06, 0x00, 0x79, 0x48,
0x47, 0x7e, 0xb7, 0xc8, 0xb8, 0xc8, 0x23, 0xfe,
0x22, 0xca, 0x76, 0xea, 0xc3, 0x79, 0xea, 0xcd,
0x2d, 0xef, 0xcd, 0x90, 0xe6, 0xb4, 0xd5, 0x3a,
0xad, 0x10, 0xf5, 0xcd, 0x5a, 0xed, 0xf1, 0xe3,
0x22, 0xce, 0x10, 0x1f, 0xcd, 0x46, 0xed, 0xca,
0xda, 0xea, 0xe5, 0x2a, 0xe4, 0x10, 0xe5, 0x23,
0x23, 0x5e, 0x23, 0x56, 0x2a, 0x5e, 0x10, 0xcd,
0x8a, 0xe6, 0xd2, 0xc9, 0xea, 0x2a, 0x5a, 0x10,
0xcd, 0x8a, 0xe6, 0xd1, 0xd2, 0xd1, 0xea, 0x21,
0xbf, 0x10, 0xcd, 0x8a, 0xe6, 0xd2, 0xd1, 0xea,
0x3e, 0xd1, 0xcd, 0x71, 0xf3, 0xeb, 0xcd, 0xaa,
0xf1, 0xcd, 0x71, 0xf3, 0xe1, 0xcd, 0x6e, 0xf8,
0xe1, 0xc9, 0xe5, 0xcd, 0x6b, 0xf8, 0xd1, 0xe1,
0xc9, 0xcd, 0x84, 0xf4, 0x7e, 0x47, 0xfe, 0x8c,
0xca, 0xf0, 0xea, 0xcd, 0x90, 0xe6, 0x88, 0x2b,
0x4b, 0x0d, 0x78, 0xca, 0x1e, 0xe8, 0xcd, 0xa6,
0xe9, 0xfe, 0x2c, 0xc0, 0xc3, 0xf1, 0xea, 0xcd,
0x5a, 0xed, 0x7e, 0xfe, 0x88, 0xca, 0x0d, 0xeb,
0xcd, 0x90, 0xe6, 0xa9, 0x2b, 0xcd, 0x44, 0xed,
0xcd, 0x13, 0xf8, 0xca, 0x72, 0xea, 0xcd, 0x36,
0xe8, 0xda, 0x2d, 0xea, 0xc3, 0x1d, 0xe8, 0x2b,
0xcd, 0x36, 0xe8, 0xca, 0x81, 0xeb, 0xc8, 0xfe,
0xa5, 0xca, 0xaf, 0xeb, 0xfe, 0xa8, 0xca, 0xaf,
0xeb, 0xe5, 0xfe, 0x2c, 0xca, 0x98, 0xeb, 0xfe,
0x3b, 0xca, 0xd2, 0xeb, 0xc1, 0xcd, 0x5a, 0xed,
0xe5, 0x3a, 0xad, 0x10, 0xb7, 0xc2, 0x6d, 0xeb,
0xcd, 0xb8, 0xf9, 0xcd, 0xce, 0xf1, 0x36, 0x20,
0x2a, 0xe4, 0x10, 0x34, 0x2a, 0xe4, 0x10, 0x3a,
0x42, 0x10, 0x47, 0x04, 0xca, 0x69, 0xeb, 0x04,
0x3a, 0xab, 0x10, 0x86, 0x3d, 0xb8, 0xd4, 0x81,
0xeb, 0xcd, 0x13, 0xf2, 0xaf, 0xc4, 0x13, 0xf2,
0xe1, 0xc3, 0x1f, 0xeb, 0x3a, 0xab, 0x10, 0xb7,
0xc8, 0xc3, 0x81, 0xeb, 0x36, 0x00, 0x21, 0x60,
0x10, 0x3e, 0x0d, 0xcd, 0x9b, 0xe6, 0xaf, 0x32,
0xab, 0x10, 0x3a, 0x41, 0x10, 0x3d, 0xc8, 0xf5,
0xaf, 0xcd, 0x9b, 0xe6, 0xf1, 0xc3, 0x8d, 0xeb,
0x3a, 0x43, 0x10, 0x47, 0x3a, 0xab, 0x10, 0xb8,
0xd4, 0x81, 0xeb, 0xd2, 0xd2, 0xeb, 0xd6, 0x0e,
0xd2, 0xa6, 0xeb, 0x2f, 0xc3, 0xc7, 0xeb, 0xf5,
0xcd, 0x81, 0xf4, 0xcd, 0x90, 0xe6, 0x29, 0x2b,
0xf1, 0xd6, 0xa8, 0xe5, 0xca, 0xc2, 0xeb, 0x3a,
0xab, 0x10, 0x2f, 0x83, 0xd2, 0xd2, 0xeb, 0x3c,
0x47, 0x3e, 0x20, 0xcd, 0x9b, 0xe6, 0x05, 0xc2,
0xcb, 0xeb, 0xe1, 0xcd, 0x36, 0xe8, 0xc3, 0x26,
0xeb, 0x3f, 0x52, 0x65, 0x64, 0x6f, 0x20, 0x66,
0x72, 0x6f, 0x6d, 0x20, 0x73, 0x74, 0x61, 0x72,
0x74, 0x0d, 0x0a, 0x00, 0x3a, 0xcd, 0x10, 0xb7,
0xc2, 0xa7, 0xe3, 0xc1, 0x21, 0xd9, 0xeb, 0xcd,
0x10, 0xf2, 0xc3, 0xf8, 0xe4, 0xcd, 0x7b, 0xf1,
0x7e, 0xfe, 0x22, 0x3e, 0x00, 0x32, 0x45, 0x10,
0xc2, 0x17, 0xec, 0xcd, 0xcf, 0xf1, 0xcd, 0x90,
0xe6, 0x3b, 0xe5, 0xcd, 0x13, 0xf2, 0x3e, 0xe5,
0xcd, 0xfc, 0xe4, 0xc1, 0xda, 0x77, 0xe8, 0x23,
0x7e, 0xb7, 0x2b, 0xc5, 0xca, 0x6f, 0xea, 0x36,
0x2c, 0xc3, 0x31, 0xec, 0xe5, 0x2a, 0xdc, 0x10,
0xf6, 0xaf, 0x32, 0xcd, 0x10, 0xe3, 0xc3, 0x3d,
0xec, 0xcd, 0x90, 0xe6, 0x2c, 0xcd, 0x2d, 0xef,
0xe3, 0xd5, 0x7e, 0xfe, 0x2c, 0xca, 0x65, 0xec,
0x3a, 0xcd, 0x10, 0xb7, 0xc2, 0xd2, 0xec, 0x3e,
0x3f, 0xcd, 0x9b, 0xe6, 0xcd, 0xfc, 0xe4, 0xd1,
0xc1, 0xda, 0x77, 0xe8, 0x23, 0x7e, 0xb7, 0x2b,
0xc5, 0xca, 0x6f, 0xea, 0xd5, 0x3a, 0xad, 0x10,
0xb7, 0xca, 0x8f, 0xec, 0xcd, 0x36, 0xe8, 0x57,
0x47, 0xfe, 0x22, 0xca, 0x83, 0xec, 0x3a, 0xcd,
0x10, 0xb7, 0x57, 0xca, 0x80, 0xec, 0x16, 0x3a,
0x06, 0x2c, 0x2b, 0xcd, 0xd2, 0xf1, 0xeb, 0x21,
0x9a, 0xec, 0xe3, 0xd5, 0xc3, 0xa2, 0xea, 0xcd,
0x36, 0xe8, 0xcd, 0x1a, 0xf9, 0xe3, 0xcd, 0x6b,
0xf8, 0xe1, 0x2b, 0xcd, 0x36, 0xe8, 0xca, 0xa6,
0xec, 0xfe, 0x2c, 0xc2, 0xec, 0xeb, 0xe3, 0x2b,
0xcd, 0x36, 0xe8, 0xc2, 0x39, 0xec, 0xd1, 0x3a,
0xcd, 0x10, 0xb7, 0xeb, 0xc2, 0x5c, 0xe8, 0xd5,
0xb6, 0x21, 0xc1, 0xec, 0xc4, 0x10, 0xf2, 0xe1,
0xc9, 0x3f, 0x45, 0x78, 0x74, 0x72, 0x61, 0x20,
0x69, 0x67, 0x6e, 0x6f, 0x72, 0x65, 0x64, 0x0d,
0x0a, 0x00, 0xcd, 0x70, 0xea, 0xb7, 0xc2, 0xeb,
0xec, 0x23, 0x7e, 0x23, 0xb6, 0x1e, 0x06, 0xca,
0xc1, 0xe3, 0x23, 0x5e, 0x23, 0x56, 0xeb, 0x22,
0xc9, 0x10, 0xeb, 0xcd, 0x36, 0xe8, 0xfe, 0x83,
0xc2, 0xd2, 0xec, 0xc3, 0x65, 0xec, 0x11, 0x00,
0x00, 0xc4, 0x2d, 0xef, 0x22, 0xce, 0x10, 0xcd,
0x56, 0xe3, 0xc2, 0xb3, 0xe3, 0xf9, 0xd5, 0x7e,
0x23, 0xf5, 0xd5, 0xcd, 0x51, 0xf8, 0xe3, 0xe5,
0xcd, 0xbe, 0xf5, 0xe1, 0xcd, 0x6b, 0xf8, 0xe1,
0xcd, 0x62, 0xf8, 0xe5, 0xcd, 0x8e, 0xf8, 0xe1,
0xc1, 0x90, 0xcd, 0x62, 0xf8, 0xca, 0x31, 0xed,
0xeb, 0x22, 0x5c, 0x10, 0x69, 0x60, 0xc3, 0xee,
0xe7, 0xf9, 0x2a, 0xce, 0x10, 0x7e, 0xfe, 0x2c,
0xc2, 0xf2, 0xe7, 0xcd, 0x36, 0xe8, 0xcd, 0xf9,
0xec, 0xcd, 0x5a, 0xed, 0xf6, 0x37, 0x3a, 0xad,
0x10, 0x8f, 0xb7, 0xe8, 0xc3, 0xbf, 0xe3, 0xcd,
0x90, 0xe6, 0xb4, 0xc3, 0x5a, 0xed, 0xcd, 0x90,
0xe6, 0x28, 0x2b, 0x16, 0x00, 0xd5, 0x0e, 0x01,
0xcd, 0x8a, 0xe3, 0xcd, 0xd1, 0xed, 0x22, 0xd0,
0x10, 0x2a, 0xd0, 0x10, 0xc1, 0x78, 0xfe, 0x78,
0xd4, 0x44, 0xed, 0x7e, 0x16, 0x00, 0xd6, 0xb3,
0xda, 0x92, 0xed, 0xfe, 0x03, 0xd2, 0x92, 0xed,
0xfe, 0x01, 0x17, 0xaa, 0xba, 0x57, 0xda, 0xad,
0xe3, 0x22, 0xc5, 0x10, 0xcd, 0x36, 0xe8, 0xc3,
0x76, 0xed, 0x7a, 0xb7, 0xc2, 0xa8, 0xee, 0x7e,
0x22, 0xc5, 0x10, 0xd6, 0xac, 0xd8, 0xfe, 0x07,
0xd0, 0x5f, 0x3a, 0xad, 0x10, 0x3d, 0xb3, 0x7b,
0xca, 0x06, 0xf3, 0x07, 0x83, 0x5f, 0x21, 0xa4,
0xe2, 0x19, 0x78, 0x56, 0xba, 0xd0, 0x23, 0xcd,
0x44, 0xed, 0xc5, 0x01, 0x69, 0xed, 0xc5, 0x43,
0x4a, 0xcd, 0x44, 0xf8, 0x58, 0x51, 0x4e, 0x23,
0x46, 0x23, 0xc5, 0x2a, 0xc5, 0x10, 0xc3, 0x5d,
0xed, 0xaf, 0x32, 0xad, 0x10, 0xcd, 0x36, 0xe8,
0x1e, 0x24, 0xca, 0xc1, 0xe3, 0xda, 0x1a, 0xf9,
0xcd, 0x77, 0xe9, 0xd2, 0x22, 0xee, 0xfe, 0xac,
0xca, 0xd1, 0xed, 0xfe, 0x2e, 0xca, 0x1a, 0xf9,
0xfe, 0xad, 0xca, 0x11, 0xee, 0xfe, 0x22, 0xca,
0xcf, 0xf1, 0xfe, 0xaa, 0xca, 0x08, 0xef, 0xfe,
0xa7, 0xca, 0x33, 0xf1, 0xd6, 0xb6, 0xd2, 0x33,
0xee, 0xcd, 0x56, 0xed, 0xcd, 0x90, 0xe6, 0x29,
0xc9, 0x16, 0x7d, 0xcd, 0x5d, 0xed, 0x2a, 0xd0,
0x10, 0xe5, 0xcd, 0x3c, 0xf8, 0xcd, 0x44, 0xed,
0xe1, 0xc9, 0xcd, 0x2d, 0xef, 0xe5, 0xeb, 0x22,
0xe4, 0x10, 0x3a, 0xad, 0x10, 0xb7, 0xcc, 0x51,
0xf8, 0xe1, 0xc9, 0x06, 0x00, 0x07, 0x4f, 0xc5,
0xcd, 0x36, 0xe8, 0x79, 0xfe, 0x22, 0xca, 0x79,
0xff, 0xfe, 0x2d, 0xda, 0x5f, 0xee, 0xcd, 0x56,
0xed, 0xcd, 0x90, 0xe6, 0x2c, 0xcd, 0x45, 0xed,
0xeb, 0x2a, 0xe4, 0x10, 0xe3, 0xe5, 0xeb, 0xcd,
0x84, 0xf4, 0xeb, 0xe3, 0xc3, 0x67, 0xee, 0xcd,
0x09, 0xee, 0xe3, 0x11, 0x1d, 0xee, 0xd5, 0x01,
0x0f, 0xe1, 0x09, 0x4e, 0x23, 0x66, 0x69, 0xe9,
0x15, 0xfe, 0xad, 0xc8, 0xfe, 0x2d, 0xc8, 0x14,
0xfe, 0x2b, 0xc8, 0xfe, 0xac, 0xc8, 0x2b, 0xc9,
0xf6, 0xaf, 0xf5, 0xcd, 0x44, 0xed, 0xcd, 0x8b,
0xe9, 0xf1, 0xeb, 0xc1, 0xe3, 0xeb, 0xcd, 0x54,
0xf8, 0xf5, 0xcd, 0x8b, 0xe9, 0xf1, 0xc1, 0x79,
0x21, 0xf1, 0xf0, 0xc2, 0xa3, 0xee, 0xa3, 0x4f,
0x78, 0xa2, 0xe9, 0xb3, 0x4f, 0x78, 0xb2, 0xe9,
0x21, 0xba, 0xee, 0x3a, 0xad, 0x10, 0x1f, 0x7a,
0x17, 0x5f, 0x16, 0x64, 0x78, 0xba, 0xd0, 0xc3,
0xba, 0xed, 0xbc, 0xee, 0x79, 0xb7, 0x1f, 0xc1,
0xd1, 0xf5, 0xcd, 0x46, 0xed, 0x21, 0xfe, 0xee,
0xe5, 0xca, 0x8e, 0xf8, 0xaf, 0x32, 0xad, 0x10,
0xd5, 0xcd, 0x53, 0xf3, 0x7e, 0x23, 0x23, 0x4e,
0x23, 0x46, 0xd1, 0xc5, 0xf5, 0xcd, 0x57, 0xf3,
0xcd, 0x62, 0xf8, 0xf1, 0x57, 0xe1, 0x7b, 0xb2,
0xc8, 0x7a, 0xd6, 0x01, 0xd8, 0xaf, 0xbb, 0x3c,
0xd0, 0x15, 0x1d, 0x0a, 0xbe, 0x23, 0x03, 0xca,
0xe6, 0xee, 0x3f, 0xc3, 0x1e, 0xf8, 0x3c, 0x8f,
0xc1, 0xa0, 0xc6, 0xff, 0x9f, 0xc3, 0x25, 0xf8,
0x16, 0x5a, 0xcd, 0x5d, 0xed, 0xcd, 0x44, 0xed,
0xcd, 0x8b, 0xe9, 0x7b, 0x2f, 0x4f, 0x7a, 0x2f,
0xcd, 0xf1, 0xf0, 0xc1, 0xc3, 0x69, 0xed, 0x2b,
0xcd, 0x36, 0xe8, 0xc8, 0xcd, 0x90, 0xe6, 0x2c,
0x01, 0x1f, 0xef, 0xc5, 0xf6, 0xaf, 0x32, 0xac,
0x10, 0x46, 0xcd, 0x77, 0xe9, 0xda, 0xad, 0xe3,
0xaf, 0x4f, 0x32, 0xad, 0x10, 0xcd, 0x36, 0xe8,
0xda, 0x49, 0xef, 0xcd, 0x77, 0xe9, 0xda, 0x56,
0xef, 0x4f, 0xcd, 0x36, 0xe8, 0xda, 0x4a, 0xef,
0xcd, 0x77, 0xe9, 0xd2, 0x4a, 0xef, 0xd6, 0x24,
0xc2, 0x65, 0xef, 0x3c, 0x32, 0xad, 0x10, 0x0f,
0x81, 0x4f, 0xcd, 0x36, 0xe8, 0x3a, 0xcb, 0x10,
0x3d, 0xca, 0x12, 0xf0, 0xf2, 0x75, 0xef, 0x7e,
0xd6, 0x28, 0xca, 0xea, 0xef, 0xaf, 0x32, 0xcb,
0x10, 0xe5, 0x50, 0x59, 0x2a, 0xde, 0x10, 0xcd,
0x8a, 0xe6, 0x11, 0xe0, 0x10, 0xca, 0x54, 0xf7,
0x2a, 0xd8, 0x10, 0xeb, 0x2a, 0xd6, 0x10, 0xcd,
0x8a, 0xe6, 0xca, 0xa8, 0xef, 0x79, 0x96, 0x23,
0xc2, 0x9d, 0xef, 0x78, 0x96, 0x23, 0xca, 0xdc,
0xef, 0x23, 0x23, 0x23, 0x23, 0xc3, 0x8f, 0xef,
0xe1, 0xe3, 0xd5, 0x11, 0x25, 0xee, 0xcd, 0x8a,
0xe6, 0xd1, 0xca, 0xdf, 0xef, 0xe3, 0xe5, 0xc5,
0x01, 0x06, 0x00, 0x2a, 0xda, 0x10, 0xe5, 0x09,
0xc1, 0xe5, 0xcd, 0x79, 0xe3, 0xe1, 0x22, 0xda,
0x10, 0x60, 0x69, 0x22, 0xd8, 0x10, 0x2b, 0x36,
0x00, 0xcd, 0x8a, 0xe6, 0xc2, 0xce, 0xef, 0xd1,
0x73, 0x23, 0x72, 0x23, 0xeb, 0xe1, 0xc9, 0x32,
0xe7, 0x10, 0x21, 0x4a, 0xe3, 0x22, 0xe4, 0x10,
0xe1, 0xc9, 0xe5, 0x2a, 0xac, 0x10, 0xe3, 0x57,
0xd5, 0xc5, 0xcd, 0x7f, 0xe9, 0xc1, 0xf1, 0xeb,
0xe3, 0xe5, 0xeb, 0x3c, 0x57, 0x7e, 0xfe, 0x2c,
0xca, 0xf0, 0xef, 0xcd, 0x90, 0xe6, 0x29, 0x22,
0xd0, 0x10, 0xe1, 0x22, 0xac, 0x10, 0x1e, 0x00,
0xd5, 0x11, 0xe5, 0xf5, 0x2a, 0xd8, 0x10, 0x3e,
0x19, 0xeb, 0x2a, 0xda, 0x10, 0xeb, 0xcd, 0x8a,
0xe6, 0xca, 0x4a, 0xf0, 0x7e, 0xb9, 0x23, 0xc2,
0x2c, 0xf0, 0x7e, 0xb8, 0x23, 0x5e, 0x23, 0x56,
0x23, 0xc2, 0x18, 0xf0, 0x3a, 0xac, 0x10, 0xb7,
0xc2, 0xb6, 0xe3, 0xf1, 0x44, 0x4d, 0xca, 0x54,
0xf7, 0x96, 0xca, 0xa8, 0xf0, 0x1e, 0x10, 0xc3,
0xc1, 0xe3, 0x11, 0x04, 0x00, 0xf1, 0xca, 0xa0,
0xe9, 0x71, 0x23, 0x70, 0x23, 0x4f, 0xcd, 0x8a,
0xe3, 0x23, 0x23, 0x22, 0xc5, 0x10, 0x71, 0x23,
0x3a, 0xac, 0x10, 0x17, 0x79, 0x01, 0x0b, 0x00,
0xd2, 0x6d, 0xf0, 0xc1, 0x03, 0x71, 0x23, 0x70,
0x23, 0xf5, 0xe5, 0xcd, 0xff, 0xf8, 0xeb, 0xe1,
0xf1, 0x3d, 0xc2, 0x65, 0xf0, 0xf5, 0x42, 0x4b,
0xeb, 0x19, 0xda, 0xa2, 0xe3, 0xcd, 0x93, 0xe3,
0x22, 0xda, 0x10, 0x2b, 0x36, 0x00, 0xcd, 0x8a,
0xe6, 0xc2, 0x8b, 0xf0, 0x03, 0x57, 0x2a, 0xc5,
0x10, 0x5e, 0xeb, 0x29, 0x09, 0xeb, 0x2b, 0x2b,
0x73, 0x23, 0x72, 0x23, 0xf1, 0xda, 0xcc, 0xf0,
0x47, 0x4f, 0x7e, 0x23, 0x16, 0xe1, 0x5e, 0x23,
0x56, 0x23, 0xe3, 0xf5, 0xcd, 0x8a, 0xe6, 0xd2,
0x45, 0xf0, 0xe5, 0xcd, 0xff, 0xf8, 0xd1, 0x19,
0xf1, 0x3d, 0x44, 0x4d, 0xc2, 0xad, 0xf0, 0x29,
0x29, 0xc1, 0x09, 0xeb, 0x2a, 0xd0, 0x10, 0xc9,
0x2a, 0xda, 0x10, 0xeb, 0x21, 0x00, 0x00, 0x39,
0x3a, 0xad, 0x10, 0xb7, 0xca, 0xec, 0xf0, 0xcd,
0x53, 0xf3, 0xcd, 0x53, 0xf2, 0x2a, 0x5a, 0x10,
0xeb, 0x2a, 0xc3, 0x10, 0x7d, 0x93, 0x4f, 0x7c,
0x9a, 0x41, 0x50, 0x1e, 0x00, 0x21, 0xad, 0x10,
0x73, 0x06, 0x90, 0xc3, 0x2a, 0xf8, 0x3a, 0xab,
0x10, 0x47, 0xaf, 0xc3, 0xf2, 0xf0, 0xcd, 0x89,
0xf1, 0xcd, 0x7b, 0xf1, 0x01, 0x70, 0xea, 0xc5,
0xd5, 0xcd, 0x90, 0xe6, 0x28, 0xcd, 0x2d, 0xef,
0xe5, 0xeb, 0x2b, 0x56, 0x2b, 0x5e, 0xe1, 0xcd,
0x44, 0xed, 0xcd, 0x90, 0xe6, 0x29, 0xcd, 0x90,
0xe6, 0xb4, 0x44, 0x4d, 0xe3, 0x71, 0x23, 0x70,
0xc3, 0xc8, 0xf1, 0xcd, 0x89, 0xf1, 0xd5, 0xcd,
0x09, 0xee, 0xcd, 0x44, 0xed, 0xe3, 0x5e, 0x23,
0x56, 0x23, 0x7a, 0xb3, 0xca, 0xb9, 0xe3, 0x7e,
0x23, 0x66, 0x6f, 0xe5, 0x2a, 0xde, 0x10, 0xe3,
0x22, 0xde, 0x10, 0x2a, 0xe2, 0x10, 0xe5, 0x2a,
0xe0, 0x10, 0xe5, 0x21, 0xe0, 0x10, 0xd5, 0xcd,
0x6b, 0xf8, 0xe1, 0xcd, 0x41, 0xed, 0x2b, 0xcd,
0x36, 0xe8, 0xc2, 0xad, 0xe3, 0xe1, 0x22, 0xe0,
0x10, 0xe1, 0x22, 0xe2, 0x10, 0xe1, 0x22, 0xde,
0x10, 0xe1, 0xc9, 0xe5, 0x2a, 0x5c, 0x10, 0x23,
0x7c, 0xb5, 0xe1, 0xc0, 0x1e, 0x16, 0xc3, 0xc1,
0xe3, 0xcd, 0x90, 0xe6, 0xa7, 0x3e, 0x80, 0x32,
0xcb, 0x10, 0xb6, 0x47, 0xcd, 0x32, 0xef, 0xc3,
0x44, 0xed, 0xcd, 0x44, 0xed, 0xcd, 0xb8, 0xf9,
0xcd, 0xce, 0xf1, 0xcd, 0x53, 0xf3, 0x01, 0xae,
0xf3, 0xc5, 0x7e, 0x23, 0x23, 0xe5, 0xcd, 0x29,
0xf2, 0xe1, 0x4e, 0x23, 0x46, 0xcd, 0xc2, 0xf1,
0xe5, 0x6f, 0xcd, 0x46, 0xf3, 0xd1, 0xc9, 0xcd,
0x29, 0xf2, 0x21, 0xbf, 0x10, 0xe5, 0x77, 0x23,
0x23, 0x73, 0x23, 0x72, 0xe1, 0xc9, 0x2b, 0x06,
0x22, 0x50, 0xe5, 0x0e, 0xff, 0x23, 0x7e, 0x0c,
0xb7, 0xca, 0xe4, 0xf1, 0xba, 0xca, 0xe4, 0xf1,
0xb8, 0xc2, 0xd5, 0xf1, 0xfe, 0x22, 0xcc, 0x36,
0xe8, 0xe3, 0x23, 0xeb, 0x79, 0xcd, 0xc2, 0xf1,
0x11, 0xbf, 0x10, 0x2a, 0xb1, 0x10, 0x22, 0xe4,
0x10, 0x3e, 0x01, 0x32, 0xad, 0x10, 0xcd, 0x6e,
0xf8, 0xcd, 0x8a, 0xe6, 0x22, 0xb1, 0x10, 0xe1,
0x7e, 0xc0, 0x1e, 0x1e, 0xc3, 0xc1, 0xe3, 0x23,
0xcd, 0xce, 0xf1, 0xcd, 0x53, 0xf3, 0xcd, 0x62,
0xf8, 0x1c, 0x1d, 0xc8, 0x0a, 0xcd, 0x9b, 0xe6,
0xfe, 0x0d, 0xcc, 0x86, 0xeb, 0x03, 0xc3, 0x1a,
0xf2, 0xb7, 0x0e, 0xf1, 0xf5, 0x2a, 0x5a, 0x10,
0xeb, 0x2a, 0xc3, 0x10, 0x2f, 0x4f, 0x06, 0xff,
0x09, 0x23, 0xcd, 0x8a, 0xe6, 0xda, 0x47, 0xf2,
0x22, 0xc3, 0x10, 0x23, 0xeb, 0xf1, 0xc9, 0xf1,
0x1e, 0x1a, 0xca, 0xc1, 0xe3, 0xbf, 0xf5, 0x01,
0x2b, 0xf2, 0xc5, 0x2a, 0xaf, 0x10, 0x22, 0xc3,
0x10, 0x21, 0x00, 0x00, 0xe5, 0x2a, 0x5a, 0x10,
0xe5, 0x21, 0xb3, 0x10, 0xeb, 0x2a, 0xb1, 0x10,
0xeb, 0xcd, 0x8a, 0xe6, 0x01, 0x64, 0xf2, 0xc2,
0xb8, 0xf2, 0x2a, 0xd6, 0x10, 0xeb, 0x2a, 0xd8,
0x10, 0xeb, 0xcd, 0x8a, 0xe6, 0xca, 0x8b, 0xf2,
0x7e, 0x23, 0x23, 0xb7, 0xcd, 0xbb, 0xf2, 0xc3,
0x75, 0xf2, 0xc1, 0xeb, 0x2a, 0xda, 0x10, 0xeb,
0xcd, 0x8a, 0xe6, 0xca, 0xe1, 0xf2, 0xcd, 0x62,
0xf8, 0x7b, 0xe5, 0x09, 0xb7, 0xf2, 0x8a, 0xf2,
0x22, 0xc5, 0x10, 0xe1, 0x4e, 0x06, 0x00, 0x09,
0x09, 0x23, 0xeb, 0x2a, 0xc5, 0x10, 0xeb, 0xcd,
0x8a, 0xe6, 0xca, 0x8b, 0xf2, 0x01, 0xaa, 0xf2,
0xc5, 0xf6, 0x80, 0x7e, 0x23, 0x23, 0x5e, 0x23,
0x56, 0x23, 0xf0, 0xb7, 0xc8, 0x44, 0x4d, 0x2a,
0xc3, 0x10, 0xcd, 0x8a, 0xe6, 0x60, 0x69, 0xd8,
0xe1, 0xe3, 0xcd, 0x8a, 0xe6, 0xe3, 0xe5, 0x60,
0x69, 0xd0, 0xc1, 0xf1, 0xf1, 0xe5, 0xd5, 0xc5,
0xc9, 0xd1, 0xe1, 0x7d, 0xb4, 0xc8, 0x2b, 0x46,
0x2b, 0x4e, 0xe5, 0x2b, 0x2b, 0x6e, 0x26, 0x00,
0x09, 0x50, 0x59, 0x2b, 0x44, 0x4d, 0x2a, 0xc3,
0x10, 0xcd, 0x7c, 0xe3, 0xe1, 0x71, 0x23, 0x70,
0x69, 0x60, 0x2b, 0xc3, 0x56, 0xf2, 0xc5, 0xe5,
0x2a, 0xe4, 0x10, 0xe3, 0xcd, 0xd1, 0xed, 0xe3,
0xcd, 0x45, 0xed, 0x7e, 0xe5, 0x2a, 0xe4, 0x10,
0xe5, 0x86, 0x1e, 0x1c, 0xda, 0xc1, 0xe3, 0xcd,
0xbf, 0xf1, 0xd1, 0xcd, 0x57, 0xf3, 0xe3, 0xcd,
0x56, 0xf3, 0xe5, 0x2a, 0xc1, 0x10, 0xeb, 0xcd,
0x3d, 0xf3, 0xcd, 0x3d, 0xf3, 0x21, 0x66, 0xed,
0xe3, 0xe5, 0xc3, 0xf0, 0xf1, 0xe1, 0xe3, 0x7e,
0x23, 0x23, 0x4e, 0x23, 0x46, 0x6f, 0x2c, 0x2d,
0xc8, 0x0a, 0x12, 0x03, 0x13, 0xc3, 0x47, 0xf3,
0xcd, 0x45, 0xed, 0x2a, 0xe4, 0x10, 0xeb, 0xcd,
0x71, 0xf3, 0xeb, 0xc0, 0xd5, 0x50, 0x59, 0x1b,
0x4e, 0x2a, 0xc3, 0x10, 0xcd, 0x8a, 0xe6, 0xc2,
0x6f, 0xf3, 0x47, 0x09, 0x22, 0xc3, 0x10, 0xe1,
0xc9, 0x2a, 0xb1, 0x10, 0x2b, 0x46, 0x2b, 0x4e,
0x2b, 0x2b, 0xcd, 0x8a, 0xe6, 0xc0, 0x22, 0xb1,
0x10, 0xc9, 0x01, 0x01, 0xf1, 0xc5, 0xcd, 0x50,
0xf3, 0xaf, 0x57, 0x32, 0xad, 0x10, 0x7e, 0xb7,
0xc9, 0x01, 0x01, 0xf1, 0xc5, 0xcd, 0x86, 0xf3,
0xca, 0xa0, 0xe9, 0x23, 0x23, 0x5e, 0x23, 0x56,
0x1a, 0xc9, 0x3e, 0x01, 0xcd, 0xbf, 0xf1, 0xcd,
0x87, 0xf4, 0x2a, 0xc1, 0x10, 0x73, 0xc1, 0xc3,
0xf0, 0xf1, 0xcd, 0x37, 0xf4, 0xaf, 0xe3, 0x4f,
0xe5, 0x7e, 0xb8, 0xda, 0xc0, 0xf3, 0x78, 0x11,
0x0e, 0x00, 0xc5, 0xcd, 0x29, 0xf2, 0xc1, 0xe1,
0xe5, 0x23, 0x23, 0x46, 0x23, 0x66, 0x68, 0x06,
0x00, 0x09, 0x44, 0x4d, 0xcd, 0xc2, 0xf1, 0x6f,
0xcd, 0x46, 0xf3, 0xd1, 0xcd, 0x57, 0xf3, 0xc3,
0xf0, 0xf1, 0xcd, 0x37, 0xf4, 0xd1, 0xd5, 0x1a,
0x90, 0xc3, 0xb6, 0xf3, 0xeb, 0x7e, 0xcd, 0x3c,
0xf4, 0x04, 0x05, 0xca, 0xa0, 0xe9, 0xc5, 0x1e,
0xff, 0xfe, 0x29, 0xca, 0x05, 0xf4, 0xcd, 0x90,
0xe6, 0x2c, 0xcd, 0x84, 0xf4, 0xcd, 0x90, 0xe6,
0x29, 0xf1, 0xe3, 0x01, 0xb8, 0xf3, 0xc5, 0x3d,
0xbe, 0x06, 0x00, 0xd0, 0x4f, 0x7e, 0x91, 0xbb,
0x47, 0xd8, 0x43, 0xc9, 0xcd, 0x86, 0xf3, 0xca,
0x33, 0xf6, 0x5f, 0x23, 0x23, 0x7e, 0x23, 0x66,
0x6f, 0xe5, 0x19, 0x46, 0x72, 0xe3, 0xc5, 0x7e,
0xcd, 0x1a, 0xf9, 0xc1, 0xe1, 0x70, 0xc9, 0xeb,
0xcd, 0x90, 0xe6, 0x29, 0xc1, 0xd1, 0xc5, 0x43,
0xc9, 0xcd, 0x87, 0xf4, 0x32, 0x3f, 0x10, 0xcd,
0x3e, 0x10, 0xc3, 0x01, 0xf1, 0xcd, 0x71, 0xf4,
0xc3, 0x06, 0x10, 0xcd, 0x71, 0xf4, 0xf5, 0x1e,
0x00, 0x2b, 0xcd, 0x36, 0xe8, 0xca, 0x67, 0xf4,
0xcd, 0x90, 0xe6, 0x2c, 0xcd, 0x84, 0xf4, 0xc1,
0xcd, 0x3e, 0x10, 0xab, 0xa0, 0xca, 0x68, 0xf4,
0xc9, 0xcd, 0x84, 0xf4, 0x32, 0x3f, 0x10, 0x32,
0x07, 0x10, 0xcd, 0x90, 0xe6, 0x2c, 0xc3, 0x84,
0xf4, 0xcd, 0x36, 0xe8, 0xcd, 0x41, 0xed, 0xcd,
0x85, 0xe9, 0x7a, 0xb7, 0xc2, 0xa0, 0xe9, 0x2b,
0xcd, 0x36, 0xe8, 0x7b, 0xc9, 0x2a, 0x5e, 0x10,
0x22, 0xd6, 0x10, 0x21, 0x00, 0x80, 0x5e, 0x23,
0x56, 0x23, 0x23, 0x22, 0x5e, 0x10, 0xeb, 0x22,
0xaf, 0x10, 0x22, 0x5a, 0x10, 0x01, 0xf2, 0xe7,
0xc5, 0xc3, 0xc5, 0xe4, 0xc3, 0x56, 0xfd, 0xcd,
0xba, 0xf4, 0xf5, 0xc5, 0x4f, 0xcd, 0x68, 0xfd,
0xc1, 0xf1, 0xc9, 0x06, 0x01, 0xfe, 0xae, 0xca,
0xbb, 0xe8, 0xcd, 0x5a, 0xed, 0xe5, 0xcd, 0x95,
0xf3, 0xd5, 0xcd, 0xc8, 0xfc, 0xd1, 0x3e, 0xd3,
0xcd, 0xba, 0xf4, 0xcd, 0xb7, 0xf4, 0x1a, 0xcd,
0xba, 0xf4, 0x00, 0x00, 0x00, 0x21, 0xd6, 0x10,
0x22, 0x0c, 0x0c, 0x2a, 0xd6, 0x10, 0x22, 0x0e,
0x0c, 0xcd, 0x73, 0xfe, 0xcd, 0xd8, 0xfc, 0xe1,
0xc9, 0x7e, 0xfe, 0xae, 0xca, 0xb9, 0xe8, 0xcd,
0xd1, 0xff, 0xd6, 0x9e, 0xca, 0x09, 0xf5, 0xaf,
0x01, 0x2f, 0x23, 0xf5, 0x2b, 0xcd, 0x36, 0xe8,
0x3e, 0x00, 0xca, 0x1c, 0xf5, 0xcd, 0x5a, 0xed,
0xcd, 0x95, 0xf3, 0x1a, 0x6f, 0xf1, 0xf5, 0xb7,
0x67, 0x22, 0xe4, 0x10, 0xcc, 0xba, 0xe4, 0x2a,
0xe4, 0x10, 0xeb, 0x06, 0x03, 0xcd, 0xb4, 0xf4,
0xd6, 0xd3, 0xc2, 0x2b, 0xf5, 0x05, 0xc2, 0x2d,
0xf5, 0xcd, 0xb4, 0xf4, 0xcd, 0x74, 0xf5, 0x1c,
0x1d, 0xca, 0x48, 0xf5, 0xbb, 0xc2, 0x2b, 0xf5,
0x00, 0x00, 0x00, 0xf1, 0xb7, 0xc2, 0x5c, 0xf5,
0xcd, 0x88, 0xfe, 0x2a, 0xd6, 0x10, 0xcd, 0x93,
0xe3, 0xc3, 0x5f, 0xf5, 0xcd, 0xaa, 0xfe, 0x21,
0x4b, 0xe3, 0xcd, 0x10, 0xf2, 0xcd, 0xd8, 0xfc,
0xc3, 0x7c, 0xe4, 0x21, 0x9d, 0xf5, 0xcd, 0x10,
0xf2, 0xc3, 0xe1, 0xe3, 0xc5, 0xe5, 0xd5, 0xf5,
0x21, 0x8e, 0xf5, 0xcd, 0x10, 0xf2, 0xf1, 0xf5,
0xcd, 0xd9, 0xfc, 0x21, 0x94, 0xf5, 0xcd, 0x10,
0xf2, 0xf1, 0xd1, 0xe1, 0xc1, 0xc9, 0x46, 0x69,
0x6c, 0x65, 0x20, 0x00, 0x20, 0x46, 0x6f, 0x75,
0x6e, 0x64, 0x0d, 0x0a, 0x00, 0x42, 0x61, 0x64,
0x00, 0x00, 0x00, 0xcd, 0x8b, 0xe9, 0x1a, 0xc3,
0x01, 0xf1, 0xcd, 0x41, 0xed, 0xcd, 0x8b, 0xe9,
0xd5, 0xcd, 0x90, 0xe6, 0x2c, 0xcd, 0x84, 0xf4,
0xd1, 0x12, 0xc9, 0x21, 0x91, 0xfa, 0xcd, 0x62,
0xf8, 0xc3, 0xcd, 0xf5, 0xcd, 0x62, 0xf8, 0x21,
0xc1, 0xd1, 0xcd, 0x3c, 0xf8, 0x78, 0xb7, 0xc8,
0x3a, 0xe7, 0x10, 0xb7, 0xca, 0x54, 0xf8, 0x90,
0xd2, 0xe7, 0xf5, 0x2f, 0x3c, 0xeb, 0xcd, 0x44,
0xf8, 0xeb, 0xcd, 0x54, 0xf8, 0xc1, 0xd1, 0xfe,
0x19, 0xd0, 0xf5, 0xcd, 0x79, 0xf8, 0x67, 0xf1,
0xcd, 0x92, 0xf6, 0xb4, 0x21, 0xe4, 0x10, 0xf2,
0x0d, 0xf6, 0xcd, 0x72, 0xf6, 0xd2, 0x53, 0xf6,
0x23, 0x34, 0xca, 0xbc, 0xe3, 0x2e, 0x01, 0xcd,
0xa8, 0xf6, 0xc3, 0x53, 0xf6, 0xaf, 0x90, 0x47,
0x7e, 0x9b, 0x5f, 0x23, 0x7e, 0x9a, 0x57, 0x23,
0x7e, 0x99, 0x4f, 0xdc, 0x7e, 0xf6, 0x68, 0x63,
0xaf, 0x47, 0x79, 0xb7, 0xc2, 0x40, 0xf6, 0x4a,
0x54, 0x65, 0x6f, 0x78, 0xd6, 0x08, 0xfe, 0xe0,
0xc2, 0x21, 0xf6, 0xaf, 0x32, 0xe7, 0x10, 0xc9,
0x05, 0x29, 0x7a, 0x17, 0x57, 0x79, 0x8f, 0x4f,
0xf2, 0x38, 0xf6, 0x78, 0x5c, 0x45, 0xb7, 0xca,
0x53, 0xf6, 0x21, 0xe7, 0x10, 0x86, 0x77, 0xd2,
0x33, 0xf6, 0xc8, 0x78, 0x21, 0xe7, 0x10, 0xb7,
0xfc, 0x65, 0xf6, 0x46, 0x23, 0x7e, 0xe6, 0x80,
0xa9, 0x4f, 0xc3, 0x54, 0xf8, 0x1c, 0xc0, 0x14,
0xc0, 0x0c, 0xc0, 0x0e, 0x80, 0x34, 0xc0, 0xc3,
0xbc, 0xe3, 0x7e, 0x83, 0x5f, 0x23, 0x7e, 0x8a,
0x57, 0x23, 0x7e, 0x89, 0x4f, 0xc9, 0x21, 0xe8,
0x10, 0x7e, 0x2f, 0x77, 0xaf, 0x6f, 0x90, 0x47,
0x7d, 0x9b, 0x5f, 0x7d, 0x9a, 0x57, 0x7d, 0x99,
0x4f, 0xc9, 0x06, 0x00, 0xd6, 0x08, 0xda, 0xa1,
0xf6, 0x43, 0x5a, 0x51, 0x0e, 0x00, 0xc3, 0x94,
0xf6, 0xc6, 0x09, 0x6f, 0xaf, 0x2d, 0xc8, 0x79,
0x1f, 0x4f, 0x7a, 0x1f, 0x57, 0x7b, 0x1f, 0x5f,
0x78, 0x1f, 0x47, 0xc3, 0xa4, 0xf6, 0x00, 0x00,
0x00, 0x81, 0x03, 0xaa, 0x56, 0x19, 0x80, 0xf1,
0x22, 0x76, 0x80, 0x45, 0xaa, 0x38, 0x82, 0xcd,
0x13, 0xf8, 0xb7, 0xea, 0xa0, 0xe9, 0x21, 0xe7,
0x10, 0x7e, 0x01, 0x35, 0x80, 0x11, 0xf3, 0x04,
0x90, 0xf5, 0x70, 0xd5, 0xc5, 0xcd, 0xcd, 0xf5,
0xc1, 0xd1, 0x04, 0xcd, 0x69, 0xf7, 0x21, 0xb6,
0xf6, 0xcd, 0xc4, 0xf5, 0x21, 0xba, 0xf6, 0xcd,
0x5b, 0xfb, 0x01, 0x80, 0x80, 0x11, 0x00, 0x00,
0xcd, 0xcd, 0xf5, 0xf1, 0xcd, 0x8e, 0xf9, 0x01,
0x31, 0x80, 0x11, 0x18, 0x72, 0x21, 0xc1, 0xd1,
0xcd, 0x13, 0xf8, 0xc8, 0x2e, 0x00, 0xcd, 0xd1,
0xf7, 0x79, 0x32, 0xf6, 0x10, 0xeb, 0x22, 0xf7,
0x10, 0x01, 0x00, 0x00, 0x50, 0x58, 0x21, 0x1e,
0xf6, 0xe5, 0x21, 0x2a, 0xf7, 0xe5, 0xe5, 0x21,
0xe4, 0x10, 0x7e, 0x23, 0xb7, 0xca, 0x56, 0xf7,
0xe5, 0x2e, 0x08, 0x1f, 0x67, 0x79, 0xd2, 0x44,
0xf7, 0xe5, 0x2a, 0xf7, 0x10, 0x19, 0xeb, 0xe1,
0x3a, 0xf6, 0x10, 0x89, 0x1f, 0x4f, 0x7a, 0x1f,
0x57, 0x7b, 0x1f, 0x5f, 0x78, 0x1f, 0x47, 0x2d,
0x7c, 0xc2, 0x33, 0xf7, 0xe1, 0xc9, 0x43, 0x5a,
0x51, 0x4f, 0xc9, 0xcd, 0x44, 0xf8, 0x01, 0x20,
0x84, 0x11, 0x00, 0x00, 0xcd, 0x54, 0xf8, 0xc1,
0xd1, 0xcd, 0x13, 0xf8, 0xca, 0xb0, 0xe3, 0x2e,
0xff, 0xcd, 0xd1, 0xf7, 0x34, 0x34, 0x2b, 0x7e,
0x32, 0x12, 0x10, 0x2b, 0x7e, 0x32, 0x0e, 0x10,
0x2b, 0x7e, 0x32, 0x0a, 0x10, 0x41, 0xeb, 0xaf,
0x4f, 0x57, 0x5f, 0x32, 0x15, 0x10, 0xe5, 0xc5,
0x7d, 0xcd, 0x09, 0x10, 0xde, 0x00, 0x3f, 0xd2,
0xa1, 0xf7, 0x32, 0x15, 0x10, 0xf1, 0xf1, 0x37,
0xd2, 0xc1, 0xe1, 0x79, 0x3c, 0x3d, 0x1f, 0xfa,
0x54, 0xf6, 0x17, 0x7b, 0x17, 0x5f, 0x7a, 0x17,
0x57, 0x79, 0x17, 0x4f, 0x29, 0x78, 0x17, 0x47,
0x3a, 0x15, 0x10, 0x17, 0x32, 0x15, 0x10, 0x79,
0xb2, 0xb3, 0xc2, 0x8e, 0xf7, 0xe5, 0x21, 0xe7,
0x10, 0x35, 0xe1, 0xc2, 0x8e, 0xf7, 0xc3, 0xbc,
0xe3, 0x78, 0xb7, 0xca, 0xf5, 0xf7, 0x7d, 0x21,
0xe7, 0x10, 0xae, 0x80, 0x47, 0x1f, 0xa8, 0x78,
0xf2, 0xf4, 0xf7, 0xc6, 0x80, 0x77, 0xca, 0x54,
0xf7, 0xcd, 0x79, 0xf8, 0x77, 0x2b, 0xc9, 0xcd,
0x13, 0xf8, 0x2f, 0xe1, 0xb7, 0xe1, 0xf2, 0x33,
0xf6, 0xc3, 0xbc, 0xe3, 0xcd, 0x5f, 0xf8, 0x78,
0xb7, 0xc8, 0xc6, 0x02, 0xda, 0xbc, 0xe3, 0x47,
0xcd, 0xcd, 0xf5, 0x21, 0xe7, 0x10, 0x34, 0xc0,
0xc3, 0xbc, 0xe3, 0x3a, 0xe7, 0x10, 0xb7, 0xc8,
0x3a, 0xe6, 0x10, 0xfe, 0x2f, 0x17, 0x9f, 0xc0,
0x3c, 0xc9, 0xcd, 0x13, 0xf8, 0x06, 0x88, 0x11,
0x00, 0x00, 0x21, 0xe7, 0x10, 0x4f, 0x70, 0x06,
0x00, 0x23, 0x36, 0x80, 0x17, 0xc3, 0x1b, 0xf6,
0xcd, 0x13, 0xf8, 0xf0, 0x21, 0xe6, 0x10, 0x7e,
0xee, 0x80, 0x77, 0xc9, 0xeb, 0x2a, 0xe4, 0x10,
0xe3, 0xe5, 0x2a, 0xe6, 0x10, 0xe3, 0xe5, 0xeb,
0xc9, 0xcd, 0x62, 0xf8, 0xeb, 0x22, 0xe4, 0x10,
0x60, 0x69, 0x22, 0xe6, 0x10, 0xeb, 0xc9, 0x21,
0xe4, 0x10, 0x5e, 0x23, 0x56, 0x23, 0x4e, 0x23,
0x46, 0x23, 0xc9, 0x11, 0xe4, 0x10, 0x06, 0x04,
0x1a, 0x77, 0x13, 0x23, 0x05, 0xc2, 0x70, 0xf8,
0xc9, 0x21, 0xe6, 0x10, 0x7e, 0x07, 0x37, 0x1f,
0x77, 0x3f, 0x1f, 0x23, 0x23, 0x77, 0x79, 0x07,
0x37, 0x1f, 0x4f, 0x1f, 0xae, 0xc9, 0x78, 0xb7,
0xca, 0x13, 0xf8, 0x21, 0x1c, 0xf8, 0xe5, 0xcd,
0x13, 0xf8, 0x79, 0xc8, 0x21, 0xe6, 0x10, 0xae,
0x79, 0xf8, 0xcd, 0xa8, 0xf8, 0x1f, 0xa9, 0xc9,
0x23, 0x78, 0xbe, 0xc0, 0x2b, 0x79, 0xbe, 0xc0,
0x2b, 0x7a, 0xbe, 0xc0, 0x2b, 0x7b, 0x96, 0xc0,
0xe1, 0xe1, 0xc9, 0x47, 0x4f, 0x57, 0x5f, 0xb7,
0xc8, 0xe5, 0xcd, 0x5f, 0xf8, 0xcd, 0x79, 0xf8,
0xae, 0x67, 0xfc, 0xdf, 0xf8, 0x3e, 0x98, 0x90,
0xcd, 0x92, 0xf6, 0x7c, 0x17, 0xdc, 0x65, 0xf6,
0x06, 0x00, 0xdc, 0x7e, 0xf6, 0xe1, 0xc9, 0x1b,
0x7a, 0xa3, 0x3c, 0xc0, 0x0b, 0xc9, 0x21, 0xe7,
0x10, 0x7e, 0xfe, 0x98, 0x3a, 0xe4, 0x10, 0xd0,
0x7e, 0xcd, 0xbb, 0xf8, 0x36, 0x98, 0x7b, 0xf5,
0x79, 0x17, 0xcd, 0x1b, 0xf6, 0xf1, 0xc9, 0x21,
0x00, 0x00, 0x78, 0xb1, 0xc8, 0x3e, 0x10, 0x29,
0xda, 0x45, 0xf0, 0xeb, 0x29, 0xeb, 0xd2, 0x15,
0xf9, 0x09, 0xda, 0x45, 0xf0, 0x3d, 0xc2, 0x07,
0xf9, 0xc9, 0xfe, 0x2d, 0xf5, 0xca, 0x26, 0xf9,
0xfe, 0x2b, 0xca, 0x26, 0xf9, 0x2b, 0xcd, 0x33,
0xf6, 0x47, 0x57, 0x5f, 0x2f, 0x4f, 0xcd, 0x36,
0xe8, 0xda, 0x77, 0xf9, 0xfe, 0x2e, 0xca, 0x52,
0xf9, 0xfe, 0x45, 0xc2, 0x56, 0xf9, 0xcd, 0x36,
0xe8, 0xcd, 0x70, 0xee, 0xcd, 0x36, 0xe8, 0xda,
0x99, 0xf9, 0x14, 0xc2, 0x56, 0xf9, 0xaf, 0x93,
0x5f, 0x0c, 0x0c, 0xca, 0x2e, 0xf9, 0xe5, 0x7b,
0x90, 0xf4, 0x6f, 0xf9, 0xf2, 0x65, 0xf9, 0xf5,
0xcd, 0x5b, 0xf7, 0xf1, 0x3c, 0xc2, 0x59, 0xf9,
0xd1, 0xf1, 0xcc, 0x3c, 0xf8, 0xeb, 0xc9, 0xc8,
0xf5, 0xcd, 0xfc, 0xf7, 0xf1, 0x3d, 0xc9, 0xd5,
0x57, 0x78, 0x89, 0x47, 0xc5, 0xe5, 0xd5, 0xcd,
0xfc, 0xf7, 0xf1, 0xd6, 0x30, 0xcd, 0x8e, 0xf9,
0xe1, 0xc1, 0xd1, 0xc3, 0x2e, 0xf9, 0xcd, 0x44,
0xf8, 0xcd, 0x25, 0xf8, 0xc1, 0xd1, 0xc3, 0xcd,
0xf5, 0x7b, 0x07, 0x07, 0x83, 0x07, 0x86, 0xd6,
0x30, 0x5f, 0xc3, 0x44, 0xf9, 0xe5, 0x21, 0x46,
0xe3, 0xcd, 0x10, 0xf2, 0xe1, 0xeb, 0xaf, 0x06,
0x98, 0xcd, 0x2a, 0xf8, 0x21, 0x0f, 0xf2, 0xe5,
0x21, 0xe9, 0x10, 0xe5, 0xcd, 0x13, 0xf8, 0x36,
0x20, 0xf2, 0xc6, 0xf9, 0x36, 0x2d, 0x23, 0x36,
0x30, 0xca, 0x7c, 0xfa, 0xe5, 0xfc, 0x3c, 0xf8,
0xaf, 0xf5, 0xcd, 0x82, 0xfa, 0x01, 0x43, 0x91,
0x11, 0xf8, 0x4f, 0xcd, 0x8e, 0xf8, 0xb7, 0xe2,
0xf3, 0xf9, 0xf1, 0xcd, 0x70, 0xf9, 0xf5, 0xc3,
0xd5, 0xf9, 0xcd, 0x5b, 0xf7, 0xf1, 0x3c, 0xf5,
0xcd, 0x82, 0xfa, 0xcd, 0xbb, 0xf5, 0x3c, 0xcd,
0xbb, 0xf8, 0xcd, 0x54, 0xf8, 0x01, 0x06, 0x03,
0xf1, 0x81, 0x3c, 0xfa, 0x0f, 0xfa, 0xfe, 0x08,
0xd2, 0x0f, 0xfa, 0x3c, 0x47, 0x3e, 0x02, 0x3d,
0x3d, 0xe1, 0xf5, 0x11, 0x95, 0xfa, 0x05, 0xc2,
0x20, 0xfa, 0x36, 0x2e, 0x23, 0x36, 0x30, 0x23,
0x05, 0x36, 0x2e, 0xcc, 0x69, 0xf8, 0xc5, 0xe5,
0xd5, 0xcd, 0x5f, 0xf8, 0xe1, 0x06, 0x2f, 0x04,
0x7b, 0x96, 0x5f, 0x23, 0x7a, 0x9e, 0x57, 0x23,
0x79, 0x9e, 0x4f, 0x2b, 0x2b, 0xd2, 0x2f, 0xfa,
0xcd, 0x72, 0xf6, 0x23, 0xcd, 0x54, 0xf8, 0xeb,
0xe1, 0x70, 0x23, 0xc1, 0x0d, 0xc2, 0x20, 0xfa,
0x05, 0xca, 0x60, 0xfa, 0x2b, 0x7e, 0xfe, 0x30,
0xca, 0x54, 0xfa, 0xfe, 0x2e, 0xc4, 0x69, 0xf8,
0xf1, 0xca, 0x7f, 0xfa, 0x36, 0x45, 0x23, 0x36,
0x2b, 0xf2, 0x70, 0xfa, 0x36, 0x2d, 0x2f, 0x3c,
0x06, 0x2f, 0x04, 0xd6, 0x0a, 0xd2, 0x72, 0xfa,
0xc6, 0x3a, 0x23, 0x70, 0x23, 0x77, 0x23, 0x71,
0xe1, 0xc9, 0x01, 0x74, 0x94, 0x11, 0xf7, 0x23,
0xcd, 0x8e, 0xf8, 0xb7, 0xe1, 0xe2, 0xea, 0xf9,
0xe9, 0x00, 0x00, 0x00, 0x80, 0xa0, 0x86, 0x01,
0x10, 0x27, 0x00, 0xe8, 0x03, 0x00, 0x64, 0x00,
0x00, 0x0a, 0x00, 0x00, 0x01, 0x00, 0x00, 0x21,
0x3c, 0xf8, 0xe3, 0xe9, 0xcd, 0x44, 0xf8, 0x21,
0x91, 0xfa, 0xcd, 0x51, 0xf8, 0xc1, 0xd1, 0xcd,
0x13, 0xf8, 0x78, 0xca, 0xfa, 0xfa, 0xf2, 0xc5,
0xfa, 0xb7, 0xca, 0xb0, 0xe3, 0xb7, 0xca, 0x34,
0xf6, 0xd5, 0xc5, 0x79, 0xf6, 0x7f, 0xcd, 0x5f,
0xf8, 0xf2, 0xe2, 0xfa, 0xd5, 0xc5, 0xcd, 0xe6,
0xf8, 0xc1, 0xd1, 0xf5, 0xcd, 0x8e, 0xf8, 0xe1,
0x7c, 0x1f, 0xe1, 0x22, 0xe6, 0x10, 0xe1, 0x22,
0xe4, 0x10, 0xdc, 0xa7, 0xfa, 0xcc, 0x3c, 0xf8,
0xd5, 0xc5, 0xcd, 0xc7, 0xf6, 0xc1, 0xd1, 0xcd,
0x08, 0xf7, 0xcd, 0x44, 0xf8, 0x01, 0x38, 0x81,
0x11, 0x3b, 0xaa, 0xcd, 0x08, 0xf7, 0x3a, 0xe7,
0x10, 0xfe, 0x88, 0xd2, 0xef, 0xf7, 0xcd, 0xe6,
0xf8, 0xc6, 0x80, 0xc6, 0x02, 0xda, 0xef, 0xf7,
0xf5, 0x21, 0xb6, 0xf6, 0xcd, 0xbe, 0xf5, 0xcd,
0xff, 0xf6, 0xf1, 0xc1, 0xd1, 0xf5, 0xcd, 0xca,
0xf5, 0xcd, 0x3c, 0xf8, 0x21, 0x3a, 0xfb, 0xcd,
0x6a, 0xfb, 0x11, 0x00, 0x00, 0xc1, 0x4a, 0xc3,
0x08, 0xf7, 0x08, 0x40, 0x2e, 0x94, 0x74, 0x70,
0x4f, 0x2e, 0x77, 0x6e, 0x02, 0x88, 0x7a, 0xe6,
0xa0, 0x2a, 0x7c, 0x50, 0xaa, 0xaa, 0x7e, 0xff,
0xff, 0x7f, 0x7f, 0x00, 0x00, 0x80, 0x81, 0x00,
0x00, 0x00, 0x81, 0xcd, 0x44, 0xf8, 0x11, 0x06,
0xf7, 0xd5, 0xe5, 0xcd, 0x5f, 0xf8, 0xcd, 0x08,
0xf7, 0xe1, 0xcd, 0x44, 0xf8, 0x7e, 0x23, 0xcd,
0x51, 0xf8, 0x06, 0xf1, 0xc1, 0xd1, 0x3d, 0xc8,
0xd5, 0xc5, 0xf5, 0xe5, 0xcd, 0x08, 0xf7, 0xe1,
0xcd, 0x62, 0xf8, 0xe5, 0xcd, 0xcd, 0xf5, 0xe1,
0xc3, 0x73, 0xfb, 0xcd, 0x13, 0xf8, 0x21, 0x19,
0x10, 0xfa, 0xec, 0xfb, 0x21, 0x3a, 0x10, 0xcd,
0x51, 0xf8, 0x21, 0x19, 0x10, 0xc8, 0x86, 0xe6,
0x07, 0x06, 0x00, 0x77, 0x23, 0x87, 0x87, 0x4f,
0x09, 0xcd, 0x62, 0xf8, 0xcd, 0x08, 0xf7, 0x3a,
0x18, 0x10, 0x3c, 0xe6, 0x03, 0x06, 0x00, 0xfe,
0x01, 0x88, 0x32, 0x18, 0x10, 0x21, 0xf0, 0xfb,
0x87, 0x87, 0x4f, 0x09, 0xcd, 0xbe, 0xf5, 0xcd,
0x5f, 0xf8, 0x7b, 0x59, 0xee, 0x4f, 0x4f, 0x36,
0x80, 0x2b, 0x46, 0x36, 0x80, 0x21, 0x17, 0x10,
0x34, 0x7e, 0xd6, 0xab, 0xc2, 0xe3, 0xfb, 0x77,
0x0c, 0x15, 0x1c, 0xcd, 0x1e, 0xf6, 0x21, 0x3a,
0x10, 0xc3, 0x6b, 0xf8, 0x77, 0x2b, 0x77, 0x2b,
0x77, 0xc3, 0xc7, 0xfb, 0x68, 0xb1, 0x46, 0x68,
0x99, 0xe9, 0x92, 0x69, 0x10, 0xd1, 0x75, 0x68,
0x21, 0x4a, 0xfc, 0xcd, 0xbe, 0xf5, 0xcd, 0x44,
0xf8, 0x01, 0x49, 0x83, 0x11, 0xdb, 0x0f, 0xcd,
0x54, 0xf8, 0xc1, 0xd1, 0xcd, 0x69, 0xf7, 0xcd,
0x44, 0xf8, 0xcd, 0xe6, 0xf8, 0xc1, 0xd1, 0xcd,
0xca, 0xf5, 0x21, 0x4e, 0xfc, 0xcd, 0xc4, 0xf5,
0xcd, 0x13, 0xf8, 0x37, 0xf2, 0x36, 0xfc, 0xcd,
0xbb, 0xf5, 0xcd, 0x13, 0xf8, 0xb7, 0xf5, 0xf4,
0x3c, 0xf8, 0x21, 0x4e, 0xfc, 0xcd, 0xbe, 0xf5,
0xf1, 0xd4, 0x3c, 0xf8, 0x21, 0x52, 0xfc, 0xc3,
0x5b, 0xfb, 0xdb, 0x0f, 0x49, 0x81, 0x00, 0x00,
0x00, 0x7f, 0x05, 0xba, 0xd7, 0x1e, 0x86, 0x64,
0x26, 0x99, 0x87, 0x58, 0x34, 0x23, 0x87, 0xe0,
0x5d, 0xa5, 0x86, 0xda, 0x0f, 0x49, 0x83, 0xcd,
0x44, 0xf8, 0xcd, 0x06, 0xfc, 0xc1, 0xe1, 0xcd,
0x44, 0xf8, 0xeb, 0xcd, 0x54, 0xf8, 0xcd, 0x00,
0xfc, 0xc3, 0x67, 0xf7, 0xcd, 0x13, 0xf8, 0xfc,
0xa7, 0xfa, 0xfc, 0x3c, 0xf8, 0x3a, 0xe7, 0x10,
0xfe, 0x81, 0xda, 0x99, 0xfc, 0x01, 0x00, 0x81,
0x51, 0x59, 0xcd, 0x69, 0xf7, 0x21, 0xc4, 0xf5,
0xe5, 0x21, 0xa3, 0xfc, 0xcd, 0x5b, 0xfb, 0x21,
0x4a, 0xfc, 0xc9, 0x09, 0x4a, 0xd7, 0x3b, 0x78,
0x02, 0x6e, 0x84, 0x7b, 0xfe, 0xc1, 0x2f, 0x7c,
0x74, 0x31, 0x9a, 0x7d, 0x84, 0x3d, 0x5a, 0x7d,
0xc8, 0x7f, 0x91, 0x7e, 0xe4, 0xbb, 0x4c, 0x7e,
0x6c, 0xaa, 0xaa, 0x7f, 0x00, 0x00, 0x00, 0x81,
0xcd, 0x39, 0xfe, 0x06, 0x00, 0xcd, 0x9b, 0xfd,
0x05, 0xc2, 0xcd, 0xfc, 0xc9, 0xc3, 0x39, 0xfe,
0xc9, 0xe5, 0xc5, 0xd5, 0xf5, 0xcd, 0x6d, 0xfe,
0xc2, 0xfb, 0xfc, 0xf1, 0xf5, 0xfe, 0x0a, 0xca,
0x00, 0xfd, 0xfe, 0x08, 0xc2, 0xf1, 0xfc, 0x3e,
0x1d, 0xfe, 0x0d, 0xc2, 0xfd, 0xfc, 0x3e, 0x1f,
0xc3, 0xfd, 0xfc, 0xf1, 0xf5, 0xcd, 0x45, 0xfe,
0xf1, 0xd1, 0xc1, 0xe1, 0xc9, 0xe5, 0xc5, 0xd5,
0xcd, 0x6d, 0xfe, 0xca, 0x13, 0xfd, 0xdf, 0x7b,
0xc3, 0x19, 0xfd, 0xcd, 0x4d, 0x0c, 0xd2, 0x13,
0xfd, 0xfe, 0x1d, 0xc2, 0x20, 0xfd, 0x3e, 0x08,
0xfe, 0x1c, 0xc2, 0x27, 0xfd, 0x3e, 0x03, 0xfe,
0x1a, 0xc2, 0x2e, 0xfd, 0x3e, 0x7f, 0xfe, 0x1b,
0xc2, 0x35, 0xfd, 0x3e, 0x03, 0xfe, 0x1f, 0xc2,
0x3c, 0xfd, 0x3e, 0x0d, 0xd1, 0xc1, 0xe1, 0xc9,
0xaf, 0xcd, 0x70, 0xfd, 0xca, 0x50, 0xfd, 0x3a,
0x4d, 0x10, 0xb7, 0xc2, 0x50, 0xfd, 0xaf, 0xc9,
0xcd, 0x53, 0xfe, 0x3e, 0xff, 0xc9, 0xdb, 0x02,
0x17, 0xd2, 0x56, 0xfd, 0xdb, 0x01, 0xc9, 0xd3,
0x01, 0xdb, 0x02, 0x87, 0xf8, 0xc3, 0x61, 0xfd,
0xf5, 0xcd, 0x5f, 0xfd, 0xf1, 0xc9, 0x00, 0x00,
0xe5, 0x3e, 0x02, 0x21, 0x00, 0x0c, 0xae, 0xd3,
0x00, 0xee, 0x01, 0xd3, 0x00, 0xee, 0x02, 0xd3,
0x00, 0x7e, 0xd3, 0x00, 0x19, 0xe1, 0xdb, 0x00,
0xe6, 0x12, 0xc9, 0xcd, 0x6d, 0xfe, 0xca, 0x96,
0xfd, 0x3e, 0x0c, 0xc3, 0xd9, 0xfc, 0x3e, 0x1e,
0xc3, 0xd9, 0xfc, 0xaf, 0xf5, 0xf1, 0xf5, 0xf1,
0x3d, 0xc2, 0x9c, 0xfd, 0xc9, 0xcd, 0x84, 0xf4,
0x7b, 0x32, 0x42, 0x10, 0xc9, 0xcd, 0x41, 0xed,
0xcd, 0x8b, 0xe9, 0xed, 0x53, 0x46, 0x10, 0xed,
0x53, 0x48, 0x10, 0xc9, 0xcd, 0x8b, 0xe9, 0xd5,
0xe1, 0x46, 0x23, 0x7e, 0xc3, 0xf2, 0xf0, 0xcd,
0x41, 0xed, 0xcd, 0x8b, 0xe9, 0xd5, 0xcd, 0x90,
0xe6, 0x2c, 0xcd, 0x41, 0xed, 0xcd, 0x8b, 0xe9,
0xe3, 0x73, 0x23, 0x72, 0xe1, 0xc9, 0xf3, 0xdd,
0x21, 0xff, 0xff, 0xc3, 0x12, 0xe0, 0xcd, 0x84,
0xf4, 0xf5, 0xcd, 0x90, 0xe6, 0x2c, 0xcd, 0x84,
0xf4, 0xc1, 0xe5, 0xc5, 0xcd, 0x11, 0xfe, 0xe5,
0xcd, 0x6d, 0xfe, 0xca, 0x04, 0xfe, 0xe1, 0x22,
0x29, 0x0c, 0xe1, 0xc9, 0x2a, 0x18, 0x0c, 0x36,
0x20, 0xe1, 0x22, 0x18, 0x0c, 0x36, 0x5f, 0xe1,
0xc9, 0x21, 0xc9, 0x07, 0x06, 0x00, 0x4f, 0xb7,
0xca, 0xa0, 0xe9, 0xfe, 0x11, 0xf2, 0xa0, 0xe9,
0xd1, 0xf1, 0xd5, 0x16, 0x00, 0x5f, 0xb7, 0xca,
0xa0, 0xe9, 0xfe, 0x31, 0xf2, 0xa0, 0xe9, 0x19,
0x16, 0x00, 0x59, 0x06, 0x40, 0x19, 0x10, 0xfd,
0xc9, 0xcd, 0x6d, 0xfe, 0xca, 0x42, 0xfe, 0xdf,
0x5f, 0xc9, 0xc3, 0x51, 0x00, 0xf5, 0xcd, 0x6d,
0xfe, 0xca, 0x4f, 0xfe, 0xf1, 0xf7, 0xc9, 0xf1,
0xc3, 0x4a, 0x0c, 0x3a, 0x4d, 0x10, 0xc2, 0x65,
0xfe, 0xcd, 0x6d, 0xfe, 0xca, 0x62, 0xfe, 0xdf,
0x62, 0xc9, 0xc3, 0x4d, 0x0c, 0x3e, 0x00, 0x32,
0x4d, 0x10, 0x3e, 0x03, 0xc9, 0x3a, 0x01, 0x00,
0xfe, 0x33, 0xc9, 0xcd, 0x39, 0xfe, 0xcd, 0x6d,
0xfe, 0xca, 0x7f, 0xfe, 0xdf, 0x57, 0xc9, 0x3a,
0x8d, 0x00, 0xca, 0x00, 0x04, 0xc3, 0xd1, 0x03,
0xcd, 0x39, 0xfe, 0xcd, 0x6d, 0xfe, 0xca, 0x99,
0xfe, 0x3e, 0x52, 0x32, 0x2b, 0x0c, 0xdf, 0x52,
0xc9, 0x3a, 0x8d, 0x00, 0xca, 0x0c, 0x07, 0xc3,
0xd1, 0x03, 0xcd, 0x6d, 0xfe, 0xca, 0x00, 0x00,
0xdf, 0x5b, 0xcd, 0x39, 0xfe, 0xcd, 0x6d, 0xfe,
0xca, 0xa0, 0xe9, 0x3e, 0x56, 0x32, 0x2b, 0x0c,
0xdf, 0x56, 0xc9, 0x3e, 0x00, 0x32, 0x4d, 0x10,
0xcd, 0x6d, 0xfe, 0xca, 0x19, 0xe0, 0x21, 0xde,
0xfe, 0x22, 0x7e, 0x0c, 0xdd, 0xe5, 0xf1, 0xb7,
0xc2, 0x19, 0xe0, 0x06, 0x0f, 0xcd, 0xcd, 0xfc,
0xcd, 0x0d, 0x00, 0xc3, 0x19, 0xe0, 0xf5, 0x3e,
0xff, 0x32, 0x4d, 0x10, 0xf1, 0xed, 0x45, 0x00,
0xdf, 0x63, 0xd5, 0xd5, 0xe1, 0x11, 0x2f, 0x00,
0x19, 0x7e, 0xfe, 0x20, 0xc2, 0x02, 0xff, 0x1d,
0x3e, 0x00, 0xb3, 0xca, 0x02, 0xff, 0x2b, 0xc3,
0xf1, 0xfe, 0xd5, 0xc1, 0x03, 0x11, 0x61, 0x10,
0xe1, 0xc5, 0xed, 0xb0, 0x3e, 0x00, 0x12, 0xc1,
0x41, 0x21, 0x60, 0x10, 0xc9, 0xcd, 0x90, 0xe6,
0x28, 0xcd, 0x41, 0xed, 0xcd, 0x8b, 0xe9, 0xd5,
0xcd, 0x90, 0xe6, 0x2c, 0xcd, 0x41, 0xed, 0xcd,
0x90, 0xe6, 0x29, 0xcd, 0x8b, 0xe9, 0xe5, 0xfd,
0xe1, 0xcd, 0x96, 0xff, 0xf5, 0xcd, 0xc2, 0xff,
0xcd, 0x11, 0xfe, 0xf1, 0x06, 0xc0, 0xb0, 0xc9,
0xcd, 0x15, 0xff, 0xf5, 0x7e, 0xfe, 0xc0, 0xd2,
0x50, 0xff, 0xf1, 0x77, 0xfd, 0xe5, 0xe1, 0xc9,
0xc1, 0xb0, 0xc3, 0x4b, 0xff, 0xcd, 0x15, 0xff,
0xf5, 0x7e, 0xfe, 0xc0, 0xda, 0x75, 0xff, 0x06,
0x3f, 0xa0, 0xc1, 0xa0, 0xca, 0x4c, 0xff, 0x7e,
0xe6, 0x3f, 0xa8, 0xfe, 0xc0, 0xc2, 0x4b, 0xff,
0x3e, 0x20, 0xc3, 0x4b, 0xff, 0xc1, 0xc3, 0x4c,
0xff, 0xcd, 0x15, 0xff, 0x46, 0xcd, 0xed, 0xff,
0xc2, 0x91, 0xff, 0x3e, 0x00, 0x06, 0x01, 0xe1,
0xfd, 0xe5, 0x11, 0x1d, 0xee, 0xd5, 0xc3, 0xf2,
0xf0, 0x06, 0x00, 0xc3, 0x87, 0xff, 0xc1, 0xe1,
0xe5, 0xc5, 0x7d, 0x06, 0x01, 0xa0, 0xf5, 0xd5,
0xe1, 0x11, 0x00, 0x00, 0x01, 0x03, 0x00, 0x23,
0xed, 0x42, 0x13, 0xca, 0xb1, 0xff, 0xf2, 0xa8,
0xff, 0x09, 0xf1, 0xb7, 0x7d, 0xca, 0xba, 0xff,
0xc6, 0x03, 0x47, 0x3e, 0x01, 0x07, 0x10, 0xfd,
0x1f, 0xc9, 0xc1, 0xf1, 0xe1, 0xf5, 0x7d, 0x1f,
0xc6, 0x01, 0xe6, 0x3f, 0x67, 0xe5, 0xc5, 0x7b,
0xc9, 0xcd, 0xd5, 0xfc, 0x7e, 0xc9, 0x3a, 0xce,
0x10, 0xfe, 0xff, 0xc2, 0x06, 0xe9, 0xc3, 0x10,
0xe9, 0xcd, 0x81, 0xeb, 0xc3, 0xf2, 0xe5, 0xcd,
0x81, 0xeb, 0xc3, 0xf2, 0xe5, 0xf5, 0xa0, 0xc1,
0xb8, 0x3e, 0x00, 0xc9, 0xcd, 0x9b, 0xe6, 0xc3,
0x81, 0xeb, 0xc3, 0xde, 0xfd, 0xc3, 0xb1, 0xe0
};

/*
; NASCOM ROM BASIC Ver 4.7, (C) 1978 Microsoft
; Scanned from source published in 80-BUS NEWS from Vol 2, Issue 3
; (May-June 1983) to Vol 3, Issue 3 (May-June 1984)
; Adapted for the freeware Zilog Macro Assembler 2.10 to produce
; the original ROM code (checksum A934H). PA

; MONITOR EQUATES (RESTART INSTRUCTIONS)

_ROUT   EQU     0F7H            ; ROUT - Output char in A
_BLNK   EQU     07BDFH          ; SCAL BLINK - Get input char in A
_INLN   EQU     063DFH          ; SCAL INLIN - Get input line
_MFLP   EQU     05FDFH          ; SCAL MFLP - Toggle tape drv LED
_MRET   EQU     05BDFH          ; SCAL MRET - Return to monitor
_READ   EQU     052DFH          ; SCAL READ
_RIN    EQU     062DFH          ; SCAL RIN - Scan for input char
_VRFY   EQU     056DFH          ; SCAL VERIFY
_WRIT   EQU     057DFH          ; SCAL WRITE

; GENERAL EQUATES

UARTD   EQU     01H             ; UART data port
UARTS   EQU     02H             ; UART status port
CTRLC   EQU     03H             ; Control "C"
CTRLG   EQU     07H             ; Control "G"
BKSP    EQU     08H             ; Back space
LF      EQU     0AH             ; Line feed
CS      EQU     0CH             ; Clear screen
CR      EQU     0DH             ; Carriage return
CTRLO   EQU     0FH             ; Control "O"
CTRLR   EQU     12H             ; Control "R"
CTRLS   EQU     13H             ; Control "S"
CTRLU   EQU     15H             ; Control "U"
CTRLZ   EQU     1AH             ; Control "Z"
ESC     EQU     1BH             ; Escape
TBRK    EQU     1CH             ; "T" monitor break
TBS     EQU     1DH             ; "T" monitor back space
TCS     EQU     1EH             ; "T" monitor clear screen
TCR     EQU     1FH             ; "T" monitor carriage return
DEL     EQU     7FH             ; Delete

; MONITOR LOCATIONS

MONSTT  EQU     0000H           ; Start of monitor
STMON   EQU     000DH           ; NAS-SYS initialisation
MFLP    EQU     0051H           ; Flip tape LED ("T")
MONTYP  EQU     008DH           ; Type of "T" monitor
T2DUMP  EQU     03D1H           ; "T2" Dump routine
T4WR    EQU     0400H           ; "T4" Write routine
T4READ  EQU     070CH           ; "T4" Read routine
VDU     EQU     0800H           ; NASCOM Video RAM base

; MONITOR WORK SPACE LOCATIONS

PORT0   EQU     0C00H           ; Copy of output port 0
ARG1    EQU     0C0CH           ; Argument 1
ARG2    EQU     0C0EH           ; Argument 2
TCUR    EQU     0C18H           ; "T" monitor cursor
CURSOR  EQU     0C29H           ; NAS-SYS Cursor
ARGN    EQU     0C2BH           ; Number of ARGS
TOUT    EQU     0C4AH           ; "T" Output reflection
TIN     EQU     0C4DH           ; "T" Input reflection
CIN     EQU     0C75H           ; NAS-SYS Input table
NMI     EQU     0C7EH           ; NAS-SYS NMI Jump

; BASIC WORK SPACE LOCATIONS

WRKSPC  EQU     1000H           ; BASIC Work space
USR     EQU     1003H           ; "USR (x)" jump
OUTSUB  EQU     1006H           ; "OUT p,n"
OTPORT  EQU     1007H           ; Port (p)
DIVSUP  EQU     1009H           ; Division support routine
DIV1    EQU     100AH           ; <- Values
DIV2    EQU     100EH           ; <-   to
DIV3    EQU     1012H           ; <-   be
DIV4    EQU     1015H           ; <-inserted
SEED    EQU     1017H           ; Random number seed
LSTRND  EQU     103AH           ; Last random number
INPSUB  EQU     103EH           ; #INP (x)" Routine
INPORT  EQU     103FH           ; PORT (x)
NULLS   EQU     1041H           ; Number of nulls
LWIDTH  EQU     1042H           ; Terminal width
COMMAN  EQU     1043H           ; Width for commas
NULFLG  EQU     1044H           ; Null after input byte flag
CTLOFG  EQU     1045H           ; Control "O" flag
LINESC  EQU     1046H           ; Lines counter
LINESN  EQU     1048H           ; Lines number
CHKSUM  EQU     104AH           ; Array load/save check sum
NMIFLG  EQU     104CH           ; Flag for NMI break routine
BRKFLG  EQU     104DH           ; Break flag
RINPUT  EQU     104EH           ; Input reflection
POINT   EQU     1051H           ; "POINT" reflection (unused)
PSET    EQU     1054H           ; "SET"   reflection
RESET   EQU     1057H           ; "RESET" reflection
STRSPC  EQU     105AH           ; Bottom of string space
LINEAT  EQU     105CH           ; Current line number
BASTXT  EQU     105EH           ; Pointer to start of program
BUFFER  EQU     1061H           ; Input buffer
STACK   EQU     1066H           ; Initial stack
CURPOS  EQU     10ABH           ; Character position on line
LCRFLG  EQU     10ACH           ; Locate/Create flag
TYPE    EQU     10ADH           ; Data type flag
DATFLG  EQU     10AEH           ; Literal statement flag
LSTRAM  EQU     10AFH           ; Last available RAM
TMSTPT  EQU     10B1H           ; Temporary string pointer
TMSTPL  EQU     10B3H           ; Temporary string pool
TMPSTR  EQU     10BFH           ; Temporary string
STRBOT  EQU     10C3H           ; Bottom of string space
CUROPR  EQU     10C5H           ; Current operator in EVAL
LOOPST  EQU     10C7H           ; First statement of loop
DATLIN  EQU     10C9H           ; Line of current DATA item
FORFLG  EQU     10CBH           ; "FOR" loop flag
LSTBIN  EQU     10CCH           ; Last byte entered
READFG  EQU     10CDH           ; Read/Input flag
BRKLIN  EQU     10CEH           ; Line of break
NXTOPR  EQU     10D0H           ; Next operator in EVAL
ERRLIN  EQU     10D2H           ; Line of error
CONTAD  EQU     10D4H           ; Where to CONTinue
PROGND  EQU     10D6H           ; End of program
VAREND  EQU     10D8H           ; End of variables
ARREND  EQU     10DAH           ; End of arrays
NXTDAT  EQU     10DCH           ; Next data item
FNRGNM  EQU     10DEH           ; Name of FN argument
FNARG   EQU     10E0H           ; FN argument value
FPREG   EQU     10E4H           ; Floating point register
FPEXP   EQU     FPREG+3         ; Floating point exponent
SGNRES  EQU     10E8H           ; Sign of result
PBUFF   EQU     10E9H           ; Number print buffer
MULVAL  EQU     10F6H           ; Multiplier
PROGST  EQU     10F9H           ; Start of program text area
STLOOK  EQU     115DH           ; Start of memory test

; BASIC ERROR CODE VALUES

NF      EQU     00H             ; NEXT without FOR
SN      EQU     02H             ; Syntax error
RG      EQU     04H             ; RETURN without GOSUB
OD      EQU     06H             ; Out of DATA
FC      EQU     08H             ; Function call error
OV      EQU     0AH             ; Overflow
OM      EQU     0CH             ; Out of memory
UL      EQU     0EH             ; Undefined line number
BS      EQU     10H             ; Bad subscript
DD      EQU     12H             ; Re-DIMensioned array
DZ      EQU     14H             ; Division by zero (/0)
ID      EQU     16H             ; Illegal direct
TM      EQU     18H             ; Type miss-match
OS      EQU     1AH             ; Out of string space
LS      EQU     1CH             ; String too long
ST      EQU     1EH             ; String formula too complex
CN      EQU     20H             ; Can't CONTinue
UF      EQU     22H             ; UnDEFined FN function
MO      EQU     24H             ; Missing operand

        ORG     0E000H

START:  JP      STARTB          ; Jump for restart jump
STARTB: DI                      ; No interrupts
        LD      IX,0            ; Flag cold start
        JP      CSTART          ; Jump to initialise

        DW      DEINT           ; Get integer -32768 to 32767
        DW      ABPASS          ; Return integer in AB

        JP      LDNMI1          ; << NO REFERENCE TO HERE >>

CSTART: LD      HL,WRKSPC       ; Start of workspace RAM
        LD      SP,HL           ; Set up a temporary stack
        JP      INITST          ; Go to initialise

INIT:   LD      DE,INITAB       ; Initialise workspace
        LD      B,INITBE-INITAB+3; Bytes to copy
        LD      HL,WRKSPC       ; Into workspace RAM
COPY:   LD      A,(DE)          ; Get source
        LD      (HL),A          ; To destination
        INC     HL              ; Next destination
        INC     DE              ; Next source
        DEC     B               ; Count bytes
        JP      NZ,COPY         ; More to move
        LD      SP,HL           ; Temporary stack
        CALL    CLREG           ; Clear registers and stack
        CALL    PRNTCR          ; Output CRLF
        LD      (BUFFER+72+1),A ; Mark end of buffer
        LD      (PROGST),A      ; Initialise program area
MSIZE:  LD      HL,MEMMSG       ; Point to message
        CALL    PRS             ; Output "Memory size"
        CALL    PROMPT          ; Get input with "?"
        CALL    GETCHR          ; Get next character
        OR      A               ; Set flags
        JP      NZ,TSTMEM       ; If number - Test if RAM there
        LD      HL,STLOOK       ; Point to start of RAM
MLOOP:  INC     HL              ; Next byte
        LD      A,H             ; Above address FFFF ?
        OR      L
        JP      Z,SETTOP        ; Yes - 64K RAM
        LD      A,(HL)          ; Get contents
        LD      B,A             ; Save it
        CPL                     ; Flip all bits
        LD      (HL),A          ; Put it back
        CP      (HL)            ; RAM there if same
        LD      (HL),B          ; Restore old contents
        JP      Z,MLOOP         ; If RAM - test next byte
        JP      SETTOP          ; Top of RAM found

TSTMEM: CALL    ATOH            ; Get high memory into DE
        OR      A               ; Set flags on last byte
        JP      NZ,SNERR        ; ?SN Error if bad character
        EX      DE,HL           ; Address into HL
        DEC     HL              ; Back one byte
        LD      A,11011001B     ; Test byte
        LD      B,(HL)          ; Get old contents
        LD      (HL),A          ; Load test byte
        CP      (HL)            ; RAM there if same
        LD      (HL),B          ; Restore old contents
        JP      NZ,MSIZE        ; Ask again if no RAM

SETTOP: DEC     HL              ; Back one byte
        LD      DE,STLOOK-1     ; See if enough RAM
        CALL    CPDEHL          ; Compare DE with HL
        JP      C,MSIZE         ; Ask again if not enough RAM
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        LD      DE,0-50         ; 50 Bytes string space
        LD      (LSTRAM),HL     ; Save last available RAM
        ADD     HL,DE           ; Allocate string space
        LD      (STRSPC),HL     ; Save string space
        CALL    CLRPTR          ; Clear program area
        LD      HL,(STRSPC)     ; Get end of memory
        LD      DE,0-17         ; Offset for free bytes
        ADD     HL,DE           ; Adjust HL
        LD      DE,PROGST       ; Start of program text
        LD      A,L             ; Get LSB
        SUB     E               ; Adjust it
        LD      L,A             ; Re-save
        LD      A,H             ; Get MSB
        SBC     A,D             ; Adjust it
        LD      H,A             ; Re-save
        PUSH    HL              ; Save bytes free
        LD      HL,SIGNON       ; Sign-on message
        CALL    PRS             ; Output string
        POP     HL              ; Get bytes free back
        CALL    PRNTHL          ; Output amount of free memory
        LD      HL,BFREE        ; " Bytes free" message
        CALL    PRS             ; Output string

WARMST: LD      SP,STACK        ; Temporary stack
BRKRET: CALL    CLREG           ; Clear registers and stack
        JP      PRNTOK          ; Go to get command line

BFREE:  DB      " Bytes free",CR,0,0

SIGNON: DB      "NASCOM ROM BASIC Ver 4.7   ",CR
        DB      "Copyright (C) 1978 by Microsoft",CR,0,0

MEMMSG: DB      "Memory size",0

; FUNCTION ADDRESS TABLE

FNCTAB: DW      SGN
        DW      INT
        DW      ABS
        DW      USR
        DW      FRE
        DW      INP
        DW      POS
        DW      SQR
        DW      RND
        DW      LOG
        DW      EXP
        DW      COS
        DW      SIN
        DW      TAN
        DW      ATN
        DW      PEEK
        DW      DEEK
        DW      POINT
        DW      LEN
        DW      STR
        DW      VAL
        DW      ASC
        DW      CHR
        DW      LEFT
        DW      RIGHT
        DW      MID

; RESERVED WORD LIST

WORDS:  DB      "E"+80H,"ND"
        DB      "F"+80H,"OR"
        DB      "N"+80H,"EXT"
        DB      "D"+80H,"ATA"
        DB      "I"+80H,"NPUT"
        DB      "D"+80H,"IM"
        DB      "R"+80H,"EAD"
        DB      "L"+80H,"ET"
        DB      "G"+80H,"OTO"
        DB      "R"+80H,"UN"
        DB      "I"+80H,"F"
        DB      "R"+80H,"ESTORE"
        DB      "G"+80H,"OSUB"
        DB      "R"+80H,"ETURN"
        DB      "R"+80H,"EM"
        DB      "S"+80H,"TOP"
        DB      "O"+80H,"UT"
        DB      "O"+80H,"N"
        DB      "N"+80H,"ULL"
        DB      "W"+80H,"AIT"
        DB      "D"+80H,"EF"
        DB      "P"+80H,"OKE"
        DB      "D"+80H,"OKE"
        DB      "S"+80H,"CREEN"
        DB      "L"+80H,"INES"
        DB      "C"+80H,"LS"
        DB      "W"+80H,"IDTH"
        DB      "M"+80H,"ONITOR"
        DB      "S"+80H,"ET"
        DB      "R"+80H,"ESET"
        DB      "P"+80H,"RINT"
        DB      "C"+80H,"ONT"
        DB      "L"+80H,"IST"
        DB      "C"+80H,"LEAR"
        DB      "C"+80H,"LOAD"
        DB      "C"+80H,"SAVE"
        DB      "N"+80H,"EW"
        DB      "T"+80H,"AB("
        DB      "T"+80H,"O"
        DB      "F"+80H,"N"
        DB      "S"+80H,"PC("
        DB      "T"+80H,"HEN"
        DB      "N"+80H,"OT"
        DB      "S"+80H,"TEP"

        DB      "+"+80H
        DB      "-"+80H
        DB      "*"+80H
        DB      "/"+80H
        DB      "^"+80H
        DB      "A"+80H,"ND"
        DB      "O"+80H,"R"
        DB      ">"+80H
        DB      "="+80H
        DB      "<"+80H

        DB      "S"+80H,"GN"
        DB      "I"+80H,"NT"
        DB      "A"+80H,"BS"
        DB      "U"+80H,"SR"
        DB      "F"+80H,"RE"
        DB      "I"+80H,"NP"
        DB      "P"+80H,"OS"
        DB      "S"+80H,"QR"
        DB      "R"+80H,"ND"
        DB      "L"+80H,"OG"
        DB      "E"+80H,"XP"
        DB      "C"+80H,"OS"
        DB      "S"+80H,"IN"
        DB      "T"+80H,"AN"
        DB      "A"+80H,"TN"
        DB      "P"+80H,"EEK"
        DB      "D"+80H,"EEK"
        DB      "P"+80H,"OINT"
        DB      "L"+80H,"EN"
        DB      "S"+80H,"TR$"
        DB      "V"+80H,"AL"
        DB      "A"+80H,"SC"
        DB      "C"+80H,"HR$"
        DB      "L"+80H,"EFT$"
        DB      "R"+80H,"IGHT$"
        DB      "M"+80H,"ID$"
        DB      80H             ; End of list marker

; KEYWORD ADDRESS TABLE

WORDTB: DW      PEND
        DW      FOR
        DW      NEXT
        DW      DATA
        DW      INPUT
        DW      DIM
        DW      READ
        DW      LET
        DW      GOTO
        DW      RUN
        DW      IF
        DW      RESTOR
        DW      GOSUB
        DW      RETURN
        DW      REM
        DW      STOP
        DW      POUT
        DW      ON
        DW      NULL
        DW      WAIT
        DW      DEF
        DW      POKE
        DW      DOKE
        DW      SCREEN
        DW      LINES
        DW      CLS
        DW      WIDTH
        DW      MONITR
        DW      PSET
        DW      RESET
        DW      PRINT
        DW      CONT
        DW      LIST
        DW      CLEAR
        DW      CLOAD
        DW      CSAVE
        DW      NEW

; RESERVED WORD TOKEN VALUES

ZEND    EQU     080H            ; END
ZFOR    EQU     081H            ; FOR
ZDATA   EQU     083H            ; DATA
ZGOTO   EQU     088H            ; GOTO
ZGOSUB  EQU     08CH            ; GOSUB
ZREM    EQU     08EH            ; REM
ZPRINT  EQU     09EH            ; PRINT
ZNEW    EQU     0A4H            ; NEW

ZTAB    EQU     0A5H            ; TAB
ZTO     EQU     0A6H            ; TO
ZFN     EQU     0A7H            ; FN
ZSPC    EQU     0A8H            ; SPC
ZTHEN   EQU     0A9H            ; THEN
ZNOT    EQU     0AAH            ; NOT
ZSTEP   EQU     0ABH            ; STEP

ZPLUS   EQU     0ACH            ; +
ZMINUS  EQU     0ADH            ; -
ZTIMES  EQU     0AEH            ; *
ZDIV    EQU     0AFH            ; /
ZOR     EQU     0B2H            ; OR
ZGTR    EQU     0B3H            ; >
ZEQUAL  EQU     0B4H            ; M
ZLTH    EQU     0B5H            ; <
ZSGN    EQU     0B6H            ; SGN
ZPOINT  EQU     0C7H            ; POINT
ZLEFT   EQU     0CDH            ; LEFT$

; ARITHMETIC PRECEDENCE TABLE

PRITAB: DB      79H             ; Precedence value
        DW      PADD            ; FPREG = <last> + FPREG

        DB      79H             ; Precedence value
        DW      PSUB            ; FPREG = <last> - FPREG

        DB      7CH             ; Precedence value
        DW      MULT            ; PPREG = <last> * FPREG

        DB      7CH             ; Precedence value
        DW      DIV             ; FPREG = <last> / FPREG

        DB      7FH             ; Precedence value
        DW      POWER           ; FPREG = <last> ^ FPREG

        DB      50H             ; Precedence value
        DW      PAND            ; FPREG = <last> AND FPREG

        DB      46H             ; Precedence value
        DW      POR             ; FPREG = <last> OR FPREG

; BASIC ERROR CODE LIST

ERRORS: DB      "NF"            ; NEXT without FOR
        DB      "SN"            ; Syntax error
        DB      "RG"            ; RETURN without GOSUB
        DB      "OD"            ; Out of DATA
        DB      "FC"            ; Illegal function call
        DB      "OV"            ; Overflow error
        DB      "OM"            ; Out of memory
        DB      "UL"            ; Undefined line
        DB      "BS"            ; Bad subscript
        DB      "DD"            ; Re-DIMensioned array
        DB      "/0"            ; Division by zero
        DB      "ID"            ; Illegal direct
        DB      "TM"            ; Type mis-match
        DB      "OS"            ; Out of string space
        DB      "LS"            ; String too long
        DB      "ST"            ; String formula too complex
        DB      "CN"            ; Can't CONTinue
        DB      "UF"            ; Undefined FN function
        DB      "MO"            ; Missing operand

; INITIALISATION TABLE

INITAB: JP      WARMST          ; Warm start jump
        JP      FCERR           ; "USR (X)" jump (Set to Error)

        OUT     (0),A           ; "OUT p,n" skeleton
        RET

        SUB     0               ; Division support routine
        LD      L,A
        LD      A,H
        SBC     A,0
        LD      H,A
        LD      A,B
        SBC     A,0
        LD      B,A
        LD      A,0
        RET

        DB      0,0,0                   ; Random number seed
                                        ; Table used by RND
        DB      035H,04AH,0CAH,099H     ;-2.65145E+07
        DB      039H,01CH,076H,098H     ; 1.61291E+07
        DB      022H,095H,0B3H,098H     ;-1.17691E+07
        DB      00AH,0DDH,047H,098H     ; 1.30983E+07
        DB      053H,0D1H,099H,099H     ;-2-01612E+07
        DB      00AH,01AH,09FH,098H     ;-1.04269E+07
        DB      065H,0BCH,0CDH,098H     ;-1.34831E+07
        DB      0D6H,077H,03EH,098H     ; 1.24825E+07
        DB      052H,0C7H,04FH,080H     ; Last random number

        IN      A,(0)           ; INP (x) skeleton
        RET

        DB      1               ; POS (x) number (1)
        DB      47              ; Terminal width (47)
        DB      28              ; Width for commas (3 columns)
        DB      0               ; No nulls after input bytes
        DB      0               ; Output enabled (^O off)

        DW      5               ; Initial lines counter
        DW      5               ; Initial lines number
        DW      0               ; Array load/save check sum

        DB      0               ; Break not by NMI
        DB      0               ; Break flag

        JP      TTYLIN          ; Input reflection (set to TTY)
        JP      POINTB          ; POINT reflection unused
        JP      SETB            ; SET reflection
        JP      RESETB          ; RESET reflection

        DW      STLOOK          ; Temp string space
        DW      -2              ; Current line number (cold)
        DW      PROGST+1        ; Start of program text
INITBE:                         ; END OF INITIALISATION TABLE

ERRMSG: DB      " Error",0
INMSG:  DB      " in ",0
ZERBYT  EQU     $-1             ; A zero byte
OKMSG:  DB      "Ok",CR,0,0
BRKMSG: DB      "Break",0

BAKSTK: LD      HL,4            ; Look for "FOR" block with
        ADD     HL,SP           ; same index as specified
LOKFOR: LD      A,(HL)          ; Get block ID
        INC     HL              ; Point to index address
        CP      ZFOR            ; Is it a "FOR" token
        RET     NZ              ; No - exit
        LD      C,(HL)          ; BC = Address of "FOR" index
        INC     HL
        LD      B,(HL)
        INC     HL              ; Point to sign of STEP
        PUSH    HL              ; Save pointer to sign
        LD      L,C             ; HL = address of "FOR" index
        LD      H,B
        LD      A,D             ; See if an index was specified
        OR      E               ; DE = 0 if no index specified
        EX      DE,HL           ; Specified index into HL
        JP      Z,INDFND        ; Skip if no index given
        EX      DE,HL           ; Index back into DE
        CALL    CPDEHL          ; Compare index with one given
INDFND: LD      BC,16-3         ; Offset to next block
        POP     HL              ; Restore pointer to sign
        RET     Z               ; Return if block found
        ADD     HL,BC           ; Point to next block
        JP      LOKFOR          ; Keep on looking

MOVUP:  CALL    ENFMEM          ; See if enough memory
MOVSTR: PUSH    BC              ; Save end of source
        EX      (SP),HL         ; Swap source and dest" end
        POP     BC              ; Get end of destination
MOVLP:  CALL    CPDEHL          ; See if list moved
        LD      A,(HL)          ; Get byte
        LD      (BC),A          ; Move it
        RET     Z               ; Exit if all done
        DEC     BC              ; Next byte to move to
        DEC     HL              ; Next byte to move
        JP      MOVLP           ; Loop until all bytes moved

CHKSTK: PUSH    HL              ; Save code string address
        LD      HL,(ARREND)     ; Lowest free memory
        LD      B,0             ; BC = Number of levels to test
        ADD     HL,BC           ; 2 Bytes for each level
        ADD     HL,BC
        DB      3EH             ; Skip "PUSH HL"
ENFMEM: PUSH    HL              ; Save code string address
        LD      A,LOW -48       ; 48 Bytes minimum RAM
        SUB     L
        LD      L,A
        LD      A,HIGH -48      ; 48 Bytes minimum RAM
        SBC     A,H
        JP      C,OMERR         ; Not enough - ?OM Error
        LD      H,A
        ADD     HL,SP           ; Test if stack is overflowed
        POP     HL              ; Restore code string address
        RET     C               ; Return if enough mmory
OMERR:  LD      E,OM            ; ?OM Error
        JP      ERROR

DATSNR: LD      HL,(DATLIN)     ; Get line of current DATA item
        LD      (LINEAT),HL     ; Save as current line
SNERR:  LD      E,SN            ; ?SN Error
        DB      01H             ; Skip "LD E,DZ"
DZERR:  LD      E,DZ            ; ?/0 Error
        DB      01H             ; Skip "LD E,NF"
NFERR:  LD      E,NF            ; ?NF Error
        DB      01H             ; Skip "LD E,DD"
DDERR:  LD      E,DD            ; ?DD Error
        DB      01H             ; Skip "LD E,UF"
UFERR:  LD      E,UF            ; ?UF Error
        DB      01H             ; Skip "LD E,OV
OVERR:  LD      E,OV            ; ?OV Error
        DB      01H             ; Skip "LD E,TM"
TMERR:  LD      E,TM            ; ?TM Error

ERROR:  CALL    CLREG           ; Clear registers and stack
        LD      (CTLOFG),A      ; Enable output (A is 0)
        CALL    STTLIN          ; Start new line
        LD      HL,ERRORS       ; Point to error codes
        LD      D,A             ; D = 0 (A is 0)
        LD      A,"?"
        CALL    OUTC            ; Output "?"
        ADD     HL,DE           ; Offset to correct error code
        LD      A,(HL)          ; First character
        CALL    OUTC            ; Output it
        CALL    GETCHR          ; Get next character
        CALL    OUTC            ; Output it
        LD      HL,ERRMSG       ; "Error" message
ERRIN:  CALL    PRS             ; Output message
        LD      HL,(LINEAT)     ; Get line of error
        LD      DE,-2           ; Cold start error if -2
        CALL    CPDEHL          ; See if cold start error
        JP      Z,CSTART        ; Cold start error - Restart
        LD      A,H             ; Was it a direct error?
        AND     L               ; Line = -1 if direct error
        INC     A
        CALL    NZ,LINEIN       ; No - output line of error
        DB      3EH             ; Skip "POP BC"
POPNOK: POP     BC              ; Drop address in input buffer

PRNTOK: XOR     A               ; Output "Ok" and get command
        LD      (CTLOFG),A      ; Enable output
        CALL    STTLIN          ; Start new line
        LD      HL,OKMSG        ; "Ok" message
        CALL    PRS             ; Output "Ok"
GETCMD: LD      HL,-1           ; Flag direct mode
        LD      (LINEAT),HL     ; Save as current line
        CALL    GETLIN          ; Get an input line
        JP      C,GETCMD        ; Get line again if break
        CALL    GETCHR          ; Get first character
        INC     A               ; Test if end of line
        DEC     A               ; Without affecting Carry
        JP      Z,GETCMD        ; Nothing entered - Get another
        PUSH    AF              ; Save Carry status
        CALL    ATOH            ; Get line number into DE
        PUSH    DE              ; Save line number
        CALL    CRUNCH          ; Tokenise rest of line
        LD      B,A             ; Length of tokenised line
        POP     DE              ; Restore line number
        POP     AF              ; Restore Carry
        JP      NC,EXCUTE       ; No line number - Direct mode
        PUSH    DE              ; Save line number
        PUSH    BC              ; Save length of tokenised line
        XOR     A
        LD      (LSTBIN),A      ; Clear last byte input
        CALL    GETCHR          ; Get next character
        OR      A               ; Set flags
        PUSH    AF              ; And save them
        CALL    SRCHLN          ; Search for line number in DE
        JP      C,LINFND        ; Jump if line found
        POP     AF              ; Get status
        PUSH    AF              ; And re-save
        JP      Z,ULERR         ; Nothing after number - Error
        OR      A               ; Clear Carry
LINFND: PUSH    BC              ; Save address of line in prog
        JP      NC,INEWLN       ; Line not found - Insert new
        EX      DE,HL           ; Next line address in DE
        LD      HL,(PROGND)     ; End of program
SFTPRG: LD      A,(DE)          ; Shift rest of program down
        LD      (BC),A
        INC     BC              ; Next destination
        INC     DE              ; Next source
        CALL    CPDEHL          ; All done?
        JP      NZ,SFTPRG       ; More to do
        LD      H,B             ; HL - New end of program
        LD      L,C
        LD      (PROGND),HL     ; Update end of program

INEWLN: POP     DE              ; Get address of line,
        POP     AF              ; Get status
        JP      Z,SETPTR        ; No text - Set up pointers
        LD      HL,(PROGND)     ; Get end of program
        EX      (SP),HL         ; Get length of input line
        POP     BC              ; End of program to BC
        ADD     HL,BC           ; Find new end
        PUSH    HL              ; Save new end
        CALL    MOVUP           ; Make space for line
        POP     HL              ; Restore new end
        LD      (PROGND),HL     ; Update end of program pointer
        EX      DE,HL           ; Get line to move up in HL
        LD      (HL),H          ; Save MSB
        POP     DE              ; Get new line number
        INC     HL              ; Skip pointer
        INC     HL
        LD      (HL),E          ; Save LSB of line number
        INC     HL
        LD      (HL),D          ; Save MSB of line number
        INC     HL              ; To first byte in line
        LD      DE,BUFFER       ; Copy buffer to program
MOVBUF: LD      A,(DE)          ; Get source
        LD      (HL),A          ; Save destinations
        INC     HL              ; Next source
        INC     DE              ; Next destination
        OR      A               ; Done?
        JP      NZ,MOVBUF       ; No - Repeat
SETPTR: CALL    RUNFST          ; Set line pointers
        INC     HL              ; To LSB of pointer
        EX      DE,HL           ; Address to DE
PTRLP:  LD      H,D             ; Address to HL
        LD      L,E
        LD      A,(HL)          ; Get LSB of pointer
        INC     HL              ; To MSB of pointer
        OR      (HL)            ; Compare with MSB pointer
        JP      Z,GETCMD        ; Get command line if end
        INC     HL              ; To LSB of line number
        INC     HL              ; Skip line number
        INC     HL              ; Point to first byte in line
        XOR     A               ; Looking for 00 byte
FNDEND: CP      (HL)            ; Found end of line?
        INC     HL              ; Move to next byte
        JP      NZ,FNDEND       ; No - Keep looking
        EX      DE,HL           ; Next line address to HL
        LD      (HL),E          ; Save LSB of pointer
        INC     HL
        LD      (HL),D          ; Save MSB of pointer
        JP      PTRLP           ; Do next line

SRCHLN: LD      HL,(BASTXT)     ; Start of program text
SRCHLP: LD      B,H             ; BC = Address to look at
        LD      C,L
        LD      A,(HL)          ; Get address of next line
        INC     HL
        OR      (HL)            ; End of program found?
        DEC     HL
        RET     Z               ; Yes - Line not found
        INC     HL
        INC     HL
        LD      A,(HL)          ; Get LSB of line number
        INC     HL
        LD      H,(HL)          ; Get MSB of line number
        LD      L,A
        CALL    CPDEHL          ; Compare with line in DE
        LD      H,B             ; HL = Start of this line
        LD      L,C
        LD      A,(HL)          ; Get LSB of next line address
        INC     HL
        LD      H,(HL)          ; Get MSB of next line address
        LD      L,A             ; Next line to HL
        CCF
        RET     Z               ; Lines found - Exit
        CCF
        RET     NC              ; Line not found,at line after
        JP      SRCHLP          ; Keep looking

NEW:    RET     NZ              ; Return if any more on line
CLRPTR: LD      HL,(BASTXT)     ; Point to start of program
        XOR     A               ; Set program area to empty
        LD      (HL),A          ; Save LSB = 00
        INC     HL
        LD      (HL),A          ; Save MSB = 00
        INC     HL
        LD      (PROGND),HL     ; Set program end

RUNFST: LD      HL,(BASTXT)     ; Clear all variables
        DEC     HL

INTVAR: LD      (BRKLIN),HL     ; Initialise RUN variables
        LD      HL,(LSTRAM)     ; Get end of RAM
        LD      (STRBOT),HL     ; Clear string space
        XOR     A
        CALL    RESTOR          ; Reset DATA pointers
        LD      HL,(PROGND)     ; Get end of program
        LD      (VAREND),HL     ; Clear variables
        LD      (ARREND),HL     ; Clear arrays

CLREG:  POP     BC              ; Save return address
        LD      HL,(STRSPC)     ; Get end of working RAN
        LD      SP,HL           ; Set stack
        LD      HL,TMSTPL       ; Temporary string pool
        LD      (TMSTPT),HL     ; Reset temporary string ptr
        XOR     A               ; A = 00
        LD      L,A             ; HL = 0000
        LD      H,A
        LD      (CONTAD),HL     ; No CONTinue
        LD      (FORFLG),A      ; Clear FOR flag
        LD      (FNRGNM),HL     ; Clear FN argument
        PUSH    HL              ; HL = 0000
        PUSH    BC              ; Put back return
DOAGN:  LD      HL,(BRKLIN)     ; Get address of code to RUN
        RET                     ; Return to execution driver

PROMPT: LD      A,"?"           ; "?"
        CALL    OUTC            ; Output character
        LD      A," "           ; Space
        CALL    OUTC            ; Output character
        JP      RINPUT          ; Get input line

CRUNCH: XOR     A               ; Tokenise line @ HL to BUFFER
        LD      (DATFLG),A      ; Reset literal flag
        LD      C,2+3           ; 2 byte number and 3 nulls
        LD      DE,BUFFER       ; Start of input buffer
CRNCLP: LD      A,(HL)          ; Get byte
        CP      " "             ; Is it a space?
        JP      Z,MOVDIR        ; Yes - Copy direct
        LD      B,A             ; Save character
        CP      '"'             ; Is it a quote?
        JP      Z,CPYLIT        ; Yes - Copy literal string
        OR      A               ; Is it end of buffer?
        JP      Z,ENDBUF        ; Yes - End buffer
        LD      A,(DATFLG)      ; Get data type
        OR      A               ; Literal?
        LD      A,(HL)          ; Get byte to copy
        JP      NZ,MOVDIR       ; Literal - Copy direct
        CP      "?"             ; Is it "?" short for PRINT
        LD      A,ZPRINT        ; "PRINT" token
        JP      Z,MOVDIR        ; Yes - replace it
        LD      A,(HL)          ; Get byte again
        CP      "0"             ; Is it less than "0"
        JP      C,FNDWRD        ; Yes - Look for reserved words
        CP      ";"+1           ; Is it "0123456789:;" ?
        JP      C,MOVDIR        ; Yes - copy it direct
FNDWRD: PUSH    DE              ; Look for reserved words
        LD      DE,WORDS-1      ; Point to table
        PUSH    BC              ; Save count
        LD      BC,RETNAD       ; Where to return to
        PUSH    BC              ; Save return address
        LD      B,ZEND-1        ; First token value -1
        LD      A,(HL)          ; Get byte
        CP      "a"             ; Less than "a" ?
        JP      C,SEARCH        ; Yes - search for words
        CP      "z"+1           ; Greater than "z" ?
        JP      NC,SEARCH       ; Yes - search for words
        AND     01011111B       ; Force upper case
        LD      (HL),A          ; Replace byte
SEARCH: LD      C,(HL)          ; Search for a word
        EX      DE,HL
GETNXT: INC     HL              ; Get next reserved word
        OR      (HL)            ; Start of word?
        JP      P,GETNXT        ; No - move on
        INC     B               ; Increment token value
        LD      A, (HL)         ; Get byte from table
        AND     01111111B       ; Strip bit 7
        RET     Z               ; Return if end of list
        CP      C               ; Same character as in buffer?
        JP      NZ,GETNXT       ; No - get next word
        EX      DE,HL
        PUSH    HL              ; Save start of word

NXTBYT: INC     DE              ; Look through rest of word
        LD      A,(DE)          ; Get byte from table
        OR      A               ; End of word ?
        JP      M,MATCH         ; Yes - Match found
        LD      C,A             ; Save it
        LD      A,B             ; Get token value
        CP      ZGOTO           ; Is it "GOTO" token ?
        JP      NZ,NOSPC        ; No - Don't allow spaces
        CALL    GETCHR          ; Get next character
        DEC     HL              ; Cancel increment from GETCHR
NOSPC:  INC     HL              ; Next byte
        LD      A,(HL)          ; Get byte
        CP      "a"             ; Less than "a" ?
        JP      C,NOCHNG        ; Yes - don't change
        AND     01011111B       ; Make upper case
NOCHNG: CP      C               ; Same as in buffer ?
        JP      Z,NXTBYT        ; Yes - keep testing
        POP     HL              ; Get back start of word
        JP      SEARCH          ; Look at next word

MATCH:  LD      C,B             ; Word found - Save token value
        POP     AF              ; Throw away return
        EX      DE,HL
        RET                     ; Return to "RETNAD"
RETNAD: EX      DE,HL           ; Get address in string
        LD      A,C             ; Get token value
        POP     BC              ; Restore buffer length
        POP     DE              ; Get destination address
MOVDIR: INC     HL              ; Next source in buffer
        LD      (DE),A          ; Put byte in buffer
        INC     DE              ; Move up buffer
        INC     C               ; Increment length of buffer
        SUB     ":"             ; End of statement?
        JP      Z,SETLIT        ; Jump if multi-statement line
        CP      ZDATA-3AH       ; Is it DATA statement ?
        JP      NZ,TSTREM       ; No - see if REM
SETLIT: LD      (DATFLG),A      ; Set literal flag
TSTREM: SUB     ZREM-3AH        ; Is it REM?
        JP      NZ,CRNCLP       ; No - Leave flag
        LD      B,A             ; Copy rest of buffer
NXTCHR: LD      A,(HL)          ; Get byte
        OR      A               ; End of line ?
        JP      Z,ENDBUF        ; Yes - Terminate buffer
        CP      B               ; End of statement ?
        JP      Z,MOVDIR        ; Yes - Get next one
CPYLIT: INC     HL              ; Move up source string
        LD      (DE),A          ; Save in destination
        INC     C               ; Increment length
        INC     DE              ; Move up destination
        JP      NXTCHR          ; Repeat

ENDBUF: LD      HL,BUFFER-1     ; Point to start of buffer
        LD      (DE),A          ; Mark end of buffer (A = 00)
        INC     DE
        LD      (DE),A          ; A = 00
        INC     DE
        LD      (DE),A          ; A = 00
        RET

DODEL:  LD      A,(NULFLG)      ; Get null flag status
        OR      A               ; Is it zero?
        LD      A,0             ; Zero A - Leave flags
        LD      (NULFLG),A      ; Zero null flag
        JP      NZ,ECHDEL       ; Set - Echo it
        DEC     B               ; Decrement length
        JP      Z,GETLIN        ; Get line again if empty
        CALL    OUTC            ; Output null character
        DB      3EH             ; Skip "DEC B"
ECHDEL: DEC     B               ; Count bytes in buffer
        DEC     HL              ; Back space buffer
        JP      Z,OTKLN         ; No buffer - Try again
        LD      A,(HL)          ; Get deleted byte
        CALL    OUTC            ; Echo it
        JP      MORINP          ; Get more input

DELCHR: DEC     B               ; Count bytes in buffer
        DEC     HL              ; Back space buffer
        CALL    OUTC            ; Output character in A
        JP      NZ,MORINP       ; Not end - Get more
OTKLN:  CALL    OUTC            ; Output character in A
KILIN:  CALL    PRNTCR          ; Output CRLF
        JP      TTYLIN          ; Get line again

GETLIN: CALL    MONTST          ; Is it NAS-SYS?
        JP      Z,TTYLIN        ; No - Character input
        LD      HL,(CIN)        ; Point to NAS-SYS input table
        LD      A,(HL)          ; Get input mode
        CP      74H             ; Is it "X" mode?
        JP      Z,TTYLIN        ; Yes - Teletype line input
        CALL    INLINE          ; Get a line from NAS-SYS
        JP      DONULL          ; POS(X)=0 and do nulls

TTYLIN: LD      HL,BUFFER       ; Get a line by character
        LD      B,1             ; Set buffer as empty
        XOR     A
        LD      (NULFLG),A      ; Clear null flag
MORINP: CALL    CLOTST          ; Get character and test ^O
        LD      C,A             ; Save character in C
        CP      DEL             ; Delete character?
        JP      Z,DODEL         ; Yes - Process it
        LD      A,(NULFLG)      ; Get null flag
        OR      A               ; Test null flag status
        JP      Z,PROCES        ; Reset - Process character
        LD      A,0             ; Set a null
        CALL    OUTC            ; Output null
        XOR     A               ; Clear A
        LD      (NULFLG),A      ; Reset null flag
PROCES: LD      A,C             ; Get character
        CP      CTRLG           ; Bell?
        JP      Z,PUTCTL        ; Yes - Save it
        CP      CTRLC           ; Is it control "C"?
        CALL    Z,PRNTCR        ; Yes - Output CRLF
        SCF                     ; Flag break
        RET     Z               ; Return if control "C"
        CP      CR              ; Is it enter?
        JP      Z,ENDINP        ; Yes - Terminate input
        CP      CTRLU           ; Is it control "U"?
        JP      Z,KILIN         ; Yes - Get another line
        CP      "@"             ; Is it "kill line"?
        JP      Z,OTKLN         ; Yes - Kill line
        CP      "_"             ; Is it delete?
        JP      Z,DELCHR        ; Yes - Delete character
        CP      BKSP            ; Is it backspace?
        JP      Z,DELCHR        ; Yes - Delete character
        CP      CTRLR           ; Is it control "R"?
        JP      NZ,PUTBUF       ; No - Put in buffer
        PUSH    BC              ; Save buffer length
        PUSH    DE              ; Save DE
        PUSH    HL              ; Save buffer address
        LD      (HL),0          ; Mark end of buffer
        CALL    OUTNCR          ; Output and do CRLF
        LD      HL,BUFFER       ; Point to buffer start
        CALL    PRS             ; Output buffer
        POP     HL              ; Restore buffer address
        POP     DE              ; Restore DE
        POP     BC              ; Restore buffer length
        JP      MORINP          ; Get another character

PUTBUF: CP      " "             ; Is it a control code?
        JP      C,MORINP        ; Yes - Ignore
PUTCTL: LD      A,B             ; Get number of bytes in buffer
        CP      72+1            ; Test for line overflow
        LD      A,CTRLG         ; Set a bell
        JP      NC,OUTNBS       ; Ring bell if buffer full
        LD      A,C             ; Get character
        LD      (HL),C          ; Save in buffer
        LD      (LSTBIN),A      ; Save last input byte
        INC     HL              ; Move up buffer
        INC     B               ; Increment length
OUTIT:  CALL    OUTC            ; Output the character entered
        JP      MORINP          ; Get another character

OUTNBS: CALL    OUTC            ; Output bell and back over it
        LD      A,BKSP          ; Set back space
        JP      OUTIT           ; Output it and get more

CPDEHL: LD      A,H             ; Get H
        SUB     D               ; Compare with D
        RET     NZ              ; Different - Exit
        LD      A,L             ; Get L
        SUB     E               ; Compare with E
        RET                     ; Return status

CHKSYN: LD      A,(HL)          ; Check syntax of character
        EX      (SP),HL         ; Address of test byte
        CP      (HL)            ; Same as in code string?
        INC     HL              ; Return address
        EX      (SP),HL         ; Put it back
        JP      Z,GETCHR        ; Yes - Get next character
        JP      SNERR           ; Different - ?SN Error

OUTC:   PUSH    AF              ; Save character
        LD      A,(CTLOFG)      ; Get control "O" flag
        OR      A               ; Is it set?
        JP      NZ,POPAF        ; Yes - don't output
        POP     AF              ; Restore character
        PUSH    BC              ; Save buffer length
        PUSH    AF              ; Save character
        CP      " "             ; Is it a control code?
        JP      C,DINPOS        ; Yes - Don't INC POS(X)
        LD      A,(LWIDTH)      ; Get line width
        LD      B,A             ; To B
        LD      A,(CURPOS)      ; Get cursor position
        INC     B               ; Width 255?
        JP      Z,INCLEN        ; Yes - No width limit
        DEC     B               ; Restore width
        CP      B               ; At end of line?
        CALL    Z,PRNTCR        ; Yes - output CRLF
INCLEN: INC     A               ; Move on one character
        LD      (CURPOS),A      ; Save new position
DINPOS: POP     AF              ; Restore character
        POP     BC              ; Restore buffer length
        PUSH    AF              ; << This sequence >>
        POP     AF              ; << is not needed >>
        PUSH    AF              ; Save character
        PUSH    BC              ; Save buffer length
        LD      C,A             ; Character to C
        CALL    CONMON          ; Send it
        POP     BC              ; Restore buffer length
        POP     AF              ; Restore character
        RET

CLOTST: CALL    GETINP          ; Get input character
        AND     01111111B       ; Strip bit 7
        CP      CTRLO           ; Is it control "O"?
        RET     NZ              ; No don't flip flag
        LD      A,(CTLOFG)      ; Get flag
        CPL                     ; Flip it
        LD      (CTLOFG),A      ; Put it back
        XOR     A               ; Null character
        RET

LIST:   CALL    ATOH            ; ASCII number to DE
        RET     NZ              ; Return if anything extra
        POP     BC              ; Rubbish - Not needed
        CALL    SRCHLN          ; Search for line number in DE
        PUSH    BC              ; Save address of line
        CALL    SETLIN          ; Set up lines counter
LISTLP: POP     HL              ; Restore address of line
        LD      C,(HL)          ; Get LSB of next line
        INC     HL
        LD      B,(HL)          ; Get MSB of next line
        INC     HL
        LD      A,B             ; BC = 0 (End of program)?
        OR      C
        JP      Z,PRNTOK        ; Yes - Go to command mode
        CALL    COUNT           ; Count lines
        CALL    TSTBRK          ; Test for break key
        PUSH    BC              ; Save address of next line
        CALL    PRNTCR          ; Output CRLF
        LD      E,(HL)          ; Get LSB of line number
        INC     HL
        LD      D,(HL)          ; Get MSB of line number
        INC     HL
        PUSH    HL              ; Save address of line start
        EX      DE,HL           ; Line number to HL
        CALL    PRNTHL          ; Output line number in decimal
        LD      A," "           ; Space after line number
        POP     HL              ; Restore start of line address
LSTLP2: CALL    OUTC            ; Output character in A
LSTLP3: LD      A,(HL)          ; Get next byte in line
        OR      A               ; End of line?
        INC     HL              ; To next byte in line
        JP      Z,LISTLP        ; Yes - get next line
        JP      P,LSTLP2        ; No token - output it
        SUB     ZEND-1          ; Find and output word
        LD      C,A             ; Token offset+1 to C
        LD      DE,WORDS        ; Reserved word list
FNDTOK: LD      A,(DE)          ; Get character in list
        INC     DE              ; Move on to next
        OR      A               ; Is it start of word?
        JP      P,FNDTOK        ; No - Keep looking for word
        DEC     C               ; Count words
        JP      NZ,FNDTOK       ; Not there - keep looking
OUTWRD: AND     01111111B       ; Strip bit 7
        CALL    OUTC            ; Output first character
        LD      A,(DE)          ; Get next character
        INC     DE              ; Move on to next
        OR      A               ; Is it end of word?
        JP      P,OUTWRD        ; No - output the rest
        JP      LSTLP3          ; Next byte in line

SETLIN: PUSH    HL              ; Set up LINES counter
        LD      HL,(LINESN)     ; Get LINES number
        LD      (LINESC),HL     ; Save in LINES counter
        POP     HL
        RET

LDNMI1: LD      HL,BREAK        ; Break routine
        LD      (NMI),HL        ; NMI forces break
        JP      PRNTOK          ; Go to command mode

        DB      0FEH            ; <<< NO REFERENCE TO HERE >>>

COUNT:  PUSH    HL              ; Save code string address
        PUSH    DE
        LD      HL,(LINESC)     ; Get LINES counter
        LD      DE,-1
        ADC     HL,DE           ; Decrement
        LD      (LINESC),HL     ; Put it back
        POP     DE
        POP     HL              ; Restore code string address
        RET     P               ; Return if more lines to go
        PUSH    HL              ; Save code string address
        LD      HL,(LINESN)     ; Get LINES number
        LD      (LINESC),HL     ; Reset LINES counter
        LD      A,(NMIFLG)      ; Break by NMI?
        OR      A
        JP      NZ,ARETN        ; Yes - "RETN"
        CALL    GETINP          ; Get input character
        CP      CTRLC           ; Is it control "C"?
        JP      Z,RSLNBK        ; Yes - Reset LINES an break
        POP     HL              ; Restore code string address
        JP      COUNT           ; Keep on counting

RSLNBK: LD      HL,(LINESN)     ; Get LINES number
        LD      (LINESC),HL     ; Reset LINES counter
        JP      BRKRET          ; Go and output "Break"

FOR:    LD      A,64H           ; Flag "FOR" assignment
        LD      (FORFLG),A      ; Save "FOR" flag
        CALL    LET             ; Set up initial index
        POP     BC              ; Drop RETurn address
        PUSH    HL              ; Save code string address
        CALL    DATA            ; Get next statement address
        LD      (LOOPST),HL     ; Save it for start of lo6p
        LD      HL,2            ; Offset for "FOR" block
        ADD     HL,SP           ; Point to it
FORSLP: CALL    LOKFOR          ; Look for existing "FOR" block
        POP     DE              ; Get code string address
        JP      NZ,FORFND       ; No nesting found
        ADD     HL,BC           ; Move into "FOR" block
        PUSH    DE              ; Save code string address
        DEC     HL
        LD      D,(HL)          ; Get MSB of loop statement
        DEC     HL
        LD      E,(HL)          ; Get LSB of loop statement
        INC     HL
        INC     HL
        PUSH    HL              ; Save block address
        LD      HL,(LOOPST)     ; Get address of loop statement
        CALL    CPDEHL          ; Compare the FOR loops
        POP     HL              ; Restore block address
        JP      NZ,FORSLP       ; Different FORs - Find another
        POP     DE              ; Restore code string address
        LD      SP,HL           ; Remove all nested loops

FORFND: EX      DE,HL           ; Code string address to HL
        LD      C,8
        CALL    CHKSTK          ; Check for 8 levels of stack
        PUSH    HL              ; Save code string address
        LD      HL,(LOOPST)     ; Get first statement of loop
        EX      (SP),HL         ; Save and restore code string
        PUSH    HL              ; Re-save code string address
        LD      HL,(LINEAT)     ; Get current line number
        EX      (SP),HL         ; Save and restore code string
        CALL    TSTNUM          ; Make sure it's a number
        CALL    CHKSYN          ; Make sure "TO" is next
        DB      ZTO             ; "TO" token
        CALL    GETNUM          ; Get "TO" expression value
        PUSH    HL              ; Save code string address
        CALL    BCDEFP          ; Move "TO" value to BCDE
        POP     HL              ; Restore code string address
        PUSH    BC              ; Save "TO" value in block
        PUSH    DE
        LD      BC,8100H        ; BCDE - 1 (default STEP)
        LD      D,C             ; C=0
        LD      E,D             ; D=0
        LD      A,(HL)          ; Get next byte in code string
        CP      ZSTEP           ; See if "STEP" is stated
        LD      A,1             ; Sign of step = 1
        JP      NZ,SAVSTP       ; No STEP given - Default to 1
        CALL    GETCHR          ; Jump over "STEP" token
        CALL    GETNUM          ; Get step value
        PUSH    HL              ; Save code string address
        CALL    BCDEFP          ; Move STEP to BCDE
        CALL    TSTSGN          ; Test sign of FPREG
        POP     HL              ; Restore code string address
SAVSTP: PUSH    BC              ; Save the STEP value in block
        PUSH    DE
        PUSH    AF              ; Save sign of STEP
        INC     SP              ; Don't save flags
        PUSH    HL              ; Save code string address
        LD      HL,(BRKLIN)     ; Get address of index variable
        EX      (SP),HL         ; Save and restore code string
PUTFID: LD      B,ZFOR          ; "FOR" block marker
        PUSH    BC              ; Save it
        INC     SP              ; Don't save C

RUNCNT: CALL    CHKBRK          ; Execution driver - Test break
        OR      A               ; Break key hit?
        CALL    NZ,STALL        ; Yes - Pause for a key
        LD      (BRKLIN),HL     ; Save code address for break
        LD      A,(HL)          ; Get next byte in code string
        CP      ":"             ; Multi statement line?
        JP      Z,EXCUTE        ; Yes - Execute it
        OR      A               ; End of line?
        JP      NZ,SNERR        ; No - Syntax error
        INC     HL              ; Point to address of next line
        LD      A,(HL)          ; Get LSB of line pointer
        INC     HL
        OR      (HL)            ; Is it zero (End of prog)?
        JP      Z,ENDPRG        ; Yes - Terminate execution
        INC     HL              ; Point to line number
        LD      E,(HL)          ; Get LSB of line number
        INC     HL
        LD      D,(HL)          ; Get MSB of line number
        EX      DE,HL           ; Line number to HL
        LD      (LINEAT),HL     ; Save as current line number
        EX      DE,HL           ; Line number back to DE
EXCUTE: CALL    GETCHR          ; Get key word
        LD      DE,RUNCNT       ; Where to RETurn to
        PUSH    DE              ; Save for RETurn
IFJMP:  RET     Z               ; Go to RUNCNT if end of STMT
ONJMP:  SUB     ZEND            ; Is it a token?
        JP      C,LET           ; No - try to assign it
        CP      ZNEW+1-ZEND     ; END to NEW ?
        JP      NC,SNERR        ; Not a key word - ?SN Error
        RLCA                    ; Double it
        LD      C,A             ; BC = Offset into table
        LD      B,0
        EX      DE,HL           ; Save code string address
        LD      HL,WORDTB       ; Keyword address table
        ADD     HL,BC           ; Point to routine address
        LD      C,(HL)          ; Get LSB of routine address
        INC     HL
        LD      B,(HL)          ; Get MSB of routine address
        PUSH    BC              ; Save routine address
        EX      DE,HL           ; Restore code string address

GETCHR: INC     HL              ; Point to next character
        LD      A,(HL)          ; Get next code string byte
        CP      ":"             ; Z if ":"
        RET     NC              ; NC if > "9"
        CP      " "
        JP      Z,GETCHR        ; Skip over spaces
        CP      "0"
        CCF                     ; NC if < "0"
        INC     A               ; Test for zero - Leave carry
        DEC     A               ; Z if Null
        RET

RESTOR: EX      DE,HL           ; Save code string address
        LD      HL,(BASTXT)     ; Point to start of program
        JP      Z,RESTNL        ; Just RESTORE - reset pointer
        EX      DE,HL           ; Restore code string address
        CALL    ATOH            ; Get line number to DE
        PUSH    HL              ; Save code string address
        CALL    SRCHLN          ; Search for line number in DE
        LD      H,B             ; HL = Address of line
        LD      L,C
        POP     DE              ; Restore code string address
        JP      NC,ULERR        ; ?UL Error if not found
RESTNL: DEC     HL              ; Byte before DATA statement
UPDATA: LD      (NXTDAT),HL     ; Update DATA pointer
        EX      DE,HL           ; Restore code string address
        RET

TSTBRK: CALL    CHKBRK          ; Test for interrupts
        OR      A
        RET     Z               ; Return if no key pressed
STALL:  CALL    CLOTST          ; Get input and test for ^O
        CP      CTRLS           ; Is it control "S"
        CALL    Z,CLOTST        ; Yes - Get another character
        CP      CTRLC           ; Return if not control "C"
STOP:   RET     NZ              ; Exit if anything else
        DB      0F6H            ; Flag "STOP"
PEND:   RET     NZ              ; Exit if anything else
        LD      (BRKLIN),HL     ; Save point of break
        DB      21H             ; Skip "OR 11111111B"
INPBRK: OR      11111111B       ; Flag "Break" wanted
        POP     BC              ; Return not needed and more
ENDPRG: LD      HL,(LINEAT)     ; Get current line number
        PUSH    AF              ; Save STOP / END status
        LD      A,L             ; Is it direct break?
        AND     H
        INC     A               ; Line is -1 if direct break
        JP      Z,NOLIN         ; Yes - No line number
        LD      (ERRLIN),HL     ; Save line of break
        LD      HL,(BRKLIN)     ; Get point of break
        LD      (CONTAD),HL     ; Save point to CONTinue
NOLIN:  XOR     A
        LD      (CTLOFG),A      ; Enable output
        CALL    STTLIN          ; Start a new line
        POP     AF              ; Restore STOP / END status
        LD      HL,BRKMSG       ; "Break" message
        JP      NZ,ERRIN        ; "in line" wanted?
        JP      PRNTOK          ; Go to command mode

CONT:   LD      HL,(CONTAD)     ; Get CONTinue address
        LD      A,H             ; Is it zero?
        OR      L
        LD      E,CN            ; ?CN Error
        JP      Z,ERROR         ; Yes - output "?CN Error"
        EX      DE,HL           ; Save code string address
        LD      HL,(ERRLIN)     ; Get line of last break
        LD      (LINEAT),HL     ; Set up current line number
        EX      DE,HL           ; Restore code string address
        RET                     ; CONTinue where left off

NULL:   CALL    GETINT          ; Get integer 0-255
        RET     NZ              ; Return if bad value
        LD      (NULLS),A       ; Set nulls number
        RET

ARRLD1: LD      B,-1            ; Flag array load
ARRSV1: CALL    GETCHR          ; Skip "*"
        LD      A,B             ; CLOAD* or CSAVE*
        LD      (BRKLIN),A      ; Save it
        LD      A,1             ; It's an array
        LD      (FORFLG),A      ; Flag array name
        CALL    GETVAR          ; Get address of array name
        PUSH    HL              ; Save code string address
        LD      (FORFLG),A      ; Clear flag
        LD      H,B             ; Address of array to HL
        LD      L,C
        DEC     BC              ; Back space
        DEC     BC              ;  to point
        DEC     BC              ;  to the
        DEC     BC              ; array name
        LD      A,(BRKLIN)      ; CLOAD* or CSAVE* ?
        OR      A
        PUSH    AF              ; Save CLOAD* / CSAVE* status
        EX      DE,HL           ; Array data length
        ADD     HL,DE           ; End of data
        EX      DE,HL           ; To DE
        LD      C,(HL)          ; Get dimension bytes
        LD      B,0
        ADD     HL,BC           ; 2 Bytes each dimension
        ADD     HL,BC
        INC     HL              ; Over number of dimensions
        PUSH    HL              ; Address of array data
        PUSH    DE              ; End of array data
        PUSH    BC              ; Number of dimensions
        LD      A,(BRKLIN)      ; CLOAD* or CSAVE* ?
        CP      -1
        CALL    Z,CASFF         ; CLOAD* - Cassette on
        LD      A,(BRKLIN)      ; CLOAD* or CSAVE* ?
        CP      -1
        CALL    NZ,CASFFW       ; CSAVE* - Cassette on and wait
        NOP
        NOP
        NOP
        LD      HL,0
        LD      (CHKSUM),HL     ; Zero check sum
        POP     BC              ; Number of dimensions
        POP     DE              ; End of array data
        POP     HL              ; Address of array data
        LD      B,11010010B     ; Header byte
        JP      JPLDSV          ; CSAVE-SNDHDR , CLOAD-GETHDR

SNDHDR: LD      A,B             ; Get header byte
        CALL    WUART2          ; Send 2 bytes to UART
        CALL    WUART2          ; Send 2 bytes to UART
        JP      SNDARY          ; Send array data

GETHDR: LD      C,4             ; 4 Bytes to check
HDRLP:  CALL    RUART           ; Read byte from UART
        CP      B               ; Same as header?
        JP      NZ,GETHDR       ; No - Wait for another
        DEC     C               ; Count bytes
        JP      NZ,HDRLP        ; More needed
SNDARY: CALL    TSTNUM          ; Check it's a numerical array
ARYLP:  CALL    CPDEHL          ; All array data done
        JP      Z,SUMOFF        ; Yes - Do check sum
        POP     AF              ; CLOAD* or CSAVE* ?
        PUSH    AF              ; Re-save flags
        LD      A,(HL)          ; Get byte
        CALL    P,WUART         ; CSAVE* - Write byte
        CALL    M,RUART         ; CLOAD* - Read byte
        LD      (HL),A          ; Save byte in case of CLOAD*
        CALL    ACCSUM          ; Accumulate check sum
        INC     HL              ; Next byte
        JP      ARYLP           ; Repeat

SUMOFF: CALL    DOSUM           ; Do check sum
        CALL    CASFF           ; Cassette off
        POP     AF              ; Not needed any more
        POP     HL              ; Restore code string address
        RET

ACCSUM: PUSH    HL              ; Save address in array
        LD      HL,(CHKSUM)     ; Get check sum
        LD      B,0             ; BC - Value of byte
        LD      C,A
        ADD     HL,BC           ; Add byte to check sum
        LD      (CHKSUM),HL     ; Re-save check sum
        POP     HL              ; Restore address in array
        RET

DOSUM:  LD      A,(BRKLIN)      ; CLOAD* or CSAVE* ?
        OR      A
        JP      M,CHSUMS        ; CLOAD* - Check if sums match
        LD      A,(CHKSUM)      ; Get LSB of check sum
        CALL    WUART           ; Write to UART
        LD      A,(CHKSUM+1)    ; Get MSB of check sum
        JP      WUART           ; Write to UART and return

CHSUMS: CALL    RUART           ; Read LSB of check sum
        PUSH    AF              ; Save it
        CALL    RUART           ; Read MSB of check sum
        POP     BC              ; LSB to B
        LD      E,B             ; LSB to E
        LD      D,A             ; MSB to D
        LD      HL,(CHKSUM)     ; Get accumulated check sum
        CALL    CPDEHL          ; Are they the same?
        RET     Z               ; Yes - End CLOAD*
        CALL    CASFF           ; Cassette off
        JP      OUTBAD          ; Different - Output "Bad"

CHKLTR: LD      A,(HL)          ; Get byte
        CP      "A"             ; < "A" ?
        RET     C               ; Carry set if not letter
        CP      "Z"+1           ; > "Z" ?
        CCF
        RET                     ; Carry set if not letter

FPSINT: CALL    GETCHR          ; Get next character
POSINT: CALL    GETNUM          ; Get integer 0 to 32767
DEPINT: CALL    TSTSGN          ; Test sign of FPREG
        JP      M,FCERR         ; Negative - ?FC Error
DEINT:  LD      A,(FPEXP)       ; Get integer value to DE
        CP      80H+16          ; Exponent in range (16 bits)?
        JP      C,FPINT         ; Yes - convert it
        LD      BC,9080H        ; BCDE = -32768
        LD      DE,0000
        PUSH    HL              ; Save code string address
        CALL    CMPNUM          ; Compare FPREG with BCDE
        POP     HL              ; Restore code string address
        LD      D,C             ; MSB to D
        RET     Z               ; Return if in range
FCERR:  LD      E,FC            ; ?FC Error
        JP      ERROR           ; Output error-

ATOH:   DEC     HL              ; ASCII number to DE binary
GETLN:  LD      DE,0            ; Get number to DE
GTLNLP: CALL    GETCHR          ; Get next character
        RET     NC              ; Exit if not a digit
        PUSH    HL              ; Save code string address
        PUSH    AF              ; Save digit
        LD      HL,65529/10     ; Largest number 65529
        CALL    CPDEHL          ; Number in range?
        JP      C,SNERR         ; No - ?SN Error
        LD      H,D             ; HL = Number
        LD      L,E
        ADD     HL,DE           ; Times 2
        ADD     HL,HL           ; Times 4
        ADD     HL,DE           ; Times 5
        ADD     HL,HL           ; Times 10
        POP     AF              ; Restore digit
        SUB     "0"             ; Make it 0 to 9
        LD      E,A             ; DE = Value of digit
        LD      D,0
        ADD     HL,DE           ; Add to number
        EX      DE,HL           ; Number to DE
        POP     HL              ; Restore code string address
        JP      GTLNLP          ; Go to next character

CLEAR:  JP      Z,INTVAR        ; Just "CLEAR" Keep parameters
        CALL    POSINT          ; Get integer 0 to 32767 to DE
        DEC     HL              ; Cancel increment
        CALL    GETCHR          ; Get next character
        PUSH    HL              ; Save code string address
        LD      HL,(LSTRAM)     ; Get end of RAM
        JP      Z,STORED        ; No value given - Use stored
        POP     HL              ; Restore code string address
        CALL    CHKSYN          ; Check for comma
        DB      ","
        PUSH    DE              ; Save number
        CALL    POSINT          ; Get integer 0 to 32767
        DEC     HL              ; Cancel increment
        CALL    GETCHR          ; Get next character
        JP      NZ,SNERR        ; ?SN Error if more on line
        EX      (SP),HL         ; Save code string address
        EX      DE,HL           ; Number to DE
STORED: LD      A,L             ; Get LSB of new RAM top
        SUB     E               ; Subtract LSB of string space
        LD      E,A             ; Save LSB
        LD      A,H             ; Get MSB of new RAM top
        SBC     A,D             ; Subtract MSB of string space
        LD      D,A             ; Save MSB
        JP      C,OMERR         ; ?OM Error if not enough mem
        PUSH    HL              ; Save RAM top
        LD      HL,(PROGND)     ; Get program end
        LD      BC,40           ; 40 Bytes minimum working RAM
        ADD     HL,BC           ; Get lowest address
        CALL    CPDEHL          ; Enough memory?
        JP      NC,OMERR        ; No - ?OM Error
        EX      DE,HL           ; RAM top to HL
        LD      (STRSPC),HL     ; Set new string space
        POP     HL              ; End of memory to use
        LD      (LSTRAM),HL     ; Set new top of RAM
        POP     HL              ; Restore code string address
        JP      INTVAR          ; Initialise variables

RUN:    JP      Z,RUNFST        ; RUN from start if just RUN
        CALL    INTVAR          ; Initialise variables
        LD      BC,RUNCNT       ; Execution driver loop
        JP      RUNLIN          ; RUN from line number

GOSUB:  LD      C,3             ; 3 Levels of stack needed
        CALL    CHKSTK          ; Check for 3 levels of stack
        POP     BC              ; Get return address
        PUSH    HL              ; Save code string for RETURN
        PUSH    HL              ; And for GOSUB routine
        LD      HL,(LINEAT)     ; Get current line
        EX      (SP),HL         ; Into stack - Code string out
        LD      A,ZGOSUB        ; "GOSUB" token
        PUSH    AF              ; Save token
        INC     SP              ; Don't save flags

RUNLIN: PUSH    BC              ; Save return address
GOTO:   CALL    ATOH            ; ASCII number to DE binary
        CALL    REM             ; Get end of line
        PUSH    HL              ; Save end of line
        LD      HL,(LINEAT)     ; Get current line
        CALL    CPDEHL          ; Line after current?
        POP     HL              ; Restore end of line
        INC     HL              ; Start of next line
        CALL    C,SRCHLP        ; Line is after current line
        CALL    NC,SRCHLN       ; Line is before current line
        LD      H,B             ; Set up code string address
        LD      L,C
        DEC     HL              ; Incremented after
        RET     C               ; Line found
ULERR:  LD      E,UL            ; ?UL Error
        JP      ERROR           ; Output error message

RETURN: RET     NZ              ; Return if not just RETURN
        LD      D,-1            ; Flag "GOSUB" search
        CALL    BAKSTK          ; Look "GOSUB" block
        LD      SP,HL           ; Kill all FORs in subroutine
        CP      ZGOSUB          ; Test for "GOSUB" token
        LD      E,RG            ; ?RG Error
        JP      NZ,ERROR        ; Error if no "GOSUB" found
        POP     HL              ; Get RETURN line number
        LD      (LINEAT),HL     ; Save as current
        INC     HL              ; Was it from direct statement?
        LD      A,H
        OR      L               ; Return to line
        JP      NZ,RETLIN       ; No - Return to line
        LD      A,(LSTBIN)      ; Any INPUT in subroutine?
        OR      A               ; If so buffer is corrupted
        JP      NZ,POPNOK       ; Yes - Go to command mode
RETLIN: LD      HL,RUNCNT       ; Execution driver loop
        EX      (SP),HL         ; Into stack - Code string out
        DB      3EH             ; Skip "POP HL"
NXTDTA: POP     HL              ; Restore code string address

DATA:   DB      01H,3AH         ; ":" End of statement
REM:    LD      C,0             ; 00  End of statement
        LD      B,0
NXTSTL: LD      A,C             ; Statement and byte
        LD      C,B
        LD      B,A             ; Statement end byte
NXTSTT: LD      A,(HL)          ; Get byte
        OR      A               ; End of line?
        RET     Z               ; Yes - Exit
        CP      B               ; End of statement?
        RET     Z               ; Yes - Exit
        INC     HL              ; Next byte
        CP      '"'             ; Literal string?
        JP      Z,NXTSTL        ; Yes - Look for another '"'
        JP      NXTSTT          ; Keep looking

LET:    CALL    GETVAR          ; Get variable name
        CALL    CHKSYN          ; Make sure "=" follows
        DB      ZEQUAL          ; "=" token
        PUSH    DE              ; Save address of variable
        LD      A,(TYPE)        ; Get data type
        PUSH    AF              ; Save type
        CALL    EVAL            ; Evaluate expression
        POP     AF              ; Restore type
        EX      (SP),HL         ; Save code - Get var addr
        LD      (BRKLIN),HL     ; Save address of variable
        RRA                     ; Adjust type
        CALL    CHKTYP          ; Check types are the same
        JP      Z,LETNUM        ; Numeric - Move value
LETSTR: PUSH    HL              ; Save address of string var
        LD      HL,(FPREG)      ; Pointer to string entry
        PUSH    HL              ; Save it on stack
        INC     HL              ; Skip over length
        INC     HL
        LD      E,(HL)          ; LSB of string address
        INC     HL
        LD      D,(HL)          ; MSB of string address
        LD      HL,(BASTXT)     ; Point to start of program
        CALL    CPDEHL          ; Is string before program?
        JP      NC,CRESTR       ; Yes - Create string entry
        LD      HL,(STRSPC)     ; Point to string space
        CALL    CPDEHL          ; Is string literal in program?
        POP     DE              ; Restore address of string
        JP      NC,MVSTPT       ; Yes - Set up pointer
        LD      HL,TMPSTR       ; Temporary string pool
        CALL    CPDEHL          ; Is string in temporary pool?
        JP      NC,MVSTPT       ; No - Set up pointer
        DB      3EH             ; Skip "POP DE"
CRESTR: POP     DE              ; Restore address of string
        CALL    BAKTMP          ; Back to last tmp-str entry
        EX      DE,HL           ; Address of string entry
        CALL    SAVSTR          ; Save string in string area
MVSTPT: CALL    BAKTMP          ; Back to last tmp-str entry
        POP     HL              ; Get string pointer
        CALL    DETHL4          ; Move string pointer to var
        POP     HL              ; Restore code string address
        RET

LETNUM: PUSH    HL              ; Save address of variable
        CALL    FPTHL           ; Move value to variable
        POP     DE              ; Restore address of variable
        POP     HL              ; Restore code string address
        RET

ON:     CALL    GETINT          ; Get integer 0-255
        LD      A,(HL)          ; Get "GOTO" or "GOSUB" token
        LD      B,A             ; Save in B
        CP      ZGOSUB          ; "GOSUB" token?
        JP      Z,ONGO          ; Yes - Find line number
        CALL    CHKSYN          ; Make sure it's "GOTO"
        DB      ZGOTO           ; "GOTO" token
        DEC     HL              ; Cancel increment
ONGO:   LD      C,E             ; Integer of branch value
ONGOLP: DEC     C               ; Count branches
        LD      A,B             ; Get "GOTO" or "GOSUB" token
        JP      Z,ONJMP         ; Go to that line if right one
        CALL    GETLN           ; Get line number to DE
        CP      ","             ; Another line number?
        RET     NZ              ; No - Drop through
        JP      ONGOLP          ; Yes - loop

IF:     CALL    EVAL            ; Evaluate expression
        LD      A,(HL)          ; Get token
        CP      ZGOTO           ; "GOTO" token?
        JP      Z,IFGO          ; Yes - Get line
        CALL    CHKSYN          ; Make sure it's "THEN"
        DB      ZTHEN           ; "THEN" token
        DEC     HL              ; Cancel increment
IFGO:   CALL    TSTNUM          ; Make sure it's numeric
        CALL    TSTSGN          ; Test state of expression
        JP      Z,REM           ; False - Drop through
        CALL    GETCHR          ; Get next character
        JP      C,GOTO          ; Number - GOTO that line
        JP      IFJMP           ; Otherwise do statement

MRPRNT: DEC     HL              ; DEC 'cos GETCHR INCs
        CALL    GETCHR          ; Get next character
PRINT:  JP      Z,PRNTCR        ; CRLF if just PRINT
PRNTLP: RET     Z               ; End of list - Exit
        CP      ZTAB            ; "TAB(" token?
        JP      Z,DOTAB         ; Yes - Do TAB routine
        CP      ZSPC            ; "SPC(" token?
        JP      Z,DOTAB         ; Yes - Do SPC routine
        PUSH    HL              ; Save code string address
        CP      ","             ; Comma?
        JP      Z,DOCOM         ; Yes - Move to next zone
        CP      ";"             ; Semi-colon?
        JP      Z,NEXITM        ; Do semi-colon routine
        POP     BC              ; Code string address to BC
        CALL    EVAL            ; Evaluate expression
        PUSH    HL              ; Save code string address
        LD      A,(TYPE)        ; Get variable type
        OR      A               ; Is it a string variable?
        JP      NZ,PRNTST       ; Yes - Output string contents
        CALL    NUMASC          ; Convert number to text
        CALL    CRTST           ; Create temporary string
        LD      (HL)," "        ; Followed by a space
        LD      HL,(FPREG)      ; Get length of output
        INC     (HL)            ; Plus 1 for the space
        LD      HL,(FPREG)      ; < Not needed >
        LD      A,(LWIDTH)      ; Get width of line
        LD      B,A             ; To B
        INC     B               ; Width 255 (No limit)?
        JP      Z,PRNTNB        ; Yes - Output number string
        INC     B               ; Adjust it
        LD      A,(CURPOS)      ; Get cursor position
        ADD     A,(HL)          ; Add length of string
        DEC     A               ; Adjust it
        CP      B               ; Will output fit on this line?
        CALL    NC,PRNTCR       ; No - CRLF first
PRNTNB: CALL    PRS1            ; Output string at (HL)
        XOR     A               ; Skip CALL by setting "Z" flag
PRNTST: CALL    NZ,PRS1         ; Output string at (HL)
        POP     HL              ; Restore code string address
        JP      MRPRNT          ; See if more to PRINT

STTLIN: LD      A,(CURPOS)      ; Make sure on new line
        OR      A               ; Already at start?
        RET     Z               ; Yes - Do nothing
        JP      PRNTCR          ; Start a new line

ENDINP: LD      (HL),0          ; Mark end of buffer
        LD      HL,BUFFER-1     ; Point to buffer
PRNTCR: LD      A,CR            ; Load a CR
        CALL    OUTC            ; Output character
DONULL: XOR     A               ; Set to position 0
        LD      (CURPOS),A      ; Store it
        LD      A,(NULLS)       ; Get number of nulls
NULLP:  DEC     A               ; Count them
        RET     Z               ; Return if done
        PUSH    AF              ; Save count
        XOR     A               ; Load a null
        CALL    OUTC            ; Output it
        POP     AF              ; Restore count
        JP      NULLP           ; Keep counting

DOCOM:  LD      A,(COMMAN)      ; Get comma width
        LD      B,A             ; Save in B
        LD      A,(CURPOS)      ; Get current position
        CP      B               ; Within the limit?
        CALL    NC,PRNTCR       ; No - output CRLF
        JP      NC,NEXITM       ; Get next item
ZONELP: SUB     14              ; Next zone of 14 characters
        JP      NC,ZONELP       ; Repeat if more zones
        CPL                     ; Number of spaces to output
        JP      ASPCS           ; Output them

DOTAB:  PUSH    AF              ; Save token
        CALL    FNDNUM          ; Evaluate expression
        CALL    CHKSYN          ; Make sure ")" follows
        DB      ")"
        DEC     HL              ; Back space on to ")"
        POP     AF              ; Restore token
        SUB     ZSPC            ; Was it "SPC(" ?
        PUSH    HL              ; Save code string address
        JP      Z,DOSPC         ; Yes - Do "E" spaces
        LD      A,(CURPOS)      ; Get current position
DOSPC:  CPL                     ; Number of spaces to print to
        ADD     A,E             ; Total number to print
        JP      NC,NEXITM       ; TAB < Current POS(X)
ASPCS:  INC     A               ; Output A spaces
        LD      B,A             ; Save number to print
        LD      A," "           ; Space
SPCLP:  CALL    OUTC            ; Output character in A
        DEC     B               ; Count them
        JP      NZ,SPCLP        ; Repeat if more
NEXITM: POP     HL              ; Restore code string address
        CALL    GETCHR          ; Get next character
        JP      PRNTLP          ; More to print

REDO:   DB      "?Redo from start",CR,LF,0

BADINP: LD      A,(READFG)      ; READ or INPUT?
        OR      A
        JP      NZ,DATSNR       ; READ - ?SN Error
        POP     BC              ; Throw away code string addr
        LD      HL,REDO         ; "Redo from start" message
        CALL    PRS             ; Output string
        JP      DOAGN           ; Do last INPUT again

INPUT:  CALL    IDTEST          ; Test for illegal direct
        LD      A,(HL)          ; Get character after "INPUT"
        CP      '"'             ; Is there a prompt string?
        LD      A,0             ; Clear A and leave flags
        LD      (CTLOFG),A      ; Enable output
        JP      NZ,NOPMPT       ; No prompt - get input
        CALL    QTSTR           ; Get string terminated by '"'
        CALL    CHKSYN          ; Check for ";" after prompt
        DB      ";"
        PUSH    HL              ; Save code string address
        CALL    PRS1            ; Output prompt string
        DB      3EH             ; Skip "PUSH HL"
NOPMPT: PUSH    HL              ; Save code string address
        CALL    PROMPT          ; Get input with "? " prompt
        POP     BC              ; Restore code string address
        JP      C,INPBRK        ; Break pressed - Exit
        INC     HL              ; Next byte
        LD      A,(HL)          ; Get it
        OR      A               ; End of line?
        DEC     HL              ; Back again
        PUSH    BC              ; Re-save code string address
        JP      Z,NXTDTA        ; Yes - Find next DATA stmt
        LD      (HL),","        ; Store comma as separator
        JP      NXTITM          ; Get next item

READ:   PUSH    HL              ; Save code string address
        LD      HL,(NXTDAT)     ; Next DATA statement
        DB      0F6H            ; Flag "READ"
NXTITM: XOR     A               ; Flag "INPUT"
        LD      (READFG),A      ; Save "READ"/"INPUT" flag
        EX      (SP),HL         ; Get code str' , Save pointer
        JP      GTVLUS          ; Get values

NEDMOR: CALL    CHKSYN          ; Check for comma between items
        DB      ","
GTVLUS: CALL    GETVAR          ; Get variable name
        EX      (SP),HL         ; Save code str" , Get pointer
        PUSH    DE              ; Save variable address
        LD      A,(HL)          ; Get next "INPUT"/"DATA" byte
        CP      ","             ; Comma?
        JP      Z,ANTVLU        ; Yes - Get another value
        LD      A,(READFG)      ; Is it READ?
        OR      A
        JP      NZ,FDTLP        ; Yes - Find next DATA stmt
        LD      A,"?"           ; More INPUT needed
        CALL    OUTC            ; Output character
        CALL    PROMPT          ; Get INPUT with prompt
        POP     DE              ; Variable address
        POP     BC              ; Code string address
        JP      C,INPBRK        ; Break pressed
        INC     HL              ; Point to next DATA byte
        LD      A,(HL)          ; Get byte
        OR      A               ; Is it zero (No input) ?
        DEC     HL              ; Back space INPUT pointer
        PUSH    BC              ; Save code string address
        JP      Z,NXTDTA        ; Find end of buffer
        PUSH    DE              ; Save variable address
ANTVLU: LD      A,(TYPE)        ; Check data type
        OR      A               ; Is it numeric?
        JP      Z,INPBIN        ; Yes - Convert to binary
        CALL    GETCHR          ; Get next character
        LD      D,A             ; Save input character
        LD      B,A             ; Again
        CP      '"'             ; Start of literal sting?
        JP      Z,STRENT        ; Yes - Create string entry
        LD      A,(READFG)      ; "READ" or "INPUT" ?
        OR      A
        LD      D,A             ; Save 00 if "INPUT"
        JP      Z,ITMSEP        ; "INPUT" - End with 00
        LD      D,":"           ; "DATA" - End with 00 or ":"
ITMSEP: LD      B,","           ; Item separator
        DEC     HL              ; Back space for DTSTR
STRENT: CALL    DTSTR           ; Get string terminated by D
        EX      DE,HL           ; String address to DE
        LD      HL,LTSTND       ; Where to go after LETSTR
        EX      (SP),HL         ; Save HL , get input pointer
        PUSH    DE              ; Save address of string
        JP      LETSTR          ; Assign string to variable

INPBIN: CALL    GETCHR          ; Get next character
        CALL    ASCTFP          ; Convert ASCII to FP number
        EX      (SP),HL         ; Save input ptr, Get var addr
        CALL    FPTHL           ; Move FPREG to variable
        POP     HL              ; Restore input pointer
LTSTND: DEC     HL              ; DEC 'cos GETCHR INCs
        CALL    GETCHR          ; Get next character
        JP      Z,MORDT         ; End of line - More needed?
        CP      ","             ; Another value?
        JP      NZ,BADINP       ; No - Bad input
MORDT:  EX      (SP),HL         ; Get code string address
        DEC     HL              ; DEC 'cos GETCHR INCs
        CALL    GETCHR          ; Get next character
        JP      NZ,NEDMOR       ; More needed - Get it
        POP     DE              ; Restore DATA pointer
        LD      A,(READFG)      ; "READ" or "INPUT" ?
        OR      A
        EX      DE,HL           ; DATA pointer to HL
        JP      NZ,UPDATA       ; Update DATA pointer if "READ"
        PUSH    DE              ; Save code string address
        OR      (HL)            ; More input given?
        LD      HL,EXTIG        ; "?Extra ignored" message
        CALL    NZ,PRS          ; Output string if extra given
        POP     HL              ; Restore code string address
        RET

EXTIG:  DB      "?Extra ignored",CR,LF,0

FDTLP:  CALL    DATA            ; Get next statement
        OR      A               ; End of line?
        JP      NZ,FANDT        ; No - See if DATA statement
        INC     HL
        LD      A,(HL)          ; End of program?
        INC     HL
        OR      (HL)            ; 00 00 Ends program
        LD      E,OD            ; ?OD Error
        JP      Z,ERROR         ; Yes - Out of DATA
        INC     HL
        LD      E,(HL)          ; LSB of line number
        INC     HL
        LD      D,(HL)          ; MSB of line number
        EX      DE,HL
        LD      (DATLIN),HL     ; Set line of current DATA item
        EX      DE,HL
FANDT:  CALL    GETCHR          ; Get next character
        CP      ZDATA           ; "DATA" token
        JP      NZ,FDTLP        ; No "DATA" - Keep looking
        JP      ANTVLU          ; Found - Convert input

NEXT:   LD      DE,0            ; In case no index given
NEXT1:  CALL    NZ,GETVAR       ; Get index address
        LD      (BRKLIN),HL     ; Save code string address
        CALL    BAKSTK          ; Look for "FOR" block
        JP      NZ,NFERR        ; No "FOR" - ?NF Error
        LD      SP,HL           ; Clear nested loops
        PUSH    DE              ; Save index address
        LD      A,(HL)          ; Get sign of STEP
        INC     HL
        PUSH    AF              ; Save sign of STEP
        PUSH    DE              ; Save index address
        CALL    PHLTFP          ; Move index value to FPREG
        EX      (SP),HL         ; Save address of TO value
        PUSH    HL              ; Save address of index
        CALL    ADDPHL          ; Add STEP to index value
        POP     HL              ; Restore address of index
        CALL    FPTHL           ; Move value to index variable
        POP     HL              ; Restore address of TO value
        CALL    LOADFP          ; Move TO value to BCDE
        PUSH    HL              ; Save address of line of FOR
        CALL    CMPNUM          ; Compare index with TO value
        POP     HL              ; Restore address of line num
        POP     BC              ; Address of sign of STEP
        SUB     B               ; Compare with expected sign
        CALL    LOADFP          ; BC = Loop stmt,DE = Line num
        JP      Z,KILFOR        ; Loop finished - Terminate it
        EX      DE,HL           ; Loop statement line number
        LD      (LINEAT),HL     ; Set loop line number
        LD      L,C             ; Set code string to loop
        LD      H,B
        JP      PUTFID          ; Put back "FOR" and continue

KILFOR: LD      SP,HL           ; Remove "FOR" block
        LD      HL,(BRKLIN)     ; Code string after "NEXT"
        LD      A,(HL)          ; Get next byte in code string
        CP      ","             ; More NEXTs ?
        JP      NZ,RUNCNT       ; No - Do next statement
        CALL    GETCHR          ; Position to index name
        CALL    NEXT1           ; Re-enter NEXT routine
; < will not RETurn to here , Exit to RUNCNT or Loop >

GETNUM: CALL    EVAL            ; Get a numeric expression
TSTNUM: DB      0F6H            ; Clear carry (numeric)
TSTSTR: SCF                     ; Set carry (string)
CHKTYP: LD      A,(TYPE)        ; Check types match
        ADC     A,A             ; Expected + actual
        OR      A               ; Clear carry , set parity
        RET     PE              ; Even parity - Types match
        JP      TMERR           ; Different types - Error

; <<< NO REFERENCE TO HERE >>>

        CALL    CHKSYN          ; Make sure "=" follows
        DB      ZEQUAL          ; "="
        JP      EVAL            ; Evaluate expression

OPNPAR: CALL    CHKSYN          ; Make sure "(" follows
        DB      "("
EVAL:   DEC     HL              ; Evaluate expression & save
        LD      D,0             ; Precedence value
EVAL1:  PUSH    DE              ; Save precedence
        LD      C,1
        CALL    CHKSTK          ; Check for 1 level of stack
        CALL    OPRND           ; Get next expression value
EVAL2:  LD      (NXTOPR),HL     ; Save address of next operator
EVAL3:  LD      HL,(NXTOPR)     ; Restore address of next opr
        POP     BC              ; Precedence value and operator
        LD      A,B             ; Get precedence value
        CP      78H             ; "AND" or "OR" ?
        CALL    NC,TSTNUM       ; No - Make sure it's a number
        LD      A,(HL)          ; Get next operator / function
        LD      D,0             ; Clear Last relation
RLTLP:  SUB     ZGTR            ; ">" Token
        JP      C,FOPRND        ; + - * / ^ AND OR - Test it
        CP      ZLTH+1-ZGTR     ; < = >
        JP      NC,FOPRND       ; Function - Call it
        CP      ZEQUAL-ZGTR     ; "="
        RLA                     ; <- Test for legal
        XOR     D               ; <- combinations of < = >
        CP      D               ; <- by combining last token
        LD      D,A             ; <- with current one
        JP      C,SNERR         ; Error if "<<" "==" or ">>"
        LD      (CUROPR),HL     ; Save address of current token
        CALL    GETCHR          ; Get next character
        JP      RLTLP           ; Treat the two as one

FOPRND: LD      A,D             ; < = > found ?
        OR      A
        JP      NZ,TSTRED       ; Yes - Test for reduction
        LD      A,(HL)          ; Get operator token
        LD      (CUROPR),HL     ; Save operator address
        SUB     ZPLUS           ; Operator or function?
        RET     C               ; Neither - Exit
        CP      ZOR+1-ZPLUS     ; Is it + - * / ^ AND OR ?
        RET     NC              ; No - Exit
        LD      E,A             ; Coded operator
        LD      A,(TYPE)        ; Get data type
        DEC     A               ; FF = numeric , 00 = string
        OR      E               ; Combine with coded operator
        LD      A,E             ; Get coded operator
        JP      Z,CONCAT        ; String concatenation
        RLCA                    ; Times 2
        ADD     A,E             ; Times 3
        LD      E,A             ; To DE (D is 0)
        LD      HL,PRITAB       ; Precedence table
        ADD     HL,DE           ; To the operator concerned
        LD      A,B             ; Last operator precedence
        LD      D,(HL)          ; Get evaluation precedence
        CP      D               ; Compare with eval precedence
        RET     NC              ; Exit if higher precedence
        INC     HL              ; Point to routine address
        CALL    TSTNUM          ; Make sure it's a number

STKTHS: PUSH    BC              ; Save last precedence & token
        LD      BC,EVAL3        ; Where to go on prec' break
        PUSH    BC              ; Save on stack for return
        LD      B,E             ; Save operator
        LD      C,D             ; Save precedence
        CALL    STAKFP          ; Move value to stack
        LD      E,B             ; Restore operator
        LD      D,C             ; Restore precedence
        LD      C,(HL)          ; Get LSB of routine address
        INC     HL
        LD      B,(HL)          ; Get MSB of routine address
        INC     HL
        PUSH    BC              ; Save routine address
        LD      HL,(CUROPR)     ; Address of current operator
        JP      EVAL1           ; Loop until prec' break

OPRND:  XOR     A               ; Get operand routine
        LD      (TYPE),A        ; Set numeric expected
        CALL    GETCHR          ; Get next character
        LD      E,MO            ; ?MO Error
        JP      Z,ERROR         ; No operand - Error
        JP      C,ASCTFP        ; Number - Get value
        CALL    CHKLTR          ; See if a letter
        JP      NC,CONVAR       ; Letter - Find variable
        CP      ZPLUS           ; "+" Token ?
        JP      Z,OPRND         ; Yes - Look for operand
        CP      "."             ; "." ?
        JP      Z,ASCTFP        ; Yes - Create FP number
        CP      ZMINUS          ; "-" Token ?
        JP      Z,MINUS         ; Yes - Do minus
        CP      '"'             ; Literal string ?
        JP      Z,QTSTR         ; Get string terminated by '"'
        CP      ZNOT            ; "NOT" Token ?
        JP      Z,EVNOT         ; Yes - Eval NOT expression
        CP      ZFN             ; "FN" Token ?
        JP      Z,DOFN          ; Yes - Do FN routine
        SUB     ZSGN            ; Is it a function?
        JP      NC,FNOFST       ; Yes - Evaluate function
EVLPAR: CALL    OPNPAR          ; Evaluate expression in "()"
        CALL    CHKSYN          ; Make sure ")" follows
        DB      ")"
        RET

MINUS:  LD      D,7DH           ; "-" precedence
        CALL    EVAL1           ; Evaluate until prec' break
        LD      HL,(NXTOPR)     ; Get next operator address
        PUSH    HL              ; Save next operator address
        CALL    INVSGN          ; Negate value
RETNUM: CALL    TSTNUM          ; Make sure it's a number
        POP     HL              ; Restore next operator address
        RET

CONVAR: CALL    GETVAR          ; Get variable address to DE
FRMEVL: PUSH    HL              ; Save code string address
        EX      DE,HL           ; Variable address to HL
        LD      (FPREG),HL      ; Save address of variable
        LD      A,(TYPE)        ; Get type
        OR      A               ; Numeric?
        CALL    Z,PHLTFP        ; Yes - Move contents to FPREG
        POP     HL              ; Restore code string address
        RET

FNOFST: LD      B,0             ; Get address of function
        RLCA                    ; Double function offset
        LD      C,A             ; BC = Offset in function table
        PUSH    BC              ; Save adjusted token value
        CALL    GETCHR          ; Get next character
        LD      A,C             ; Get adjusted token value
        CP      2*(ZPOINT-ZSGN) ; Adjusted "POINT" token?
        JP      Z,POINTB        ; Yes - Do "POINT" (not POINTB)
        CP      2*(ZLEFT-ZSGN)-1; Adj' LEFT$,RIGHT$ or MID$ ?
        JP      C,FNVAL         ; No - Do function
        CALL    OPNPAR          ; Evaluate expression  (X,...
        CALL    CHKSYN          ; Make sure "," follows
        DB      ","
        CALL    TSTSTR          ; Make sure it's a string
        EX      DE,HL           ; Save code string address
        LD      HL,(FPREG)      ; Get address of string
        EX      (SP),HL         ; Save address of string
        PUSH    HL              ; Save adjusted token value
        EX      DE,HL           ; Restore code string address
        CALL    GETINT          ; Get integer 0-255
        EX      DE,HL           ; Save code string address
        EX      (SP),HL         ; Save integer,HL = adj' token
        JP      GOFUNC          ; Jump to string function

FNVAL:  CALL    EVLPAR          ; Evaluate expression
        EX      (SP),HL         ; HL = Adjusted token value
        LD      DE,RETNUM       ; Return number from function
        PUSH    DE              ; Save on stack
GOFUNC: LD      BC,FNCTAB       ; Function routine addresses
        ADD     HL,BC           ; Point to right address
        LD      C,(HL)          ; Get LSB of address
        INC     HL              ;
        LD      H,(HL)          ; Get MSB of address
        LD      L,C             ; Address to HL
        JP      (HL)            ; Jump to function

SGNEXP: DEC     D               ; Dee to flag negative exponent
        CP      ZMINUS          ; "-" token ?
        RET     Z               ; Yes - Return
        CP      "-"             ; "-" ASCII ?
        RET     Z               ; Yes - Return
        INC     D               ; Inc to flag positive exponent
        CP      "+"             ; "+" ASCII ?
        RET     Z               ; Yes - Return
        CP      ZPLUS           ; "+" token ?
        RET     Z               ; Yes - Return
        DEC     HL              ; DEC 'cos GETCHR INCs
        RET                     ; Return "NZ"

POR:    DB      0F6H            ; Flag "OR"
PAND:   XOR     A               ; Flag "AND"
        PUSH    AF              ; Save "AND" / "OR" flag
        CALL    TSTNUM          ; Make sure it's a number
        CALL    DEINT           ; Get integer -32768 to 32767
        POP     AF              ; Restore "AND" / "OR" flag
        EX      DE,HL           ; <- Get last
        POP     BC              ; <-  value
        EX      (SP),HL         ; <-  from
        EX      DE,HL           ; <-  stack
        CALL    FPBCDE          ; Move last value to FPREG
        PUSH    AF              ; Save "AND" / "OR" flag
        CALL    DEINT           ; Get integer -32768 to 32767
        POP     AF              ; Restore "AND" / "OR" flag
        POP     BC              ; Get value
        LD      A,C             ; Get LSB
        LD      HL,ACPASS       ; Address of save AC as current
        JP      NZ,POR1         ; Jump if OR
        AND     E               ; "AND" LSBs
        LD      C,A             ; Save LSB
        LD      A,B             ; Get MBS
        AND     D               ; "AND" MSBs
        JP      (HL)            ; Save AC as current (ACPASS)

POR1:   OR      E               ; "OR" LSBs
        LD      C,A             ; Save LSB
        LD      A,B             ; Get MSB
        OR      D               ; "OR" MSBs
        JP      (HL)            ; Save AC as current (ACPASS)

TSTRED: LD      HL,CMPLOG       ; Logical compare routine
        LD      A,(TYPE)        ; Get data type
        RRA                     ; Carry set = string
        LD      A,D             ; Get last precedence value
        RLA                     ; Times 2 plus carry
        LD      E,A             ; To E
        LD      D,64H           ; Relational precedence
        LD      A,B             ; Get current precedence
        CP      D               ; Compare with last
        RET     NC              ; Eval if last was rel' or log'
        JP      STKTHS          ; Stack this one and get next

CMPLOG: DW      CMPLG1          ; Compare two values / strings
CMPLG1: LD      A,C             ; Get data type
        OR      A
        RRA
        POP     BC              ; Get last expression to BCDE
        POP     DE
        PUSH    AF              ; Save status
        CALL    CHKTYP          ; Check that types match
        LD      HL,CMPRES       ; Result to comparison
        PUSH    HL              ; Save for RETurn
        JP      Z,CMPNUM        ; Compare values if numeric
        XOR     A               ; Compare two strings
        LD      (TYPE),A        ; Set type to numeric
        PUSH    DE              ; Save string name
        CALL    GSTRCU          ; Get current string
        LD      A,(HL)          ; Get length of string
        INC     HL
        INC     HL
        LD      C,(HL)          ; Get LSB of address
        INC     HL
        LD      B,(HL)          ; Get MSB of address
        POP     DE              ; Restore string name
        PUSH    BC              ; Save address of string
        PUSH    AF              ; Save length of string
        CALL    GSTRDE          ; Get second string
        CALL    LOADFP          ; Get address of second string
        POP     AF              ; Restore length of string 1
        LD      D,A             ; Length to D
        POP     HL              ; Restore address of string 1
CMPSTR: LD      A,E             ; Bytes of string 2 to do
        OR      D               ; Bytes of string 1 to do
        RET     Z               ; Exit if all bytes compared
        LD      A,D             ; Get bytes of string 1 to do
        SUB     1
        RET     C               ; Exit if end of string 1
        XOR     A
        CP      E               ; Bytes of string 2 to do
        INC     A
        RET     NC              ; Exit if end of string 2
        DEC     D               ; Count bytes in string 1
        DEC     E               ; Count bytes in string 2
        LD      A,(BC)          ; Byte in string 2
        CP      (HL)            ; Compare to byte in string 1
        INC     HL              ; Move up string 1
        INC     BC              ; Move up string 2
        JP      Z,CMPSTR        ; Same - Try next bytes
        CCF                     ; Flag difference (">" or "<")
        JP      FLGDIF          ; "<" gives -1 , ">" gives +1

CMPRES: INC     A               ; Increment current value
        ADC     A,A             ; Double plus carry
        POP     BC              ; Get other value
        AND     B               ; Combine them
        ADD     A,-1            ; Carry set if different
        SBC     A,A             ; 00 - Equal , FF - Different
        JP      FLGREL          ; Set current value & continue

EVNOT:  LD      D,5AH           ; Precedence value for "NOT"
        CALL    EVAL1           ; Eval until precedence break
        CALL    TSTNUM          ; Make sure it's a number
        CALL    DEINT           ; Get integer -32768 - 32767
        LD      A,E             ; Get LSB
        CPL                     ; Invert LSB
        LD      C,A             ; Save "NOT" of LSB
        LD      A,D             ; Get MSB
        CPL                     ; Invert MSB
        CALL    ACPASS          ; Save AC as current
        POP     BC              ; Clean up stack
        JP      EVAL3           ; Continue evaluation

DIMRET: DEC     HL              ; DEC 'cos GETCHR INCs
        CALL    GETCHR          ; Get next character
        RET     Z               ; End of DIM statement
        CALL    CHKSYN          ; Make sure "," follows
        DB      ","
DIM:    LD      BC,DIMRET       ; Return to "DIMRET"
        PUSH    BC              ; Save on stack
        DB      0F6H            ; Flag "Create" variable
GETVAR: XOR     A               ; Find variable address,to DE
        LD      (LCRFLG),A      ; Set locate / create flag
        LD      B,(HL)          ; Get First byte of name
GTFNAM: CALL    CHKLTR          ; See if a letter
        JP      C,SNERR         ; ?SN Error if not a letter
        XOR     A
        LD      C,A             ; Clear second byte of name
        LD      (TYPE),A        ; Set type to numeric
        CALL    GETCHR          ; Get next character
        JP      C,SVNAM2        ; Numeric - Save in name
        CALL    CHKLTR          ; See if a letter
        JP      C,CHARTY        ; Not a letter - Check type
SVNAM2: LD      C,A             ; Save second byte of name
ENDNAM: CALL    GETCHR          ; Get next character
        JP      C,ENDNAM        ; Numeric - Get another
        CALL    CHKLTR          ; See if a letter
        JP      NC,ENDNAM       ; Letter - Get another
CHARTY: SUB     "$"             ; String variable?
        JP      NZ,NOTSTR       ; No - Numeric variable
        INC     A               ; A = 1 (string type)
        LD      (TYPE),A        ; Set type to string
        RRCA                    ; A = 80H , Flag for string
        ADD     A,C             ; 2nd byte of name has bit 7 on
        LD      C,A             ; Resave second byte on name
        CALL    GETCHR          ; Get next character
NOTSTR: LD      A,(FORFLG)      ; Array name needed ?
        DEC     A
        JP      Z,ARLDSV        ; Yes - Get array name
        JP      P,NSCFOR        ; No array with "FOR" or "FN"
        LD      A,(HL)          ; Get byte again
        SUB     "("             ; Subscripted variable?
        JP      Z,SBSCPT        ; Yes - Sort out subscript

NSCFOR: XOR     A               ; Simple variable
        LD      (FORFLG),A      ; Clear "FOR" flag
        PUSH    HL              ; Save code string address
        LD      D,B             ; DE = Variable name to find
        LD      E,C
        LD      HL,(FNRGNM)     ; FN argument name
        CALL    CPDEHL          ; Is it the FN argument?
        LD      DE,FNARG        ; Point to argument value
        JP      Z,POPHRT        ; Yes - Return FN argument value
        LD      HL,(VAREND)     ; End of variables
        EX      DE,HL           ; Address of end of search
        LD      HL,(PROGND)     ; Start of variables address
FNDVAR: CALL    CPDEHL          ; End of variable list table?
        JP      Z,CFEVAL        ; Yes - Called from EVAL?
        LD      A,C             ; Get second byte of name
        SUB     (HL)            ; Compare with name in list
        INC     HL              ; Move on to first byte
        JP      NZ,FNTHR        ; Different - Find another
        LD      A,B             ; Get first byte of name
        SUB     (HL)            ; Compare with name in list
FNTHR:  INC     HL              ; Move on to LSB of value
        JP      Z,RETADR        ; Found - Return address
        INC     HL              ; <- Skip
        INC     HL              ; <- over
        INC     HL              ; <- F.P.
        INC     HL              ; <- value
        JP      FNDVAR          ; Keep looking

CFEVAL: POP     HL              ; Restore code string address
        EX      (SP),HL         ; Get return address
        PUSH    DE              ; Save address of variable
        LD      DE,FRMEVL       ; Return address in EVAL
        CALL    CPDEHL          ; Called from EVAL ?
        POP     DE              ; Restore address of variable
        JP      Z,RETNUL        ; Yes - Return null variable
        EX      (SP),HL         ; Put back return
        PUSH    HL              ; Save code string address
        PUSH    BC              ; Save variable name
        LD      BC,6            ; 2 byte name plus 4 byte data
        LD      HL,(ARREND)     ; End of arrays
        PUSH    HL              ; Save end of arrays
        ADD     HL,BC           ; Move up 6 bytes
        POP     BC              ; Source address in BC
        PUSH    HL              ; Save new end address
        CALL    MOVUP           ; Move arrays up
        POP     HL              ; Restore new end address
        LD      (ARREND),HL     ; Set new end address
        LD      H,B             ; End of variables to HL
        LD      L,C
        LD      (VAREND),HL     ; Set new end address

ZEROLP: DEC     HL              ; Back through to zero variable
        LD      (HL),0          ; Zero byte in variable
        CALL    CPDEHL          ; Done them all?
        JP      NZ,ZEROLP       ; No - Keep on going
        POP     DE              ; Get variable name
        LD      (HL),E          ; Store second character
        INC     HL
        LD      (HL),D          ; Store first character
        INC     HL
RETADR: EX      DE,HL           ; Address of variable in DE
        POP     HL              ; Restore code string address
        RET

RETNUL: LD      (FPEXP),A       ; Set result to zero
        LD      HL,ZERBYT       ; Also set a null string
        LD      (FPREG),HL      ; Save for EVAL
        POP     HL              ; Restore code string address
        RET

SBSCPT: PUSH    HL              ; Save code string address
        LD      HL,(LCRFLG)     ; Locate/Create and Type
        EX      (SP),HL         ; Save and get code string
        LD      D,A             ; Zero number of dimensions
SCPTLP: PUSH    DE              ; Save number of dimensions
        PUSH    BC              ; Save array name
        CALL    FPSINT          ; Get subscript (0-32767)
        POP     BC              ; Restore array name
        POP     AF              ; Get number of dimensions
        EX      DE,HL
        EX      (SP),HL         ; Save subscript value
        PUSH    HL              ; Save LCRFLG and TYPE
        EX      DE,HL
        INC     A               ; Count dimensions
        LD      D,A             ; Save in D
        LD      A,(HL)          ; Get next byte in code string
        CP      ","             ; Comma (more to come)?
        JP      Z,SCPTLP        ; Yes - More subscripts
        CALL    CHKSYN          ; Make sure ")" follows
        DB      ")"
        LD      (NXTOPR),HL     ; Save code string address
        POP     HL              ; Get LCRFLG and TYPE
        LD      (LCRFLG),HL     ; Restore Locate/create & type
        LD      E,0             ; Flag not CSAVE* or CLOAD*
        PUSH    DE              ; Save number of dimensions (D)
        DB      11H             ; Skip "PUSH HL" and "PUSH AF'

ARLDSV: PUSH    HL              ; Save code string address
        PUSH    AF              ; A = 00 , Flags set = Z,N
        LD      HL,(VAREND)     ; Start of arrays
        DB      3EH             ; Skip "ADD HL,DE"
FNDARY: ADD     HL,DE           ; Move to next array start
        EX      DE,HL
        LD      HL,(ARREND)     ; End of arrays
        EX      DE,HL           ; Current array pointer
        CALL    CPDEHL          ; End of arrays found?
        JP      Z,CREARY        ; Yes - Create array
        LD      A,(HL)          ; Get second byte of name
        CP      C               ; Compare with name given
        INC     HL              ; Move on
        JP      NZ,NXTARY       ; Different - Find next array
        LD      A,(HL)          ; Get first byte of name
        CP      B               ; Compare with name given
NXTARY: INC     HL              ; Move on
        LD      E,(HL)          ; Get LSB of next array address
        INC     HL
        LD      D,(HL)          ; Get MSB of next array address
        INC     HL
        JP      NZ,FNDARY       ; Not found - Keep looking
        LD      A,(LCRFLG)      ; Found Locate or Create it?
        OR      A
        JP      NZ,DDERR        ; Create - ?DD Error
        POP     AF              ; Locate - Get number of dim'ns
        LD      B,H             ; BC Points to array dim'ns
        LD      C,L
        JP      Z,POPHRT        ; Jump if array load/save
        SUB     (HL)            ; Same number of dimensions?
        JP      Z,FINDEL        ; Yes - Find element
BSERR:  LD      E,BS            ; ?BS Error
        JP      ERROR           ; Output error

CREARY: LD      DE,4            ; 4 Bytes per entry
        POP     AF              ; Array to save or 0 dim'ns?
        JP      Z,FCERR         ; Yes - ?FC Error
        LD      (HL),C          ; Save second byte of name
        INC     HL
        LD      (HL),B          ; Save first byte of name
        INC     HL
        LD      C,A             ; Number of dimensions to C
        CALL    CHKSTK          ; Check if enough memory
        INC     HL              ; Point to number of dimensions
        INC     HL
        LD      (CUROPR),HL     ; Save address of pointer
        LD      (HL),C          ; Set number of dimensions
        INC     HL
        LD      A,(LCRFLG)      ; Locate of Create?
        RLA                     ; Carry set = Create
        LD      A,C             ; Get number of dimensions
CRARLP: LD      BC,10+1         ; Default dimension size 10
        JP      NC,DEFSIZ       ; Locate - Set default size
        POP     BC              ; Get specified dimension size
        INC     BC              ; Include zero element
DEFSIZ: LD      (HL),C          ; Save LSB of dimension size
        INC     HL
        LD      (HL),B          ; Save MSB of dimension size
        INC     HL
        PUSH    AF              ; Save num' of dim'ns an status
        PUSH    HL              ; Save address of dim'n size
        CALL    MLDEBC          ; Multiply DE by BC to find
        EX      DE,HL           ; amount of mem needed (to DE)
        POP     HL              ; Restore address of dimension
        POP     AF              ; Restore number of dimensions
        DEC     A               ; Count them
        JP      NZ,CRARLP       ; Do next dimension if more
        PUSH    AF              ; Save locate/create flag
        LD      B,D             ; MSB of memory needed
        LD      C,E             ; LSB of memory needed
        EX      DE,HL
        ADD     HL,DE           ; Add bytes to array start
        JP      C,OMERR         ; Too big - Error
        CALL    ENFMEM          ; See if enough memory
        LD      (ARREND),HL     ; Save new end of array

ZERARY: DEC     HL              ; Back through array data
        LD      (HL),0          ; Set array element to zero
        CALL    CPDEHL          ; All elements zeroed?
        JP      NZ,ZERARY       ; No - Keep on going
        INC     BC              ; Number of bytes + 1
        LD      D,A             ; A=0
        LD      HL,(CUROPR)     ; Get address of array
        LD      E,(HL)          ; Number of dimensions
        EX      DE,HL           ; To HL
        ADD     HL,HL           ; Two bytes per dimension size
        ADD     HL,BC           ; Add number of bytes
        EX      DE,HL           ; Bytes needed to DE
        DEC     HL
        DEC     HL
        LD      (HL),E          ; Save LSB of bytes needed
        INC     HL
        LD      (HL),D          ; Save MSB of bytes needed
        INC     HL
        POP     AF              ; Locate / Create?
        JP      C,ENDDIM        ; A is 0 , End if create
FINDEL: LD      B,A             ; Find array element
        LD      C,A
        LD      A,(HL)          ; Number of dimensions
        INC     HL
        DB      16H             ; Skip "POP HL"
FNDELP: POP     HL              ; Address of next dim' size
        LD      E,(HL)          ; Get LSB of dim'n size
        INC     HL
        LD      D,(HL)          ; Get MSB of dim'n size
        INC     HL
        EX      (SP),HL         ; Save address - Get index
        PUSH    AF              ; Save number of dim'ns
        CALL    CPDEHL          ; Dimension too large?
        JP      NC,BSERR        ; Yes - ?BS Error
        PUSH    HL              ; Save index
        CALL    MLDEBC          ; Multiply previous by size
        POP     DE              ; Index supplied to DE
        ADD     HL,DE           ; Add index to pointer
        POP     AF              ; Number of dimensions
        DEC     A               ; Count them
        LD      B,H             ; MSB of pointer
        LD      C,L             ; LSB of pointer
        JP      NZ,FNDELP       ; More - Keep going
        ADD     HL,HL           ; 4 Bytes per element
        ADD     HL,HL
        POP     BC              ; Start of array
        ADD     HL,BC           ; Point to element
        EX      DE,HL           ; Address of element to DE
ENDDIM: LD      HL,(NXTOPR)     ; Got code string address
        RET

FRE:    LD      HL,(ARREND)     ; Start of free memory
        EX      DE,HL           ; To DE
        LD      HL,0            ; End of free memory
        ADD     HL,SP           ; Current stack value
        LD      A,(TYPE)        ; Dummy argument type
        OR      A
        JP      Z,FRENUM        ; Numeric - Free variable space
        CALL    GSTRCU          ; Current string to pool
        CALL    GARBGE          ; Garbage collection
        LD      HL,(STRSPC)     ; Bottom of string space in use
        EX      DE,HL           ; To DE
        LD      HL,(STRBOT)     ; Bottom of string space
FRENUM: LD      A,L             ; Get LSB of end
        SUB     E               ; Subtract LSB of beginning
        LD      C,A             ; Save difference if C
        LD      A,H             ; Get MSB of end
        SBC     A,D             ; Subtract MSB of beginning
ACPASS: LD      B,C             ; Return integer AC
ABPASS: LD      D,B             ; Return integer AB
        LD      E,0
        LD      HL,TYPE         ; Point to type
        LD      (HL),E          ; Set type to numeric
        LD      B,80H+16        ; 16 bit integer
        JP      RETINT          ; Return the integr

POS:    LD      A,(CURPOS)      ; Get cursor position
PASSA:  LD      B,A             ; Put A into AB
        XOR     A               ; Zero A
        JP      ABPASS          ; Return integer AB

DEF:    CALL    CHEKFN          ; Get "FN" and name
        CALL    IDTEST          ; Test for illegal direct
        LD      BC,DATA         ; To get next statement
        PUSH    BC              ; Save address for RETurn
        PUSH    DE              ; Save address of function ptr
        CALL    CHKSYN          ; Make sure "(" follows
        DB      "("
        CALL    GETVAR          ; Get argument variable name
        PUSH    HL              ; Save code string address
        EX      DE,HL           ; Argument address to HL
        DEC     HL
        LD      D,(HL)          ; Get first byte of arg name
        DEC     HL
        LD      E,(HL)          ; Get second byte of arg name
        POP     HL              ; Restore code string address
        CALL    TSTNUM          ; Make sure numeric argument
        CALL    CHKSYN          ; Make sure ")" follows
        DB      ")"
        CALL    CHKSYN          ; Make sure "=" follows
        DB      ZEQUAL          ; "=" token
        LD      B,H             ; Code string address to BC
        LD      C,L
        EX      (SP),HL         ; Save code str , Get FN ptr
        LD      (HL),C          ; Save LSB of FN code string
        INC     HL
        LD      (HL),B          ; Save MSB of FN code string
        JP      SVSTAD          ; Save address and do function

DOFN:   CALL    CHEKFN          ; Make sure FN follows
        PUSH    DE              ; Save function pointer address
        CALL    EVLPAR          ; Evaluate expression in "()"
        CALL    TSTNUM          ; Make sure numeric result
        EX      (SP),HL         ; Save code str , Get FN ptr
        LD      E,(HL)          ; Get LSB of FN code string
        INC     HL
        LD      D,(HL)          ; Get MSB of FN code string
        INC     HL
        LD      A,D             ; And function DEFined?
        OR      E
        JP      Z,UFERR         ; No - ?UF Error
        LD      A,(HL)          ; Get LSB of argument address
        INC     HL
        LD      H,(HL)          ; Get MSB of argument address
        LD      L,A             ; HL = Arg variable address
        PUSH    HL              ; Save it
        LD      HL,(FNRGNM)     ; Get old argument name
        EX      (SP),HL ;       ; Save old , Get new
        LD      (FNRGNM),HL     ; Set new argument name
        LD      HL,(FNARG+2)    ; Get LSB,NLSB of old arg value
        PUSH    HL              ; Save it
        LD      HL,(FNARG)      ; Get MSB,EXP of old arg value
        PUSH    HL              ; Save it
        LD      HL,FNARG        ; HL = Value of argument
        PUSH    DE              ; Save FN code string address
        CALL    FPTHL           ; Move FPREG to argument
        POP     HL              ; Get FN code string address
        CALL    GETNUM          ; Get value from function
        DEC     HL              ; DEC 'cos GETCHR INCs
        CALL    GETCHR          ; Get next character
        JP      NZ,SNERR        ; Bad character in FN - Error
        POP     HL              ; Get MSB,EXP of old arg
        LD      (FNARG),HL      ; Restore it
        POP     HL              ; Get LSB,NLSB of old arg
        LD      (FNARG+2),HL    ; Restore it
        POP     HL              ; Get name of old arg
        LD      (FNRGNM),HL     ; Restore it
        POP     HL              ; Restore code string address
        RET

IDTEST: PUSH    HL              ; Save code string address
        LD      HL,(LINEAT)     ; Get current line number
        INC     HL              ; -1 means direct statement
        LD      A,H
        OR      L
        POP     HL              ; Restore code string address
        RET     NZ              ; Return if in program
        LD      E,ID            ; ?ID Error
        JP      ERROR

CHEKFN: CALL    CHKSYN          ; Make sure FN follows
        DB      ZFN             ; "FN" token
        LD      A,80H
        LD      (FORFLG),A      ; Flag FN name to find
        OR      (HL)            ; FN name has bit 7 set
        LD      B,A             ; in first byte of name
        CALL    GTFNAM          ; Get FN name
        JP      TSTNUM          ; Make sure numeric function

STR:    CALL    TSTNUM          ; Make sure it's a number
        CALL    NUMASC          ; Turn number into text
        CALL    CRTST           ; Create string entry for it
        CALL    GSTRCU          ; Current string to pool
        LD      BC,TOPOOL       ; Save in string pool
        PUSH    BC              ; Save address on stack

SAVSTR: LD      A,(HL)          ; Get string length
        INC     HL
        INC     HL
        PUSH    HL              ; Save pointer to string
        CALL    TESTR           ; See if enough string space
        POP     HL              ; Restore pointer to string
        LD      C,(HL)          ; Get LSB of address
        INC     HL
        LD      B,(HL)          ; Get MSB of address
        CALL    CRTMST          ; Create string entry
        PUSH    HL              ; Save pointer to MSB of addr
        LD      L,A             ; Length of string
        CALL    TOSTRA          ; Move to string area
        POP     DE              ; Restore pointer to MSB
        RET

MKTMST: CALL    TESTR           ; See if enough string space
CRTMST: LD      HL,TMPSTR       ; Temporary string
        PUSH    HL              ; Save it
        LD      (HL),A          ; Save length of string
        INC     HL
SVSTAD: INC     HL
        LD      (HL),E          ; Save LSB of address
        INC     HL
        LD      (HL),D          ; Save MSB of address
        POP     HL              ; Restore pointer
        RET

CRTST:  DEC     HL              ; DEC - INCed after
QTSTR:  LD      B,'"'           ; Terminating quote
        LD      D,B             ; Quote to D
DTSTR:  PUSH    HL              ; Save start
        LD      C,-1            ; Set counter to -1
QTSTLP: INC     HL              ; Move on
        LD      A,(HL)          ; Get byte
        INC     C               ; Count bytes
        OR      A               ; End of line?
        JP      Z,CRTSTE        ; Yes - Create string entry
        CP      D               ; Terminator D found?
        JP      Z,CRTSTE        ; Yes - Create string entry
        CP      B               ; Terminator B found?
        JP      NZ,QTSTLP       ; No - Keep looking
CRTSTE: CP      '"'             ; End with '"'?
        CALL    Z,GETCHR        ; Yes - Get next character
        EX      (SP),HL         ; Starting quote
        INC     HL              ; First byte of string
        EX      DE,HL           ; To DE
        LD      A,C             ; Get length
        CALL    CRTMST          ; Create string entry
TSTOPL: LD      DE,TMPSTR       ; Temporary string
        LD      HL,(TMSTPT)     ; Temporary string pool pointer
        LD      (FPREG),HL      ; Save address of string ptr
        LD      A,1
        LD      (TYPE),A        ; Set type to string
        CALL    DETHL4          ; Move string to pool
        CALL    CPDEHL          ; Out of string pool?
        LD      (TMSTPT),HL     ; Save new pointer
        POP     HL              ; Restore code string address
        LD      A,(HL)          ; Get next code byte
        RET     NZ              ; Return if pool OK
        LD      E,ST            ; ?ST Error
        JP      ERROR           ; String pool overflow

PRNUMS: INC     HL              ; Skip leading space
PRS:    CALL    CRTST           ; Create string entry for it
PRS1:   CALL    GSTRCU          ; Current string to pool
        CALL    LOADFP          ; Move string block to BCDE
        INC     E               ; Length + 1
PRSLP:  DEC     E               ; Count characters
        RET     Z               ; End of string
        LD      A,(BC)          ; Get byte to output
        CALL    OUTC            ; Output character in A
        CP      CR              ; Return?
        CALL    Z,DONULL        ; Yes - Do nulls
        INC     BC              ; Next byte in string
        JP      PRSLP           ; More characters to output

TESTR:  OR      A               ; Test if enough room
        DB      0EH             ; No garbage collection done
GRBDON: POP     AF              ; Garbage collection done
        PUSH    AF              ; Save status
        LD      HL,(STRSPC)     ; Bottom of string space in use
        EX      DE,HL           ; To DE
        LD      HL,(STRBOT)     ; Bottom of string area
        CPL                     ; Negate length (Top down)
        LD      C,A             ; -Length to BC
        LD      B,-1            ; BC = -ve length of string
        ADD     HL,BC           ; Add to bottom of space in use
        INC     HL              ; Plus one for 2's complement
        CALL    CPDEHL          ; Below string RAM area?
        JP      C,TESTOS        ; Tidy up if not done else err
        LD      (STRBOT),HL     ; Save new bottom of area
        INC     HL              ; Point to first byte of string
        EX      DE,HL           ; Address to DE
POPAF:  POP     AF              ; Throw away status push
        RET

TESTOS: POP     AF              ; Garbage collect been done?
        LD      E,OS            ; ?OS Error
        JP      Z,ERROR         ; Yes - Not enough string apace
        CP      A               ; Flag garbage collect done
        PUSH    AF              ; Save status
        LD      BC,GRBDON       ; Garbage collection done
        PUSH    BC              ; Save for RETurn
GARBGE: LD      HL,(LSTRAM)     ; Get end of RAM pointer
GARBLP: LD      (STRBOT),HL     ; Reset string pointer
        LD      HL,0
        PUSH    HL              ; Flag no string found
        LD      HL,(STRSPC)     ; Get bottom of string space
        PUSH    HL              ; Save bottom of string space
        LD      HL,TMSTPL       ; Temporary string pool
GRBLP:  EX      DE,HL
        LD      HL,(TMSTPT)     ; Temporary string pool pointer
        EX      DE,HL
        CALL    CPDEHL          ; Temporary string pool done?
        LD      BC,GRBLP        ; Loop until string pool done
        JP      NZ,STPOOL       ; No - See if in string area
        LD      HL,(PROGND)     ; Start of simple variables
SMPVAR: EX      DE,HL
        LD      HL,(VAREND)     ; End of simple variables
        EX      DE,HL
        CALL    CPDEHL          ; All simple strings done?
        JP      Z,ARRLP         ; Yes - Do string arrays
        LD      A,(HL)          ; Get type of variable
        INC     HL
        INC     HL
        OR      A               ; "S" flag set if string
        CALL    STRADD          ; See if string in string area
        JP      SMPVAR          ; Loop until simple ones done

GNXARY: POP     BC              ; Scrap address of this array
ARRLP:  EX      DE,HL
        LD      HL,(ARREND)     ; End of string arrays
        EX      DE,HL
        CALL    CPDEHL          ; All string arrays done?
        JP      Z,SCNEND        ; Yes - Move string if found
        CALL    LOADFP          ; Get array name to BCDE
        LD      A,E             ; Get type of array
        PUSH    HL              ; Save address of num of dim'ns
        ADD     HL,BC           ; Start of next array
        OR      A               ; Test type of array
        JP      P,GNXARY        ; Numeric array - Ignore it
        LD      (CUROPR),HL     ; Save address of next array
        POP     HL              ; Get address of num of dim'ns
        LD      C,(HL)          ; BC = Number of dimensions
        LD      B,0
        ADD     HL,BC           ; Two bytes per dimension size
        ADD     HL,BC
        INC     HL              ; Plus one for number of dim'ns
GRBARY: EX      DE,HL
        LD      HL,(CUROPR)     ; Get address of next array
        EX      DE,HL
        CALL    CPDEHL          ; Is this array finished?
        JP      Z,ARRLP         ; Yes - Get next one
        LD      BC,GRBARY       ; Loop until array all done
STPOOL: PUSH    BC              ; Save return address
        OR      80H             ; Flag string type
STRADD: LD      A,(HL)          ; Get string length
        INC     HL
        INC     HL
        LD      E,(HL)          ; Get LSB of string address
        INC     HL
        LD      D,(HL)          ; Get MSB of string address
        INC     HL
        RET     P               ; Not a string - Return
        OR      A               ; Set flags on string length
        RET     Z               ; Null string - Return
        LD      B,H             ; Save variable pointer
        LD      C,L
        LD      HL,(STRBOT)     ; Bottom of new area
        CALL    CPDEHL          ; String been done?
        LD      H,B             ; Restore variable pointer
        LD      L,C
        RET     C               ; String done - Ignore
        POP     HL              ; Return address
        EX      (SP),HL         ; Lowest available string area
        CALL    CPDEHL          ; String within string area?
        EX      (SP),HL         ; Lowest available string area
        PUSH    HL              ; Re-save return address
        LD      H,B             ; Restore variable pointer
        LD      L,C
        RET     NC              ; Outside string area - Ignore
        POP     BC              ; Get return , Throw 2 away
        POP     AF              ;
        POP     AF              ;
        PUSH    HL              ; Save variable pointer
        PUSH    DE              ; Save address of current
        PUSH    BC              ; Put back return address
        RET                     ; Go to it

SCNEND: POP     DE              ; Addresses of strings
        POP     HL              ;
        LD      A,L             ; HL = 0 if no more to do
        OR      H
        RET     Z               ; No more to do - Return
        DEC     HL
        LD      B,(HL)          ; MSB of address of string
        DEC     HL
        LD      C,(HL)          ; LSB of address of string
        PUSH    HL              ; Save variable address
        DEC     HL
        DEC     HL
        LD      L,(HL)          ; HL = Length of string
        LD      H,0
        ADD     HL,BC           ; Address of end of string+1
        LD      D,B             ; String address to DE
        LD      E,C
        DEC     HL              ; Last byte in string
        LD      B,H             ; Address to BC
        LD      C,L
        LD      HL,(STRBOT)     ; Current bottom of string area
        CALL    MOVSTR          ; Move string to new address
        POP     HL              ; Restore variable address
        LD      (HL),C          ; Save new LSB of address
        INC     HL
        LD      (HL),B          ; Save new MSB of address
        LD      L,C             ; Next string area+1 to HL
        LD      H,B
        DEC     HL              ; Next string area address
        JP      GARBLP          ; Look for more strings

CONCAT: PUSH    BC              ; Save prec' opr & code string
        PUSH    HL              ;
        LD      HL,(FPREG)      ; Get first string
        EX      (SP),HL         ; Save first string
        CALL    OPRND           ; Get second string
        EX      (SP),HL         ; Restore first string
        CALL    TSTSTR          ; Make sure it's a string
        LD      A,(HL)          ; Get length of second string
        PUSH    HL              ; Save first string
        LD      HL,(FPREG)      ; Get second string
        PUSH    HL              ; Save second string
        ADD     A,(HL)          ; Add length of second string
        LD      E,LS            ; ?LS Error
        JP      C,ERROR         ; String too long - Error
        CALL    MKTMST          ; Make temporary string
        POP     DE              ; Get second string to DE
        CALL    GSTRDE          ; Move to string pool if needed
        EX      (SP),HL         ; Get first string
        CALL    GSTRHL          ; Move to string pool if needed
        PUSH    HL              ; Save first string
        LD      HL,(TMPSTR+2)   ; Temporary string address
        EX      DE,HL           ; To DE
        CALL    SSTSA           ; First string to string area
        CALL    SSTSA           ; Second string to string area
        LD      HL,EVAL2        ; Return to evaluation loop
        EX      (SP),HL         ; Save return,get code string
        PUSH    HL              ; Save code string address
        JP      TSTOPL          ; To temporary string to pool

SSTSA:  POP     HL              ; Return address
        EX      (SP),HL         ; Get string block,save return
        LD      A,(HL)          ; Get length of string
        INC     HL
        INC     HL
        LD      C,(HL)          ; Get LSB of string address
        INC     HL
        LD      B,(HL)          ; Get MSB of string address
        LD      L,A             ; Length to L
TOSTRA: INC     L               ; INC - DECed after
TSALP:  DEC     L               ; Count bytes moved
        RET     Z               ; End of string - Return
        LD      A,(BC)          ; Get source
        LD      (DE),A          ; Save destination
        INC     BC              ; Next source
        INC     DE              ; Next destination
        JP      TSALP           ; Loop until string moved

GETSTR: CALL    TSTSTR          ; Make sure it's a string
GSTRCU: LD      HL,(FPREG)      ; Get current string
GSTRHL: EX      DE,HL           ; Save DE
GSTRDE: CALL    BAKTMP          ; Was it last tmp-str?
        EX      DE,HL           ; Restore DE
        RET     NZ              ; No - Return
        PUSH    DE              ; Save string
        LD      D,B             ; String block address to DE
        LD      E,C
        DEC     DE              ; Point to length
        LD      C,(HL)          ; Get string length
        LD      HL,(STRBOT)     ; Current bottom of string area
        CALL    CPDEHL          ; Last one in string area?
        JP      NZ,POPHL        ; No - Return
        LD      B,A             ; Clear B (A=0)
        ADD     HL,BC           ; Remove string from str' area
        LD      (STRBOT),HL     ; Save new bottom of str' area
POPHL:  POP     HL              ; Restore string
        RET

BAKTMP: LD      HL,(TMSTPT)     ; Get temporary string pool top
        DEC     HL              ; Back
        LD      B,(HL)          ; Get MSB of address
        DEC     HL              ; Back
        LD      C,(HL)          ; Get LSB of address
        DEC     HL              ; Back
        DEC     HL              ; Back
        CALL    CPDEHL          ; String last in string pool?
        RET     NZ              ; Yes - Leave it
        LD      (TMSTPT),HL     ; Save new string pool top
        RET

LEN:    LD      BC,PASSA        ; To return integer A
        PUSH    BC              ; Save address
GETLEN: CALL    GETSTR          ; Get string and its length
        XOR     A
        LD      D,A             ; Clear D
        LD      (TYPE),A        ; Set type to numeric
        LD      A,(HL)          ; Get length of string
        OR      A               ; Set status flags
        RET

ASC:    LD      BC,PASSA        ; To return integer A
        PUSH    BC              ; Save address
GTFLNM: CALL    GETLEN          ; Get length of string
        JP      Z,FCERR         ; Null string - Error
        INC     HL
        INC     HL
        LD      E,(HL)          ; Get LSB of address
        INC     HL
        LD      D,(HL)          ; Get MSB of address
        LD      A,(DE)          ; Get first byte of string
        RET

CHR:    LD      A,1             ; One character string
        CALL    MKTMST          ; Make a temporary string
        CALL    MAKINT          ; Make it integer A
        LD      HL,(TMPSTR+2)   ; Get address of string
        LD      (HL),E          ; Save character
TOPOOL: POP     BC              ; Clean up stack
        JP      TSTOPL          ; Temporary string to pool

LEFT:   CALL    LFRGNM          ; Get number and ending ")"
        XOR     A               ; Start at first byte in string
RIGHT1: EX      (SP),HL         ; Save code string,Get string
        LD      C,A             ; Starting position in string
MID1:   PUSH    HL              ; Save string block address
        LD      A,(HL)          ; Get length of string
        CP      B               ; Compare with number given
        JP      C,ALLFOL        ; All following bytes required
        LD      A,B             ; Get new length
        DB      11H             ; Skip "LD C,0"
ALLFOL: LD      C,0             ; First byte of string
        PUSH    BC              ; Save position in string
        CALL    TESTR           ; See if enough string space
        POP     BC              ; Get position in string
        POP     HL              ; Restore string block address
        PUSH    HL              ; And re-save it
        INC     HL
        INC     HL
        LD      B,(HL)          ; Get LSB of address
        INC     HL
        LD      H,(HL)          ; Get MSB of address
        LD      L,B             ; HL = address of string
        LD      B,0             ; BC = starting address
        ADD     HL,BC           ; Point to that byte
        LD      B,H             ; BC = source string
        LD      C,L
        CALL    CRTMST          ; Create a string entry
        LD      L,A             ; Length of new string
        CALL    TOSTRA          ; Move string to string area
        POP     DE              ; Clear stack
        CALL    GSTRDE          ; Move to string pool if needed
        JP      TSTOPL          ; Temporary string to pool

RIGHT:  CALL    LFRGNM          ; Get number and ending ")"
        POP     DE              ; Get string length
        PUSH    DE              ; And re-save
        LD      A,(DE)          ; Get length
        SUB     B               ; Move back N bytes
        JP      RIGHT1          ; Go and get sub-string

MID:    EX      DE,HL           ; Get code string address
        LD      A,(HL)          ; Get next byte "," or ")"
        CALL    MIDNUM          ; Get number supplied
        INC     B               ; Is it character zero?
        DEC     B
        JP      Z,FCERR         ; Yes - Error
        PUSH    BC              ; Save starting position
        LD      E,255           ; All of string
        CP      ")"             ; Any length given?
        JP      Z,RSTSTR        ; No - Rest of string
        CALL    CHKSYN          ; Make sure "," follows
        DB      ","
        CALL    GETINT          ; Get integer 0-255
RSTSTR: CALL    CHKSYN          ; Make sure ")" follows
        DB      ")"
        POP     AF              ; Restore starting position
        EX      (SP),HL         ; Get string,8ave code string
        LD      BC,MID1         ; Continuation of MID$ routine
        PUSH    BC              ; Save for return
        DEC     A               ; Starting position-1
        CP      (HL)            ; Compare with length
        LD      B,0             ; Zero bytes length
        RET     NC              ; Null string if start past end
        LD      C,A             ; Save starting position-1
        LD      A,(HL)          ; Get length of string
        SUB     C               ; Subtract start
        CP      E               ; Enough string for it?
        LD      B,A             ; Save maximum length available
        RET     C               ; Truncate string if needed
        LD      B,E             ; Set specified length
        RET                     ; Go and create string

VAL:    CALL    GETLEN          ; Get length of string
        JP      Z,RESZER        ; Result zero
        LD      E,A             ; Save length
        INC     HL
        INC     HL
        LD      A,(HL)          ; Get LSB of address
        INC     HL
        LD      H,(HL)          ; Get MSB of address
        LD      L,A             ; HL = String address
        PUSH    HL              ; Save string address
        ADD     HL,DE
        LD      B,(HL)          ; Get end of string+1 byte
        LD      (HL),D          ; Zero it to terminate
        EX      (SP),HL         ; Save string end,get start
        PUSH    BC              ; Save end+1 byte
        LD      A,(HL)          ; Get starting byte
        CALL    ASCTFP          ; Convert ASCII string to FP
        POP     BC              ; Restore end+1 byte
        POP     HL              ; Restore end+1 address
        LD      (HL),B          ; Put back original byte
        RET

LFRGNM: EX      DE,HL           ; Code string address to HL
        CALL    CHKSYN          ; Make sure ")" follows
        DB      ")"
MIDNUM: POP     BC              ; Get return address
        POP     DE              ; Get number supplied
        PUSH    BC              ; Re-save return address
        LD      B,E             ; Number to B
        RET

INP:    CALL    MAKINT          ; Make it integer A
        LD      (INPORT),A      ; Set input port
        CALL    INPSUB          ; Get input from port
        JP      PASSA           ; Return integer A

POUT:   CALL    SETIO           ; Set up port number
        JP      OUTSUB          ; Output data and return

WAIT:   CALL    SETIO           ; Set up port number
        PUSH    AF              ; Save AND mask
        LD      E,0             ; Assume zero if none given
        DEC     HL              ; DEC 'cos GETCHR INCs
        CALL    GETCHR          ; Get next character
        JP      Z,NOXOR         ; No XOR byte given
        CALL    CHKSYN          ; Make sure "," follows
        DB      ","
        CALL    GETINT          ; Get integer 0-255 to XOR with
NOXOR:  POP     BC              ; Restore AND mask
WAITLP: CALL    INPSUB          ; Get input
        XOR     E               ; Flip selected bits
        AND     B               ; Result non-zero?
        JP      Z,WAITLP        ; No = keep waiting
        RET

SETIO:  CALL    GETINT          ; Get integer 0-255
        LD      (INPORT),A      ; Set input port
        LD      (OTPORT),A      ; Set output port
        CALL    CHKSYN          ; Make sure "," follows
        DB      ","
        JP      GETINT          ; Get integer 0-255 and return

FNDNUM: CALL    GETCHR          ; Get next character
GETINT: CALL    GETNUM          ; Get a number from 0 to 255
MAKINT: CALL    DEPINT          ; Make sure value 0 - 255
        LD      A,D             ; Get MSB of number
        OR      A               ; Zero?
        JP      NZ,FCERR        ; No - Error
        DEC     HL              ; DEC 'cos GETCHR INCs
        CALL    GETCHR          ; Get next character
        LD      A,E             ; Get number to A
        RET

; << NO  REFERENCE  TO  THIS  SECTION  OF  CODE >>
; << Set up another program area (can be in ROM) >>

        LD      HL,(BASTXT)     ; Get start of program text
        LD      (PROGND),HL     ; Set more variable space
        LD      HL,8000H        ; Address of new program
        LD      E,(HL)          ; Get LSB of new RAM end
        INC     HL
        LD      D,(HL)          ; Get MSB of new RAM end
        INC     HL
        INC     HL              ; Null at start of program
        LD      (BASTXT),HL     ; New program text area 8003H
        EX      DE,HL           ; New RAM end to HL
        LD      (LSTRAM),HL     ; Set new RAM end
        LD      (STRSPC),HL     ; Clear string space
        LD      BC,RUNCNT       ; Execution driver loop
        PUSH    BC              ; Save for return
        JP      RUNFST          ; Clear variables and continue

RUART:  JP      GUART           ; Get a byte from UART

WUART2: CALL    WUART           ; Send 2 Bytes to UART
WUART:  PUSH    AF              ; Save byte
        PUSH    BC              ; Save BC
        LD      C,A             ; Byte to C
        CALL    SUART           ; Send byte to UART
        POP     BC              ; Restore BC
        POP     AF              ; Restore byte
        RET

CSAVE:  LD      B,1             ; Flag "CSAVE"
        CP      ZTIMES          ; "*" token? ("CSAVE*")
        JP      Z,ARRSV1        ; Yes - Array save
        CALL    EVAL            ; Evaluate expression
        PUSH    HL              ; Save code string address
        CALL    GTFLNM          ; Get file name
        PUSH    DE              ; Save file name
        CALL    CASFFW          ; Turn on motor and wait
        POP     DE              ; Restore file name
        LD      A,11010011B     ; Header byte
        CALL    WUART           ; Send byte to UART
        CALL    WUART2          ; Send byte twice more
        LD      A,(DE)          ; Get file name
        CALL    WUART           ; Send it to UART
        NOP
        NOP
        NOP
        LD      HL,PROGND       ; Start of program information
        LD      (ARG1),HL       ; Save for monitor save routine
        LD      HL,(PROGND)     ; End of program information
        LD      (ARG2),HL       ; Save for monitor save routine
        CALL    SAVE            ; Save program to tape
        CALL    ARET            ; Not much there!
        POP     HL              ; Restore code string address
        RET

CLOAD:  LD      A,(HL)          ; Get byte after "CLOAD"
        CP      ZTIMES          ; "*" token? ("CLOAD*")
        JP      Z,ARRLD1        ; Yes - Array load
        CALL    SMOTOR          ; Start motor and get "?"
        SUB     ZPRINT          ; "?" ("PRINT" token) Verify?
        JP      Z,FLGVER        ; Yes - Flag "verify"
        XOR     A               ; Flag "load"
        DB      01H             ; Skip "CPL" and "INC HL"
FLGVER: CPL                     ; Flag "verify"
        INC     HL              ; Skip over "?"
        PUSH    AF              ; Save verify flag
        DEC     HL              ; DEC 'cos GETCHR INCs
        CALL    GETCHR          ; Get next character
        LD      A,0             ; Any file will do
        JP      Z,ANYNAM        ; No name given - Any will do
        CALL    EVAL            ; Evaluate expression
        CALL    GTFLNM          ; Get file name
        LD      A,(DE)          ; Get first byte of name
ANYNAM: LD      L,A             ; Save name to find
        POP     AF              ; Get verify flag
        PUSH    AF              ; And re-save
        OR      A               ; Verify of load?
        LD      H,A
        LD      (FPREG),HL      ; Save nam of file to find
        CALL    Z,CLRPTR        ; Load - Clear pointers
        LD      HL,(FPREG)      ; Get name of program to find
        EX      DE,HL           ; Name to DE
CLOAD1: LD      B,3             ; 3 Header bytes
CLOAD2: CALL    RUART           ; Get a byte from UART
        SUB     11010011B       ; Header byte?
        JP      NZ,CLOAD1       ; Look for header
        DEC     B               ; Count header bytes
        JP      NZ,CLOAD2       ; More to find?
        CALL    RUART           ; Get name of file
        CALL    FILFND          ; Display "file X found"
        INC     E               ; Any file name given?
        DEC     E
        JP      Z,THSFIL        ; No - This file will do
        CP      E               ; Has file been found?
        JP      NZ,CLOAD1       ; No - Look for another
THSFIL: NOP
        NOP
        NOP
        POP     AF              ; Get verify flag
        OR      A               ; Load or verify?
        JP      NZ,CLOADV       ; Verify program
        CALL    MONLD           ; Use monitor to load program
        LD      HL,(PROGND)     ; Get end of program
        CALL    ENFMEM          ; See if enough memory
        JP      CLOADE          ; "Ok" and set up pointers

CLOADV: CALL    MONVE           ; Use monitor to verify program
CLOADE: LD      HL,OKMSG        ; "Ok" message
        CALL    PRS             ; Output string
        CALL    ARET            ; Not a lot there!
        JP      SETPTR          ; Set up line pointers

OUTBAD: LD      HL,BAD          ; "Bad" message
        CALL    PRS             ; Output string
        JP      ERRIN           ; In line message

FILFND: PUSH    BC              ; <- Save
        PUSH    HL              ; <- all
        PUSH    DE              ; <- the
        PUSH    AF              ; <- registers
        LD      HL,FILE         ; "File" message
        CALL    PRS             ; Output string
        POP     AF              ; Get file name
        PUSH    AF              ; And re-save
        CALL    CONMON          ; Output file name to screen
        LD      HL,FOUND        ; "Found" message
        CALL    PRS             ; Output string
        POP     AF              ; <- Restore
        POP     DE              ; <- all
        POP     HL              ; <- the
        POP     BC              ; <- registers
        RET

FILE:   DB      "File ",0
FOUND:  DB      " Found",CR,LF,0
BAD:    DB      "Bad",0,0,0

PEEK:   CALL    DEINT           ; Get memory address
        LD      A,(DE)          ; Get byte in memory
        JP      PASSA           ; Return integer A

POKE:   CALL    GETNUM          ; Get memory address
        CALL    DEINT           ; Get integer -32768 to 3276
        PUSH    DE              ; Save memory address
        CALL    CHKSYN          ; Make sure "," follows
        DB      ","
        CALL    GETINT          ; Get integer 0-255
        POP     DE              ; Restore memory address
        LD      (DE),A          ; Load it into memory
        RET

ROUND:  LD      HL,HALF         ; Add 0.5 to FPREG
ADDPHL: CALL    LOADFP          ; Load FP at (HL) to BCDE
        JP      FPADD           ; Add BCDE to FPREG

SUBPHL: CALL    LOADFP          ; FPREG = -FPREG + number at HL
        DB      21H             ; Skip "POP BC" and "POP DE"
PSUB:   POP     BC              ; Get FP number from stack
        POP     DE
SUBCDE: CALL    INVSGN          ; Negate FPREG
FPADD:  LD      A,B             ; Get FP exponent
        OR      A               ; Is number zero?
        RET     Z               ; Yes - Nothing to add
        LD      A,(FPEXP)       ; Get FPREG exponent
        OR      A               ; Is this number zero?
        JP      Z,FPBCDE        ; Yes - Move BCDE to FPREG
        SUB     B               ; BCDE number larger?
        JP      NC,NOSWAP       ; No - Don't swap them
        CPL                     ; Two's complement
        INC     A               ;  FP exponent
        EX      DE,HL
        CALL    STAKFP          ; Put FPREG on stack
        EX      DE,HL
        CALL    FPBCDE          ; Move BCDE to FPREG
        POP     BC              ; Restore number from stack
        POP     DE
NOSWAP: CP      24+1            ; Second number insignificant?
        RET     NC              ; Yes - First number is result
        PUSH    AF              ; Save number of bits to scale
        CALL    SIGNS           ; Set MSBs & sign of result
        LD      H,A             ; Save sign of result
        POP     AF              ; Restore scaling factor
        CALL    SCALE           ; Scale BCDE to same exponent
        OR      H               ; Result to be positive?
        LD      HL,FPREG        ; Point to FPREG
        JP      P,MINCDE        ; No - Subtract FPREG from CDE
        CALL    PLUCDE          ; Add FPREG to CDE
        JP      NC,RONDUP       ; No overflow - Round it up
        INC     HL              ; Point to exponent
        INC     (HL)            ; Increment it
        JP      Z,OVERR         ; Number overflowed - Error
        LD      L,1             ; 1 bit to shift right
        CALL    SHRT1           ; Shift result right
        JP      RONDUP          ; Round it up

MINCDE: XOR     A               ; Clear A and carry
        SUB     B               ; Negate exponent
        LD      B,A             ; Re-save exponent
        LD      A,(HL)          ; Get LSB of FPREG
        SBC     A, E            ; Subtract LSB of BCDE
        LD      E,A             ; Save LSB of BCDE
        INC     HL
        LD      A,(HL)          ; Get NMSB of FPREG
        SBC     A,D             ; Subtract NMSB of BCDE
        LD      D,A             ; Save NMSB of BCDE
        INC     HL
        LD      A,(HL)          ; Get MSB of FPREG
        SBC     A,C             ; Subtract MSB of BCDE
        LD      C,A             ; Save MSB of BCDE
CONPOS: CALL    C,COMPL         ; Overflow - Make it positive

BNORM:  LD      L,B             ; L = Exponent
        LD      H,E             ; H = LSB
        XOR     A
BNRMLP: LD      B,A             ; Save bit count
        LD      A,C             ; Get MSB
        OR      A               ; Is it zero?
        JP      NZ,PNORM        ; No - Do it bit at a time
        LD      C,D             ; MSB = NMSB
        LD      D,H             ; NMSB= LSB
        LD      H,L             ; LSB = VLSB
        LD      L,A             ; VLSB= 0
        LD      A,B             ; Get exponent
        SUB     8               ; Count 8 bits
        CP      -24-8           ; Was number zero?
        JP      NZ,BNRMLP       ; No - Keep normalising
RESZER: XOR     A               ; Result is zero
SAVEXP: LD      (FPEXP),A       ; Save result as zero
        RET

NORMAL: DEC     B               ; Count bits
        ADD     HL,HL           ; Shift HL left
        LD      A,D             ; Get NMSB
        RLA                     ; Shift left with last bit
        LD      D,A             ; Save NMSB
        LD      A,C             ; Get MSB
        ADC     A,A             ; Shift left with last bit
        LD      C,A             ; Save MSB
PNORM:  JP      P,NORMAL        ; Not done - Keep going
        LD      A,B             ; Number of bits shifted
        LD      E,H             ; Save HL in EB
        LD      B,L
        OR      A               ; Any shifting done?
        JP      Z,RONDUP        ; No - Round it up
        LD      HL,FPEXP        ; Point to exponent
        ADD     A,(HL)          ; Add shifted bits
        LD      (HL),A          ; Re-save exponent
        JP      NC,RESZER       ; Underflow - Result is zero
        RET     Z               ; Result is zero
RONDUP: LD      A,B             ; Get VLSB of number
RONDB:  LD      HL,FPEXP        ; Point to exponent
        OR      A               ; Any rounding?
        CALL    M,FPROND        ; Yes - Round number up
        LD      B,(HL)          ; B = Exponent
        INC     HL
        LD      A,(HL)          ; Get sign of result
        AND     10000000B       ; Only bit 7 needed
        XOR     C               ; Set correct sign
        LD      C,A             ; Save correct sign in number
        JP      FPBCDE          ; Move BCDE to FPREG

FPROND: INC     E               ; Round LSB
        RET     NZ              ; Return if ok
        INC     D               ; Round NMSB
        RET     NZ              ; Return if ok
        INC     C               ; Round MSB
        RET     NZ              ; Return if ok
        LD      C,80H           ; Set normal value
        INC     (HL)            ; Increment exponent
        RET     NZ              ; Return if ok
        JP      OVERR           ; Overflow error

PLUCDE: LD      A,(HL)          ; Get LSB of FPREG
        ADD     A,E             ; Add LSB of BCDE
        LD      E,A             ; Save LSB of BCDE
        INC     HL
        LD      A,(HL)          ; Get NMSB of FPREG
        ADC     A,D             ; Add NMSB of BCDE
        LD      D,A             ; Save NMSB of BCDE
        INC     HL
        LD      A,(HL)          ; Get MSB of FPREG
        ADC     A,C             ; Add MSB of BCDE
        LD      C,A             ; Save MSB of BCDE
        RET

COMPL:  LD      HL,SGNRES       ; Sign of result
        LD      A,(HL)          ; Get sign of result
        CPL                     ; Negate it
        LD      (HL),A          ; Put it back
        XOR     A
        LD      L,A             ; Set L to zero
        SUB     B               ; Negate exponent,set carry
        LD      B,A             ; Re-save exponent
        LD      A,L             ; Load zero
        SBC     A,E             ; Negate LSB
        LD      E,A             ; Re-save LSB
        LD      A,L             ; Load zero
        SBC     A,D             ; Negate NMSB
        LD      D,A             ; Re-save NMSB
        LD      A,L             ; Load zero
        SBC     A,C             ; Negate MSB
        LD      C,A             ; Re-save MSB
        RET

SCALE:  LD      B,0             ; Clear underflow
SCALLP: SUB     8               ; 8 bits (a whole byte)?
        JP      C,SHRITE        ; No - Shift right A bits
        LD      B,E             ; <- Shift
        LD      E,D             ; <- right
        LD      D,C             ; <- eight
        LD      C,0             ; <- bits
        JP      SCALLP          ; More bits to shift

SHRITE: ADD     A,8+1           ; Adjust count
        LD      L,A             ; Save bits to shift
SHRLP:  XOR     A               ; Flag for all done
        DEC     L               ; All shifting done?
        RET     Z               ; Yes - Return
        LD      A,C             ; Get MSB
SHRT1:  RRA                     ; Shift it right
        LD      C,A             ; Re-save
        LD      A,D             ; Get NMSB
        RRA                     ; Shift right with last bit
        LD      D,A             ; Re-save it
        LD      A,E             ; Get LSB
        RRA                     ; Shift right with last bit
        LD      E,A             ; Re-save it
        LD      A,B             ; Get underflow
        RRA                     ; Shift right with last bit
        LD      B,A             ; Re-save underflow
        JP      SHRLP           ; More bits to do

UNITY:  DB       000H,000H,000H,081H    ; 1.00000

LOGTAB: DB      3                       ; Table used by LOG
        DB      0AAH,056H,019H,080H     ; 0.59898
        DB      0F1H,022H,076H,080H     ; 0.96147
        DB      045H,0AAH,038H,082H     ; 2.88539

LOG:    CALL    TSTSGN          ; Test sign of value
        OR      A
        JP      PE,FCERR        ; ?FC Error if <= zero
        LD      HL,FPEXP        ; Point to exponent
        LD      A,(HL)          ; Get exponent
        LD      BC,8035H        ; BCDE = SQR(1/2)
        LD      DE,04F3H
        SUB     B               ; Scale value to be < 1
        PUSH    AF              ; Save scale factor
        LD      (HL),B          ; Save new exponent
        PUSH    DE              ; Save SQR(1/2)
        PUSH    BC
        CALL    FPADD           ; Add SQR(1/2) to value
        POP     BC              ; Restore SQR(1/2)
        POP     DE
        INC     B               ; Make it SQR(2)
        CALL    DVBCDE          ; Divide by SQR(2)
        LD      HL,UNITY        ; Point to 1.
        CALL    SUBPHL          ; Subtract FPREG from 1
        LD      HL,LOGTAB       ; Coefficient table
        CALL    SUMSER          ; Evaluate sum of series
        LD      BC,8080H        ; BCDE = -0.5
        LD      DE,0000H
        CALL    FPADD           ; Subtract 0.5 from FPREG
        POP     AF              ; Restore scale factor
        CALL    RSCALE          ; Re-scale number
MULLN2: LD      BC,8031H        ; BCDE = Ln(2)
        LD      DE,7218H
        DB      21H             ; Skip "POP BC" and "POP DE"

MULT:   POP     BC              ; Get number from stack
        POP     DE
FPMULT: CALL    TSTSGN          ; Test sign of FPREG
        RET     Z               ; Return zero if zero
        LD      L,0             ; Flag add exponents
        CALL    ADDEXP          ; Add exponents
        LD      A,C             ; Get MSB of multiplier
        LD      (MULVAL),A      ; Save MSB of multiplier
        EX      DE,HL
        LD      (MULVAL+1),HL   ; Save rest of multiplier
        LD      BC,0            ; Partial product (BCDE) = zero
        LD      D,B
        LD      E,B
        LD      HL,BNORM        ; Address of normalise
        PUSH    HL              ; Save for return
        LD      HL,MULT8        ; Address of 8 bit multiply
        PUSH    HL              ; Save for NMSB,MSB
        PUSH    HL              ;
        LD      HL,FPREG        ; Point to number
MULT8:  LD      A,(HL)          ; Get LSB of number
        INC     HL              ; Point to NMSB
        OR      A               ; Test LSB
        JP      Z,BYTSFT        ; Zero - shift to next byte
        PUSH    HL              ; Save address of number
        LD      L,8             ; 8 bits to multiply by
MUL8LP: RRA                     ; Shift LSB right
        LD      H,A             ; Save LSB
        LD      A,C             ; Get MSB
        JP      NC,NOMADD       ; Bit was zero - Don't add
        PUSH    HL              ; Save LSB and count
        LD      HL,(MULVAL+1)   ; Get LSB and NMSB
        ADD     HL,DE           ; Add NMSB and LSB
        EX      DE,HL           ; Leave sum in DE
        POP     HL              ; Restore MSB and count
        LD      A,(MULVAL)      ; Get MSB of multiplier
        ADC     A,C             ; Add MSB
NOMADD: RRA                     ; Shift MSB right
        LD      C,A             ; Re-save MSB
        LD      A,D             ; Get NMSB
        RRA                     ; Shift NMSB right
        LD      D,A             ; Re-save NMSB
        LD      A,E             ; Get LSB
        RRA                     ; Shift LSB right
        LD      E,A             ; Re-save LSB
        LD      A,B             ; Get VLSB
        RRA                     ; Shift VLSB right
        LD      B,A             ; Re-save VLSB
        DEC     L               ; Count bits multiplied
        LD      A,H             ; Get LSB of multiplier
        JP      NZ,MUL8LP       ; More - Do it
POPHRT: POP     HL              ; Restore address of number
        RET

BYTSFT: LD      B,E             ; Shift partial product left
        LD      E,D
        LD      D,C
        LD      C,A
        RET

DIV10:  CALL    STAKFP          ; Save FPREG on stack
        LD      BC,8420H        ; BCDE = 10.
        LD      DE,0000H
        CALL    FPBCDE          ; Move 10 to FPREG

DIV:    POP     BC              ; Get number from stack
        POP     DE
DVBCDE: CALL    TSTSGN          ; Test sign of FPREG
        JP      Z,DZERR         ; Error if division by zero
        LD      L,-1            ; Flag subtract exponents
        CALL    ADDEXP          ; Subtract exponents
        INC     (HL)            ; Add 2 to exponent to adjust
        INC     (HL)
        DEC     HL              ; Point to MSB
        LD      A,(HL)          ; Get MSB of dividend
        LD      (DIV3),A        ; Save for subtraction
        DEC     HL
        LD      A,(HL)          ; Get NMSB of dividend
        LD      (DIV2),A        ; Save for subtraction
        DEC     HL
        LD      A,(HL)          ; Get MSB of dividend
        LD      (DIV1),A        ; Save for subtraction
        LD      B,C             ; Get MSB
        EX      DE,HL           ; NMSB,LSB to HL
        XOR     A
        LD      C,A             ; Clear MSB of quotient
        LD      D,A             ; Clear NMSB of quotient
        LD      E,A             ; Clear LSB of quotient
        LD      (DIV4),A        ; Clear overflow count
DIVLP:  PUSH    HL              ; Save divisor
        PUSH    BC
        LD      A,L             ; Get LSB of number
        CALL    DIVSUP          ; Subt' divisor from dividend
        SBC     A,0             ; Count for overflows
        CCF
        JP      NC,RESDIV       ; Restore divisor if borrow
        LD      (DIV4),A        ; Re-save overflow count
        POP     AF              ; Scrap divisor
        POP     AF
        SCF                     ; Set carry to
        DB      0D2H            ; Skip "POP BC" and "POP HL"

RESDIV: POP     BC              ; Restore divisor
        POP     HL
        LD      A,C             ; Get MSB of quotient
        INC     A
        DEC     A
        RRA                     ; Bit 0 to bit 7
        JP      M,RONDB         ; Done - Normalise result
        RLA                     ; Restore carry
        LD      A,E             ; Get LSB of quotient
        RLA                     ; Double it
        LD      E,A             ; Put it back
        LD      A,D             ; Get NMSB of quotient
        RLA                     ; Double it
        LD      D,A             ; Put it back
        LD      A,C             ; Get MSB of quotient
        RLA                     ; Double it
        LD      C,A             ; Put it back
        ADD     HL,HL           ; Double NMSB,LSB of divisor
        LD      A,B             ; Get MSB of divisor
        RLA                     ; Double it
        LD      B,A             ; Put it back
        LD      A,(DIV4)        ; Get VLSB of quotient
        RLA                     ; Double it
        LD      (DIV4),A        ; Put it back
        LD      A,C             ; Get MSB of quotient
        OR      D               ; Merge NMSB
        OR      E               ; Merge LSB
        JP      NZ,DIVLP        ; Not done - Keep dividing
        PUSH    HL              ; Save divisor
        LD      HL,FPEXP        ; Point to exponent
        DEC     (HL)            ; Divide by 2
        POP     HL              ; Restore divisor
        JP      NZ,DIVLP        ; Ok - Keep going
        JP      OVERR           ; Overflow error

ADDEXP: LD      A,B             ; Get exponent of dividend
        OR      A               ; Test it
        JP      Z,OVTST3        ; Zero - Result zero
        LD      A,L             ; Get add/subtract flag
        LD      HL,FPEXP        ; Point to exponent
        XOR     (HL)            ; Add or subtract it
        ADD     A,B             ; Add the other exponent
        LD      B,A             ; Save new exponent
        RRA                     ; Test exponent for overflow
        XOR     B
        LD      A,B             ; Get exponent
        JP      P,OVTST2        ; Positive - Test for overflow
        ADD     A,80H           ; Add excess 128
        LD      (HL),A          ; Save new exponent
        JP      Z,POPHRT        ; Zero - Result zero
        CALL    SIGNS           ; Set MSBs and sign of result
        LD      (HL),A          ; Save new exponent
        DEC     HL              ; Point to MSB
        RET

OVTST1: CALL    TSTSGN          ; Test sign of FPREG
        CPL                     ; Invert sign
        POP     HL              ; Clean up stack
OVTST2: OR      A               ; Test if new exponent zero
OVTST3: POP     HL              ; Clear off return address
        JP      P,RESZER        ; Result zero
        JP      OVERR           ; Overflow error

MLSP10: CALL    BCDEFP          ; Move FPREG to BCDE
        LD      A,B             ; Get exponent
        OR      A               ; Is it zero?
        RET     Z               ; Yes - Result is zero
        ADD     A,2             ; Multiply by 4
        JP      C,OVERR         ; Overflow - ?OV Error
        LD      B,A             ; Re-save exponent
        CALL    FPADD           ; Add BCDE to FPREG (Times 5)
        LD      HL,FPEXP        ; Point to exponent
        INC     (HL)            ; Double number (Times 10)
        RET     NZ              ; Ok - Return
        JP      OVERR           ; Overflow error

TSTSGN: LD      A,(FPEXP)       ; Get sign of FPREG
        OR      A
        RET     Z               ; RETurn if number is zero
        LD      A,(FPREG+2)     ; Get MSB of FPREG
        DB      0FEH            ; Test sign
RETREL: CPL                     ; Invert sign
        RLA                     ; Sign bit to carry
FLGDIF: SBC     A,A             ; Carry to all bits of A
        RET     NZ              ; Return -1 if negative
        INC     A               ; Bump to +1
        RET                     ; Positive - Return +1

SGN:    CALL    TSTSGN          ; Test sign of FPREG
FLGREL: LD      B,80H+8         ; 8 bit integer in exponent
        LD      DE,0            ; Zero NMSB and LSB
RETINT: LD      HL,FPEXP        ; Point to exponent
        LD      C,A             ; CDE = MSB,NMSB and LSB
        LD      (HL),B          ; Save exponent
        LD      B,0             ; CDE = integer to normalise
        INC     HL              ; Point to sign of result
        LD      (HL),80H        ; Set sign of result
        RLA                     ; Carry = sign of integer
        JP      CONPOS          ; Set sign of result

ABS:    CALL    TSTSGN          ; Test sign of FPREG
        RET     P               ; Return if positive
INVSGN: LD      HL,FPREG+2      ; Point to MSB
        LD      A,(HL)          ; Get sign of mantissa
        XOR     80H             ; Invert sign of mantissa
        LD      (HL),A          ; Re-save sign of mantissa
        RET

STAKFP: EX      DE,HL           ; Save code string address
        LD      HL,(FPREG)      ; LSB,NLSB of FPREG
        EX      (SP),HL         ; Stack them,get return
        PUSH    HL              ; Re-save return
        LD      HL,(FPREG+2)    ; MSB and exponent of FPREG
        EX      (SP),HL         ; Stack them,get return
        PUSH    HL              ; Re-save return
        EX      DE,HL           ; Restore code string address
        RET

PHLTFP: CALL    LOADFP          ; Number at HL to BCDE
FPBCDE: EX      DE,HL           ; Save code string address
        LD      (FPREG),HL      ; Save LSB,NLSB of number
        LD      H,B             ; Exponent of number
        LD      L,C             ; MSB of number
        LD      (FPREG+2),HL    ; Save MSB and exponent
        EX      DE,HL           ; Restore code string address
        RET

BCDEFP: LD      HL,FPREG        ; Point to FPREG
LOADFP: LD      E,(HL)          ; Get LSB of number
        INC     HL
        LD      D,(HL)          ; Get NMSB of number
        INC     HL
        LD      C,(HL)          ; Get MSB of number
        INC     HL
        LD      B,(HL)          ; Get exponent of number
INCHL:  INC     HL              ; Used for conditional "INC HL"
        RET

FPTHL:  LD      DE,FPREG        ; Point to FPREG
DETHL4: LD      B,4             ; 4 bytes to move
DETHLB: LD      A,(DE)          ; Get source
        LD      (HL),A          ; Save destination
        INC     DE              ; Next source
        INC     HL              ; Next destination
        DEC     B               ; Count bytes
        JP      NZ,DETHLB       ; Loop if more
        RET

SIGNS:  LD      HL,FPREG+2      ; Point to MSB of FPREG
        LD      A,(HL)          ; Get MSB
        RLCA                    ; Old sign to carry
        SCF                     ; Set MSBit
        RRA                     ; Set MSBit of MSB
        LD      (HL),A          ; Save new MSB
        CCF                     ; Complement sign
        RRA                     ; Old sign to carry
        INC     HL
        INC     HL
        LD      (HL),A          ; Set sign of result
        LD      A,C             ; Get MSB
        RLCA                    ; Old sign to carry
        SCF                     ; Set MSBit
        RRA                     ; Set MSBit of MSB
        LD      C,A             ; Save MSB
        RRA
        XOR     (HL)            ; New sign of result
        RET

CMPNUM: LD      A,B             ; Get exponent of number
        OR      A
        JP      Z,TSTSGN        ; Zero - Test sign of FPREG
        LD      HL,RETREL       ; Return relation routine
        PUSH    HL              ; Save for return
        CALL    TSTSGN          ; Test sign of FPREG
        LD      A,C             ; Get MSB of number
        RET     Z               ; FPREG zero - Number's MSB
        LD      HL,FPREG+2      ; MSB of FPREG
        XOR     (HL)            ; Combine signs
        LD      A,C             ; Get MSB of number
        RET     M               ; Exit if signs different
        CALL    CMPFP           ; Compare FP numbers
        RRA                     ; Get carry to sign
        XOR     C               ; Combine with MSB of number
        RET

CMPFP:  INC     HL              ; Point to exponent
        LD      A,B             ; Get exponent
        CP      (HL)            ; Compare exponents
        RET     NZ              ; Different
        DEC     HL              ; Point to MBS
        LD      A,C             ; Get MSB
        CP      (HL)            ; Compare MSBs
        RET     NZ              ; Different
        DEC     HL              ; Point to NMSB
        LD      A,D             ; Get NMSB
        CP      (HL)            ; Compare NMSBs
        RET     NZ              ; Different
        DEC     HL              ; Point to LSB
        LD      A,E             ; Get LSB
        SUB     (HL)            ; Compare LSBs
        RET     NZ              ; Different
        POP     HL              ; Drop RETurn
        POP     HL              ; Drop another RETurn
        RET

FPINT:  LD      B,A             ; <- Move
        LD      C,A             ; <- exponent
        LD      D,A             ; <- to all
        LD      E,A             ; <- bits
        OR      A               ; Test exponent
        RET     Z               ; Zero - Return zero
        PUSH    HL              ; Save pointer to number
        CALL    BCDEFP          ; Move FPREG to BCDE
        CALL    SIGNS           ; Set MSBs & sign of result
        XOR     (HL)            ; Combine with sign of FPREG
        LD      H,A             ; Save combined signs
        CALL    M,DCBCDE        ; Negative - Decrement BCDE
        LD      A,80H+24        ; 24 bits
        SUB     B               ; Bits to shift
        CALL    SCALE           ; Shift BCDE
        LD      A,H             ; Get combined sign
        RLA                     ; Sign to carry
        CALL    C,FPROND        ; Negative - Round number up
        LD      B,0             ; Zero exponent
        CALL    C,COMPL         ; If negative make positive
        POP     HL              ; Restore pointer to number
        RET

DCBCDE: DEC     DE              ; Decrement BCDE
        LD      A,D             ; Test LSBs
        AND     E
        INC     A
        RET     NZ              ; Exit if LSBs not FFFF
        DEC     BC              ; Decrement MSBs
        RET

INT:    LD      HL,FPEXP        ; Point to exponent
        LD      A,(HL)          ; Get exponent
        CP      80H+24          ; Integer accuracy only?
        LD      A,(FPREG)       ; Get LSB
        RET     NC              ; Yes - Already integer
        LD      A,(HL)          ; Get exponent
        CALL    FPINT           ; F.P to integer
        LD      (HL),80H+24     ; Save 24 bit integer
        LD      A,E             ; Get LSB of number
        PUSH    AF              ; Save LSB
        LD      A,C             ; Get MSB of number
        RLA                     ; Sign to carry
        CALL    CONPOS          ; Set sign of result
        POP     AF              ; Restore LSB of number
        RET

MLDEBC: LD      HL,0            ; Clear partial product
        LD      A,B             ; Test multiplier
        OR      C
        RET     Z               ; Return zero if zero
        LD      A,16            ; 16 bits
MLDBLP: ADD     HL,HL           ; Shift P.P left
        JP      C,BSERR         ; ?BS Error if overflow
        EX      DE,HL
        ADD     HL,HL           ; Shift multiplier left
        EX      DE,HL
        JP      NC,NOMLAD       ; Bit was zero - No add
        ADD     HL,BC           ; Add multiplicand
        JP      C,BSERR         ; ?BS Error if overflow
NOMLAD: DEC     A               ; Count bits
        JP      NZ,MLDBLP       ; More
        RET

ASCTFP: CP      "-"             ; Negative?
        PUSH    AF              ; Save it and flags
        JP      Z,CNVNUM        ; Yes - Convert number
        CP      "+"             ; Positive?
        JP      Z,CNVNUM        ; Yes - Convert number
        DEC     HL              ; DEC 'cos GETCHR INCs
CNVNUM: CALL    RESZER          ; Set result to zero
        LD      B,A             ; Digits after point counter
        LD      D,A             ; Sign of exponent
        LD      E,A             ; Exponent of ten
        CPL
        LD      C,A             ; Before or after point flag
MANLP:  CALL    GETCHR          ; Get next character
        JP      C,ADDIG         ; Digit - Add to number
        CP      "."
        JP      Z,DPOINT        ; "." - Flag point
        CP      "E"
        JP      NZ,CONEXP       ; Not "E" - Scale number
        CALL    GETCHR          ; Get next character
        CALL    SGNEXP          ; Get sign of exponent
EXPLP:  CALL    GETCHR          ; Get next character
        JP      C,EDIGIT        ; Digit - Add to exponent
        INC     D               ; Is sign negative?
        JP      NZ,CONEXP       ; No - Scale number
        XOR     A
        SUB     E               ; Negate exponent
        LD      E,A             ; And re-save it
        INC     C               ; Flag end of number
DPOINT: INC     C               ; Flag point passed
        JP      Z,MANLP         ; Zero - Get another digit
CONEXP: PUSH    HL              ; Save code string address
        LD      A,E             ; Get exponent
        SUB     B               ; Subtract digits after point
SCALMI: CALL    P,SCALPL        ; Positive - Multiply number
        JP      P,ENDCON        ; Positive - All done
        PUSH    AF              ; Save number of times to /10
        CALL    DIV10           ; Divide by 10
        POP     AF              ; Restore count
        INC     A               ; Count divides

ENDCON: JP      NZ,SCALMI       ; More to do
        POP     DE              ; Restore code string address
        POP     AF              ; Restore sign of number
        CALL    Z,INVSGN        ; Negative - Negate number
        EX      DE,HL           ; Code string address to HL
        RET

SCALPL: RET     Z               ; Exit if no scaling needed
MULTEN: PUSH    AF              ; Save count
        CALL    MLSP10          ; Multiply number by 10
        POP     AF              ; Restore count
        DEC     A               ; Count multiplies
        RET

ADDIG:  PUSH    DE              ; Save sign of exponent
        LD      D,A             ; Save digit
        LD      A,B             ; Get digits after point
        ADC     A,C             ; Add one if after point
        LD      B,A             ; Re-save counter
        PUSH    BC              ; Save point flags
        PUSH    HL              ; Save code string address
        PUSH    DE              ; Save digit
        CALL    MLSP10          ; Multiply number by 10
        POP     AF              ; Restore digit
        SUB     "0"             ; Make it absolute
        CALL    RSCALE          ; Re-scale number
        POP     HL              ; Restore code string address
        POP     BC              ; Restore point flags
        POP     DE              ; Restore sign of exponent
        JP      MANLP           ; Get another digit

RSCALE: CALL    STAKFP          ; Put number on stack
        CALL    FLGREL          ; Digit to add to FPREG
PADD:   POP     BC              ; Restore number
        POP     DE
        JP      FPADD           ; Add BCDE to FPREG and return

EDIGIT: LD      A,E             ; Get digit
        RLCA                    ; Times 2
        RLCA                    ; Times 4
        ADD     A,E             ; Times 5
        RLCA                    ; Times 10
        ADD     A,(HL)          ; Add next digit
        SUB     "0"             ; Make it absolute
        LD      E,A             ; Save new digit
        JP      EXPLP           ; Look for another digit

LINEIN: PUSH    HL              ; Save code string address
        LD      HL,INMSG        ; Output " in "
        CALL    PRS             ; Output string at HL
        POP     HL              ; Restore code string address
PRNTHL: EX      DE,HL           ; Code string address to DE
        XOR     A
        LD      B,80H+24        ; 24 bits
        CALL    RETINT          ; Return the integer
        LD      HL,PRNUMS       ; Print number string
        PUSH    HL              ; Save for return
NUMASC: LD      HL,PBUFF        ; Convert number to ASCII
        PUSH    HL              ; Save for return
        CALL    TSTSGN          ; Test sign of FPREG
        LD      (HL)," "        ; Space at start
        JP      P,SPCFST        ; Positive - Space to start
        LD      (HL),"-"        ; "-" sign at start
SPCFST: INC     HL              ; First byte of number
        LD      (HL),"0"        ; "0" if zero
        JP      Z,JSTZER        ; Return "0" if zero
        PUSH    HL              ; Save buffer address
        CALL    M,INVSGN        ; Negate FPREG if negative
        XOR     A               ; Zero A
        PUSH    AF              ; Save it
        CALL    RNGTST          ; Test number is in range
SIXDIG: LD      BC,9143H        ; BCDE - 99999.9
        LD      DE,4FF8H
        CALL    CMPNUM          ; Compare numbers
        OR      A
        JP      PO,INRNG        ; > 99999.9 - Sort it out
        POP     AF              ; Restore count
        CALL    MULTEN          ; Multiply by ten
        PUSH    AF              ; Re-save count
        JP      SIXDIG          ; Test it again

GTSIXD: CALL    DIV10           ; Divide by 10
        POP     AF              ; Get count
        INC     A               ; Count divides
        PUSH    AF              ; Re-save count
        CALL    RNGTST          ; Test number is in range
INRNG:  CALL    ROUND           ; Add 0.5 to FPREG
        INC     A
        CALL    FPINT           ; F.P to integer
        CALL    FPBCDE          ; Move BCDE to FPREG
        LD      BC,0306H        ; 1E+06 to 1E-03 range
        POP     AF              ; Restore count
        ADD     A,C             ; 6 digits before point
        INC     A               ; Add one
        JP      M,MAKNUM        ; Do it in "E" form if < 1E-02
        CP      6+1+1           ; More than 999999 ?
        JP      NC,MAKNUM       ; Yes - Do it in "E" form
        INC     A               ; Adjust for exponent
        LD      B,A             ; Exponent of number
        LD      A,2             ; Make it zero after

MAKNUM: DEC     A               ; Adjust for digits to do
        DEC     A
        POP     HL              ; Restore buffer address
        PUSH    AF              ; Save count
        LD      DE,POWERS       ; Powers of ten
        DEC     B               ; Count digits before point
        JP      NZ,DIGTXT       ; Not zero - Do number
        LD      (HL),"."        ; Save point
        INC     HL              ; Move on
        LD      (HL),"0"        ; Save zero
        INC     HL              ; Move on
DIGTXT: DEC     B               ; Count digits before point
        LD      (HL),"."        ; Save point in case
        CALL    Z,INCHL         ; Last digit - move on
        PUSH    BC              ; Save digits before point
        PUSH    HL              ; Save buffer address
        PUSH    DE              ; Save powers of ten
        CALL    BCDEFP          ; Move FPREG to BCDE
        POP     HL              ; Powers of ten table
        LD      B, "0"-1        ; ASCII "0" - 1
TRYAGN: INC     B               ; Count subtractions
        LD      A,E             ; Get LSB
        SUB     (HL)            ; Subtract LSB
        LD      E,A             ; Save LSB
        INC     HL
        LD      A,D             ; Get NMSB
        SBC     A,(HL)          ; Subtract NMSB
        LD      D,A             ; Save NMSB
        INC     HL
        LD      A,C             ; Get MSB
        SBC     A,(HL)          ; Subtract MSB
        LD      C,A             ; Save MSB
        DEC     HL              ; Point back to start
        DEC     HL
        JP      NC,TRYAGN       ; No overflow - Try again
        CALL    PLUCDE          ; Restore number
        INC     HL              ; Start of next number
        CALL    FPBCDE          ; Move BCDE to FPREG
        EX      DE,HL           ; Save point in table
        POP     HL              ; Restore buffer address
        LD      (HL),B          ; Save digit in buffer
        INC     HL              ; And move on
        POP     BC              ; Restore digit count
        DEC     C               ; Count digits
        JP      NZ,DIGTXT       ; More - Do them
        DEC     B               ; Any decimal part?
        JP      Z,DOEBIT        ; No - Do "E" bit
SUPTLZ: DEC     HL              ; Move back through buffer
        LD      A,(HL)          ; Get character
        CP      "0"             ; "0" character?
        JP      Z,SUPTLZ        ; Yes - Look back for more
        CP      "."             ; A decimal point?
        CALL    NZ,INCHL        ; Move back over digit

DOEBIT: POP     AF              ; Get "E" flag
        JP      Z,NOENED        ; No "E" needed - End buffer
        LD      (HL),"E"        ; Put "E" in buffer
        INC     HL              ; And move on
        LD      (HL),"+"        ; Put '+' in buffer
        JP      P,OUTEXP        ; Positive - Output exponent
        LD      (HL),"-"        ; Put "-" in buffer
        CPL                     ; Negate exponent
        INC     A
OUTEXP: LD      B,"0"-1         ; ASCII "0" - 1
EXPTEN: INC     B               ; Count subtractions
        SUB     10              ; Tens digit
        JP      NC,EXPTEN       ; More to do
        ADD     A,"0"+10        ; Restore and make ASCII
        INC     HL              ; Move on
        LD      (HL),B          ; Save MSB of exponent
JSTZER: INC     HL              ;
        LD      (HL),A          ; Save LSB of exponent
        INC     HL
NOENED: LD      (HL),C          ; Mark end of buffer
        POP     HL              ; Restore code string address
        RET

RNGTST: LD      BC,9474H        ; BCDE = 999999.
        LD      DE,23F7H
        CALL    CMPNUM          ; Compare numbers
        OR      A
        POP     HL              ; Return address to HL
        JP      PO,GTSIXD       ; Too big - Divide by ten
        JP      (HL)            ; Otherwise return to caller

HALF:   DB      00H,00H,00H,80H ; 0.5

POWERS: DB      0A0H,086H,001H  ; 100000
        DB      010H,027H,000H  ;  10000
        DB      0E8H,003H,000H  ;   1000
        DB      064H,000H,000H  ;    100
        DB      00AH,000H,000H  ;     10
        DB      001H,000H,000H  ;      1

NEGAFT: LD  HL,INVSGN           ; Negate result
        EX      (SP),HL         ; To be done after caller
        JP      (HL)            ; Return to caller

SQR:    CALL    STAKFP          ; Put value on stack
        LD      HL,HALF         ; Set power to 1/2
        CALL    PHLTFP          ; Move 1/2 to FPREG

POWER:  POP     BC              ; Get base
        POP     DE
        CALL    TSTSGN          ; Test sign of power
        LD      A,B             ; Get exponent of base
        JP      Z,EXP           ; Make result 1 if zero
        JP      P,POWER1        ; Positive base - Ok
        OR      A               ; Zero to negative power?
        JP      Z,DZERR         ; Yes - ?/0 Error
POWER1: OR      A               ; Base zero?
        JP      Z,SAVEXP        ; Yes - Return zero
        PUSH    DE              ; Save base
        PUSH    BC
        LD      A,C             ; Get MSB of base
        OR      01111111B       ; Get sign status
        CALL    BCDEFP          ; Move power to BCDE
        JP      P,POWER2        ; Positive base - Ok
        PUSH    DE              ; Save power
        PUSH    BC
        CALL    INT             ; Get integer of power
        POP     BC              ; Restore power
        POP     DE
        PUSH    AF              ; MSB of base
        CALL    CMPNUM          ; Power an integer?
        POP     HL              ; Restore MSB of base
        LD      A,H             ; but don't affect flags
        RRA                     ; Exponent odd or even?
POWER2: POP     HL              ; Restore MSB and exponent
        LD      (FPREG+2),HL    ; Save base in FPREG
        POP     HL              ; LSBs of base
        LD      (FPREG),HL      ; Save in FPREG
        CALL    C,NEGAFT        ; Odd power - Negate result
        CALL    Z,INVSGN        ; Negative base - Negate it
        PUSH    DE              ; Save power
        PUSH    BC
        CALL    LOG             ; Get LOG of base
        POP     BC              ; Restore power
        POP     DE
        CALL    FPMULT          ; Multiply LOG by power

EXP:    CALL    STAKFP          ; Put value on stack
        LD      BC,08138H       ; BCDE = 1/Ln(2)
        LD      DE,0AA3BH
        CALL    FPMULT          ; Multiply value by 1/LN(2)
        LD      A,(FPEXP)       ; Get exponent
        CP      80H+8           ; Is it in range?
        JP      NC,OVTST1       ; No - Test for overflow
        CALL    INT             ; Get INT of FPREG
        ADD     A,80H           ; For excess 128
        ADD     A,2             ; Exponent > 126?
        JP      C,OVTST1        ; Yes - Test for overflow
        PUSH    AF              ; Save scaling factor
        LD      HL,UNITY        ; Point to 1.
        CALL    ADDPHL          ; Add 1 to FPREG
        CALL    MULLN2          ; Multiply by LN(2)
        POP     AF              ; Restore scaling factor
        POP     BC              ; Restore exponent
        POP     DE
        PUSH    AF              ; Save scaling factor
        CALL    SUBCDE          ; Subtract exponent from FPREG
        CALL    INVSGN          ; Negate result
        LD      HL,EXPTAB       ; Coefficient table
        CALL    SMSER1          ; Sum the series
        LD      DE,0            ; Zero LSBs
        POP     BC              ; Scaling factor
        LD      C,D             ; Zero MSB
        JP      FPMULT          ; Scale result to correct value

EXPTAB: DB      8                       ; Table used by EXP
        DB      040H,02EH,094H,074H     ; -1/7! (-1/5040)
        DB      070H,04FH,02EH,077H     ;  1/6! ( 1/720)
        DB      06EH,002H,088H,07AH     ; -1/5! (-1/120)
        DB      0E6H,0A0H,02AH,07CH     ;  1/4! ( 1/24)
        DB      050H,0AAH,0AAH,07EH     ; -1/3! (-1/6)
        DB      0FFH,0FFH,07FH,07FH     ;  1/2! ( 1/2)
        DB      000H,000H,080H,081H     ; -1/1! (-1/1)
        DB      000H,000H,000H,081H     ;  1/0! ( 1/1)

SUMSER: CALL    STAKFP          ; Put FPREG on stack
        LD      DE,MULT         ; Multiply by "X"
        PUSH    DE              ; To be done after
        PUSH    HL              ; Save address of table
        CALL    BCDEFP          ; Move FPREG to BCDE
        CALL    FPMULT          ; Square the value
        POP     HL              ; Restore address of table
SMSER1: CALL    STAKFP          ; Put value on stack
        LD      A,(HL)          ; Get number of coefficients
        INC     HL              ; Point to start of table
        CALL    PHLTFP          ; Move coefficient to FPREG
        DB      06H             ; Skip "POP AF"
SUMLP:  POP     AF              ; Restore count
        POP     BC              ; Restore number
        POP     DE
        DEC     A               ; Cont coefficients
        RET     Z               ; All done
        PUSH    DE              ; Save number
        PUSH    BC
        PUSH    AF              ; Save count
        PUSH    HL              ; Save address in table
        CALL    FPMULT          ; Multiply FPREG by BCDE
        POP     HL              ; Restore address in table
        CALL    LOADFP          ; Number at HL to BCDE
        PUSH    HL              ; Save address in table
        CALL    FPADD           ; Add coefficient to FPREG
        POP     HL              ; Restore address in table
        JP      SUMLP           ; More coefficients

RND:    CALL    TSTSGN          ; Test sign of FPREG
        LD      HL,SEED+2       ; Random number seed
        JP      M,RESEED        ; Negative - Re-seed
        LD      HL,LSTRND       ; Last random number
        CALL    PHLTFP          ; Move last RND to FPREG
        LD      HL,SEED+2       ; Random number seed
        RET     Z               ; Return if RND(0)
        ADD     A,(HL)          ; Add (SEED)+2)
        AND     00000111B       ; 0 to 7
        LD      B,0
        LD      (HL),A          ; Re-save seed
        INC     HL              ; Move to coefficient table
        ADD     A,A             ; 4 bytes
        ADD     A,A             ; per entry
        LD      C,A             ; BC = Offset into table
        ADD     HL,BC           ; Point to coefficient
        CALL    LOADFP          ; Coefficient to BCDE
        CALL    FPMULT  ;       ; Multiply FPREG by coefficient
        LD      A,(SEED+1)      ; Get (SEED+1)
        INC     A               ; Add 1
        AND     00000011B       ; 0 to 3
        LD      B,0
        CP      1               ; Is it zero?
        ADC     A,B             ; Yes - Make it 1
        LD      (SEED+1),A      ; Re-save seed
        LD      HL,RNDTAB-4     ; Addition table
        ADD     A,A             ; 4 bytes
        ADD     A,A             ; per entry
        LD      C,A             ; BC = Offset into table
        ADD     HL,BC           ; Point to value
        CALL    ADDPHL          ; Add value to FPREG
RND1:   CALL    BCDEFP          ; Move FPREG to BCDE
        LD      A,E             ; Get LSB
        LD      E,C             ; LSB = MSB
        XOR     01001111B       ; Fiddle around
        LD      C,A             ; New MSB
        LD      (HL),80H        ; Set exponent
        DEC     HL              ; Point to MSB
        LD      B,(HL)          ; Get MSB
        LD      (HL),80H        ; Make value -0.5
        LD      HL,SEED         ; Random number seed
        INC     (HL)            ; Count seed
        LD      A,(HL)          ; Get seed
        SUB     171             ; Do it modulo 171
        JP      NZ,RND2         ; Non-zero - Ok
        LD      (HL),A          ; Zero seed
        INC     C               ; Fillde about
        DEC     D               ; with the
        INC     E               ; number
RND2:   CALL    BNORM           ; Normalise number
        LD      HL,LSTRND       ; Save random number
        JP      FPTHL           ; Move FPREG to last and return

RESEED: LD      (HL),A          ; Re-seed random numbers
        DEC     HL
        LD      (HL),A
        DEC     HL
        LD      (HL),A
        JP      RND1            ; Return RND seed

RNDTAB: DB      068H,0B1H,046H,068H     ; Table used by RND
        DB      099H,0E9H,092H,069H
        DB      010H,0D1H,075H,068H

COS:    LD      HL,HALFPI       ; Point to PI/2
        CALL    ADDPHL          ; Add it to PPREG
SIN:    CALL    STAKFP          ; Put angle on stack
        LD      BC,8349H        ; BCDE = 2 PI
        LD      DE,0FDBH
        CALL    FPBCDE          ; Move 2 PI to FPREG
        POP     BC              ; Restore angle
        POP     DE
        CALL    DVBCDE          ; Divide angle by 2 PI
        CALL    STAKFP          ; Put it on stack
        CALL    INT             ; Get INT of result
        POP     BC              ; Restore number
        POP     DE
        CALL    SUBCDE          ; Make it 0 <= value < 1
        LD      HL,QUARTR       ; Point to 0.25
        CALL    SUBPHL          ; Subtract value from 0.25
        CALL    TSTSGN          ; Test sign of value
        SCF                     ; Flag positive
        JP      P,SIN1          ; Positive - Ok
        CALL    ROUND           ; Add 0.5 to value
        CALL    TSTSGN          ; Test sign of value
        OR      A               ; Flag negative
SIN1:   PUSH    AF              ; Save sign
        CALL    P,INVSGN        ; Negate value if positive
        LD      HL,QUARTR       ; Point to 0.25
        CALL    ADDPHL          ; Add 0.25 to value
        POP     AF              ; Restore sign
        CALL    NC,INVSGN       ; Negative - Make positive
        LD      HL,SINTAB       ; Coefficient table
        JP      SUMSER          ; Evaluate sum of series

HALFPI: DB      0DBH,00FH,049H,081H     ; 1.5708 (PI/2)

QUARTR: DB      000H,000H,000H,07FH     ; 0.25

SINTAB: DB      5                       ; Table used by SIN
        DB      0BAH,0D7H,01EH,086H     ; 39.711
        DB      064H,026H,099H,087H     ;-76.575
        DB      058H,034H,023H,087H     ; 81.602
        DB      0E0H,05DH,0A5H,086H     ;-41.342
        DB      0DAH,00FH,049H,083H     ;  6.2832

TAN:    CALL    STAKFP          ; Put angle on stack
        CALL    SIN             ; Get SIN of angle
        POP     BC              ; Restore angle
        POP     HL
        CALL    STAKFP          ; Save SIN of angle
        EX      DE,HL           ; BCDE = Angle
        CALL    FPBCDE          ; Angle to FPREG
        CALL    COS             ; Get COS of angle
        JP      DIV             ; TAN = SIN / COS

ATN:    CALL    TSTSGN          ; Test sign of value
        CALL    M,NEGAFT        ; Negate result after if -ve
        CALL    M,INVSGN        ; Negate value if -ve
        LD      A,(FPEXP)       ; Get exponent
        CP      81H             ; Number less than 1?
        JP      C,ATN1          ; Yes - Get arc tangnt
        LD      BC,8100H        ; BCDE = 1
        LD      D,C
        LD      E,C
        CALL    DVBCDE          ; Get reciprocal of number
        LD      HL,SUBPHL       ; Sub angle from PI/2
        PUSH    HL              ; Save for angle > 1
ATN1:   LD      HL,ATNTAB       ; Coefficient table
        CALL    SUMSER          ; Evaluate sum of series
        LD      HL,HALFPI       ; PI/2 - angle in case > 1
        RET                     ; Number > 1 - Sub from PI/2

ATNTAB: DB      9                       ; Table used by ATN
        DB      04AH,0D7H,03BH,078H     ; 1/17
        DB      002H,06EH,084H,07BH     ;-1/15
        DB      0FEH,0C1H,02FH,07CH     ; 1/13
        DB      074H,031H,09AH,07DH     ;-1/11
        DB      084H,03DH,05AH,07DH     ; 1/9
        DB      0C8H,07FH,091H,07EH     ;-1/7
        DB      0E4H,0BBH,04CH,07EH     ; 1/5
        DB      06CH,0AAH,0AAH,07FH     ;-1/3
        DB      000H,000H,000H,081H     ; 1/1

CASFFW: CALL    FLPLED          ; Turn on cassette
        LD      B,0             ; Set 1 second delay
DELAYB: CALL    DELAY           ; Wait a bit
        DEC     B               ; Count
        JP      NZ,DELAYB       ; More delay needed
        RET

CASFF:  JP      FLPLED          ; Flip tape LED

ARET:   RET                     ; A RETurn instruction

CONMON: PUSH    HL              ; Output character to screen
        PUSH    BC              ;
        PUSH    DE              ;
        PUSH    AF              ;
        CALL    MONTST          ; See if NAS-SYS
        JP      NZ,NASOUT       ; NAS-SYS - Output ASCII
        POP     AF              ; Get character
        PUSH    AF              ; And re-save
        CP      LF              ; ASCII Line feed?
        JP      Z,IGCHR         ; Yes - Ignore it
        CP      BKSP            ; ASCII back space?
        JP      NZ,CONOT1       ; No - Test for CR
        LD      A,TBS           ; NASBUG back space
CONOT1: CP      CR              ; ASCII CR?
        JP      NZ,OUTCHR       ; No - Output character
        LD      A,TCR           ; NASBUG CR
        JP      OUTCHR          ; Output it

NASOUT: POP     AF              ; Get character
        PUSH    AF              ; And re-save
OUTCHR: CALL    MONOUT          ; Output it
IGCHR:  POP     AF              ; Restore character
        POP     DE              ;
        POP     BC              ;
        POP     HL              ;
        RET

GETINP: PUSH    HL              ; Get an input character
        PUSH    BC              ;
        PUSH    DE              ;
        CALL    MONTST          ; See if NAS-SYS
        JP      Z,GETTIN        ; "T" monitor - Get input
        DW      _BLNK
        JP      CONVIN          ; Convert to ASCII

GETTIN: CALL    TIN             ; "T" input a character
        JP      NC,GETTIN       ; No input - wait
CONVIN: CP      TBS             ; NASBUG back space?
        JP      NZ,CNVIN1       ; No - Test for break
        LD      A,BKSP          ; ASCII back space
CNVIN1: CP      TBRK            ; NASBUG break?
        JP      NZ,CNVIN2       ; No - Test for control Z
        LD      A,CTRLC         ; Control C
CNVIN2: CP      CTRLZ           ; ^Z?
        JP      NZ,CNVIN3       ; No - Test for escape
        LD      A,DEL           ; Delete
CNVIN3: CP      ESC             ; "ESC" ?
        JP      NZ,CNVIN4       ; No - Test for CR
        LD      A,CTRLC         ; Control C
CNVIN4: CP      TCR             ; NASBUG CR?
        JP      NZ,CNVIN5       ; No - Return character
        LD      A,CR            ; ASCII CR
CNVIN5: POP     DE
        POP     BC
        POP     HL
        RET

CHKBRK: XOR     A               ; Check for break
        CALL    SFTENT          ; Test for shift/enter
        JP      Z,TBRK2         ; Yes - Test for second break
        LD      A,(BRKFLG)      ; Get break flag
        OR      A               ; Break flag set?
        JP      NZ,TBRK2        ; Yes - Test for second break
        XOR     A               ; Flag no break
        RET

TBRK2:  CALL    BREAK2          ; Second break?
        LD      A,-1            ; Flag break
        RET

GUART:  IN      A,(UARTS)       ; Get UART status
        RLA                     ; Any data ready?
        JP      NC,GUART        ; No - wait until there is
        IN      A,(UARTD)       ; Get data from UART
        RET

UARTOT: OUT     (UARTD),A       ; Send data to UART
URTOLP: IN      A,(UARTS)       ; Get status
        ADD     A,A             ; Byte sent?
        RET     M               ; Yes - Return
        JP      URTOLP          ; Keep waiting

SUART:  PUSH    AF              ; Save A
        CALL    UARTOT          ; Send it to UART
        POP     AF              ; Restore A
        RET

        NOP
        NOP

SFTENT: PUSH    HL              ; Test for Shift Enter from KBD
        LD      A,00000010B     ; Reset KBD counter mask
        LD      HL,PORT0        ; Get old contents
        XOR     (HL)            ; Toggle bit
        OUT     (0),A           ; Reset KBD counter
        XOR     00000001B       ; Toggle bit
        OUT     (0),A           ; Next row
        XOR     00000010B
        OUT     (0),A           ; Clear "clear" strobe
        LD      A,(HL)          ; Get old value
        OUT     (0),A           ; Original contents
        ADD     HL,DE           ; ?? WHAT ??
        POP     HL              ; Restore HL
        IN      A,(0)           ; Read in row
        AND     00010010B       ; Mask SHIFT and ENTER
        RET

CLS:    CALL    MONTST          ; See if NAS-SYS
        JP      Z,TCLS          ; "T" CLS
        LD      A,CS            ; ASCII Clear screen
        JP      CONMON          ; Output character

TCLS:   LD      A,TCS           ; NASBUG Clear screen
        JP      CONMON          ; Output character

DELAY:  XOR     A               ; Delay routine
DELAY1: PUSH    AF              ; PUSHes and POPs delay
        POP     AF
        PUSH    AF
        POP     AF
        DEC     A               ; Count delays
        JP      NZ,DELAY1       ; More delay
        RET

WIDTH:  CALL    GETINT          ; Get integer 0-255
        LD      A,E             ; Width to A
        LD      (LWIDTH),A      ; Set width
        RET

LINES:  CALL    GETNUM          ; Get a number
        CALL    DEINT           ; Get integer -32768 to 32767
        LD      (LINESC),DE     ; Set lines counter
        LD      (LINESN),DE     ; Set lines number
        RET

DEEK:   CALL    DEINT           ; Get integer -32768 to 32767
        PUSH    DE              ; Save number
        POP     HL              ; Number to HL
        LD      B,(HL)          ; Get LSB of contents
        INC     HL
        LD      A,(HL)          ; Get MSB of contents
        JP      ABPASS          ; Return integer AB

DOKE:   CALL    GETNUM          ; Get a number
        CALL    DEINT           ; Get integer -32768 to 32767
        PUSH    DE              ; Save address
        CALL    CHKSYN          ; Make sure "," follows
        DB      ","
        CALL    GETNUM          ; Get a number
        CALL    DEINT           ; Get integer -32768 to 32767
        EX      (SP),HL         ; Save value,get address
        LD      (HL),E          ; Save LSB of value
        INC     HL
        LD      (HL),D          ; Save MSB of value
        POP     HL              ; Restore code string address
        RET

JJUMP1: DI                      ; Disable interrupts
        LD      IX,-1           ; Flag cold start
        JP      CSTART          ; Go and initialise

SCREEN: CALL    GETINT          ; Get integer 0 to 255
        PUSH    AF              ; Save column
        CALL    CHKSYN          ; Make sure "," follows
        DB      ","
        CALL    GETINT          ; Get integer 0 to 255
        POP     BC              ; Column to B
        PUSH    HL              ; Save code string address
        PUSH    BC              ; Save column
        CALL    SCRADR          ; Calculate screen address
        PUSH    HL              ; Save screen address
        CALL    MONTST          ; See if NAS-SYS
        JP      Z,TMNCUR        ; "T" monitor - "T" cursor
        POP     HL              ; Restore screen address
        LD      (CURSOR),HL     ; Set new cursor position
        POP     HL              ; Rstore code string address
        RET

TMNCUR: LD      HL,(TCUR)       ; Get address or cursor
        LD      (HL)," "        ; Remove cursor
        POP     HL              ; Get new cursor address
        LD      (TCUR),HL       ; Set new cursor
        LD      (HL),"_"        ; Put it on screen
        POP     HL              ; Restore code string address
        RET

SCRADR: LD      HL,VDU+10-65    ; SCREEN VDU address (0,0)
        LD      B,0
        LD      C,A             ; Line to BC
        OR      A               ; Test it
        JP      Z,FCERR         ; Zero - ?FC Error
        CP      16+1            ; 16 lines
        JP      P,FCERR         ; > 16 - ?FC Error
        POP     DE              ; RETurn address
        POP     AF              ; Get column
        PUSH    DE              ; Re-save RETurn
        LD      D,0
        LD      E,A             ; Column to DE
        OR      A               ; Test it
        JP      Z,FCERR         ; Zero - ?FC Error
        CP      48+1            ; 48 characters per line
        JP      P,FCERR         ; > 48 - ?FC Error
        ADD     HL,DE           ; Add column to address
        LD      D,0
        LD      E,C             ; Line to DE
        LD      B,64            ; 64 Bytes per line
ADD64X: ADD     HL,DE           ; Add line
        DJNZ    ADD64X          ; SIXTY FOUR TIMES!!!
        RET

FLPLED: CALL    MONTST          ; See if NAS-SYS
        JP      Z,TMFLP         ; "T" MFLP
        DW      _MFLP
        RET

TMFLP:  JP      MFLP            ; Flip drive LED

MONOUT: PUSH    AF              ; Save character
        CALL    MONTST          ; See if NAS-SYS
        JP      Z,TMNOUT        ; "T" output
        POP     AF              ; Restore character
        DB      _ROUT           ; Output it
        RET

TMNOUT: POP     AF              ; Restore character
        JP      TOUT            ; "T" output

BREAK2: LD      A,(BRKFLG)      ; Break flag set?
        JP      NZ,RETCTC       ; Yes - Return ^C
        CALL    MONTST          ; See if NAS-SYS
        JP      Z,TCHINP        ; Get "T" character input
        DW      _RIN            ; Scan for a character
        RET

TCHINP: JP      TIN             ; "T" input a character

RETCTC: LD      A,0             ; Clear Break flag
        LD      (BRKFLG),A
        LD      A,CTRLC         ; Return ^C
        RET

MONTST: LD      A,(MONSTT+1)    ; "T" monitor or NAS-SYS?
        CP      33H             ; 31 00 10 / 31 33 0C
        RET

SAVE:   CALL    FLPLED          ; Flip tape LED
        CALL    MONTST          ; See if NAS-SYS
        JP      Z,TSAVE         ; "T" save
        DW      _WRIT           ; Save program
        RET

TSAVE:  LD      A,(MONTYP)      ; "T2" or "T4" (FLAGS!!!)
        JP      Z,T4WR          ; T4 Write
        JP      T2DUMP          ; T2 Dump

MONLD:  CALL    FLPLED          ; Flip tape LED
        CALL    MONTST          ; See if NAS-SYS
        JP      Z,TLOAD         ; "T" load
        LD      A,"R"           ; Set READ
        LD      (ARGN),A
        DW      _READ           ; Load program
        RET

TLOAD:  LD      A,(MONTYP)      ; "T2" or "T4" (FLAGS!!!)
        JP      Z,T4READ        ; T4 Read
        JP      T2DUMP          ; T2 Dump ??????????

MONITR: CALL    MONTST          ; See if NAS-SYS
        JP      Z,MONSTT        ; Jump to zero if "T"
        DW      _MRET           ; Return to NAS-SYS

MONVE:  CALL    FLPLED          ; Flip tape LED
        CALL    MONTST          ; See if NAS-SYS
        JP      Z,FCERR         ; Verify not available on "T"
        LD      A,"V"           ; Set VERIFY
        LD      (ARGN),A
        DW      _VRFY           ; Verify tape
        RET

INITST: LD      A,0             ; Clear break flag
        LD      (BRKFLG),A
        CALL    MONTST          ; See if NAS-SYS
        JP      Z,INIT          ; "T" - No NMI vector
        LD      HL,BREAK        ; Set NMI gives break
        LD      (NMI),HL
        PUSH    IX              ; Get start up condition
        POP     AF              ; "Z" set if cold , Else clear
        OR      A               ; "Cold" or "Cool" start?
        JP      NZ,INIT         ; "Cool" don't init NAS-SYS
        LD      B,15            ; Delay for keyboard clear
        CALL    DELAYB          ; Allow time for key release
        CALL    STMON           ; Initialise NAS-SYS
        JP      INIT            ; Initialise BASIC

BREAK:  PUSH    AF              ; Save character
        LD      A,-1
        LD      (BRKFLG),A      ; Flag break
        POP     AF              ; Restore character
ARETN:  RETN                    ; Return from NMI

        NOP

INLINE: DW      _INLN           ; Get an input line
        PUSH    DE              ; Save cursor address
        PUSH    DE              ; Cursor address to HL
        POP     HL
        LD      DE,48-1         ; Length of line-1
        ADD     HL,DE           ; Point to end of line
ENDLIN: LD      A,(HL)          ; Get end of line
        CP      " "             ; Space?
        JP      NZ,LINTBF       ; No - Copy to buffer
        DEC     E               ; Back 1 character
        LD      A,0             ; Wasteful test on E
        OR      E
        JP      Z,LINTBF        ; Start of line - Copy it
        DEC     HL              ; Back 1 character
        JP      ENDLIN          ; Keep looking for end

LINTBF: PUSH    DE              ; Line length to BC
        POP     BC
        INC     BC              ; Length +1
        LD      DE,BUFFER       ; Input buffer
        POP     HL              ; Line start
        PUSH    BC              ; Save length
        LDIR                    ; Move line to buffer
        LD      A,0
        LD      (DE),A          ; Mark end of buffer with 00
        POP     BC              ; Restore buffer length
        LD      B,C             ; Length returned in B
        LD      HL,BUFFER-1     ; Point to start of buffer-1
        RET

GETXYA: CALL    CHKSYN          ; Make sure "(" follows
        DB      "("
        CALL    GETNUM          ; Get a number
        CALL    DEINT           ; Get integer -32768 to 32767
        PUSH    DE              ; Save "X"
        CALL    CHKSYN          ; Make sure "," follows
        DB      ","
        CALL    GETNUM          ; Get a number
        CALL    CHKSYN          ; Make sure ")" follows
        DB      ")"
        CALL    DEINT           ; Get integer -32768 to 32767
        PUSH    HL              ; Save code string address
        POP     IY              ; In IY
        CALL    XYPOS           ; Address and bit mask
        PUSH    AF              ; Save mask
        CALL    ADJCOL          ; Adjust column
        CALL    SCRADR          ; Get VDU address
        POP     AF              ; Restore bit mask
        LD      B,11000000B     ; Block graphics base
        OR      B               ; Set bits 7 & 6
        RET

SETB:   CALL    GETXYA          ; Get co-ords and VDU address
        PUSH    AF              ; Save bit mask
        LD      A,(HL)          ; Get character from screen
        CP      11000000B       ; Is it a block graphic?
        JP      NC,SETOR        ; Yes - OR new bit
        POP     AF              ; Restore bit mask
PUTBIT: LD      (HL),A          ; Put character on screen
RESCSA: PUSH    IY              ; Restore code string address
        POP     HL              ; From IY
        RET

SETOR:  POP     BC              ; Restore bit mask
        OR      B               ; Merge the bits
        JP      PUTBIT          ; Save on screen

RESETB: CALL    GETXYA          ; Get co-ords and VDU address
        PUSH    AF              ; Save bit mask
        LD      A,(HL)          ; Get byte from screen
        CP      11000000B       ; Is it a block graphic?
        JP      C,NORES         ; No - Leave it
        LD      B,00111111B     ; Six bits per block
        AND     B               ; Clear bits 7 & 6
        POP     BC              ; Get bit mask
        AND     B               ; Test for common bit
        JP      Z,RESCSA        ; None - Leave it
        LD      A,(HL)          ; Get byte from screen
        AND     00111111B       ; Isolate bit
        XOR     B               ; Clear that bit
        CP      11000000B       ; Is it a graphic blank?
        JP      NZ,PUTBIT       ; No - Save character
        LD      A," "           ; Put a space there
        JP      PUTBIT          ; Save the space

NORES:  POP     BC              ; Drop bit mask
        JP      RESCSA          ; Restore code string address

POINTB: CALL    GETXYA          ; Get co-ords and VDU address
        LD      B,(HL)          ; Get character from screen
        CALL    TSTBIT          ; Test if bit is set
        JP      NZ,POINT0       ; Different - Return zero
        LD      A,0
        LD      B,1             ; Integer AB = 1
POINTX: POP     HL              ; Drop return
        PUSH    IY              ; PUSH code string address
        LD      DE,RETNUM       ; To return a number
        PUSH    DE              ; Save for return
        JP      ABPASS          ; Return integer AB

POINT0: LD      B,0             ; Set zero
        JP      POINTX          ; Return value

XYPOS:  POP     BC              ; Get return address
        POP     HL              ; Get column
        PUSH    HL              ; And re-save
        PUSH    BC              ; Put back return address
        LD      A,L             ; Get column
        LD      B,00000001B     ; 2 bits per character
        AND     B               ; Odd or even bit
        PUSH    AF              ; Save it
        PUSH    DE              ; Get row
        POP     HL              ; to HL
        LD      DE,0            ; Zero line count
        LD      BC,3            ; 3 blocks per line
        INC     HL
DIV3LP: SBC     HL,BC           ; Subtract 3
        INC     DE              ; Count the subtractions
        JP      Z,DIV3EX        ; Exactly - Exit
        JP      P,DIV3LP        ; More to do

DIV3EX: ADD     HL,BC           ; Restore number
        POP     AF              ; Restore column and odd/even
        OR      A               ; Set flags (NZ or Z)
        LD      A,L             ; Get remainder from /3
        JP      Z,NOREMD        ; No remainder
        ADD     A,3             ; Adjust remainder
NOREMD: LD      B,A             ; Bit number+1 to B
        LD      A,00000001B     ; Bit to rotate
SHFTBT: RLCA                    ; Shift bit left
        DJNZ    SHFTBT          ; Count shifts
        RRA                     ; Restore correct place
        RET

ADJCOL: POP     BC              ; Restore return address
        POP     AF              ; Get bit mask
        POP     HL              ; Get column
        PUSH    AF              ; Re-save but mask
        LD      A,L             ; Get column
        RRA                     ; Divide by 2
        ADD     A,1             ; Start at column 1
        AND     00111111B       ; 0 to 63
        LD      H,A             ; Save column in H
        PUSH    HL              ; Re-save column
        PUSH    BC              ; Put back return
        LD      A,E             ; Get row
        RET

SMOTOR: CALL    CASFF           ; Flip tape drive
        LD      A,(HL)          ; Get byte
        RET

JPLDSV: LD      A,(BRKLIN)      ; CLOAD or CSAVE?
        CP      -1
        JP      NZ,SNDHDR       ; CSAVE - Send header
        JP      GETHDR          ; CLOAD - Get header

CRLIN1: CALL    PRNTCR          ; Output CRLF
        JP      GETLIN          ; Get an input line

CRLIN:  CALL    PRNTCR          ; Output CRLF
        JP      GETLIN          ; Get an input line

TSTBIT: PUSH    AF              ; Save bit mask
        AND     B               ; Get common bits
        POP     BC              ; Restore bit mask
        CP      B               ; Same bit set?
        LD      A,0             ; Return 0 in A
        RET

OUTNCR: CALL    OUTC            ; Output character in A
        JP      PRNTCR          ; Output CRLF

JJUMP:  JP      JJUMP1          ; "Cool" start

ZJUMP:  JP      BRKRET          ; Warm start
        END
 */