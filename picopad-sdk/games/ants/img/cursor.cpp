#include "picopad.h"

// format: 4-bit paletted pixel graphics
// image width: 16 pixels
// image height: 30 lines
// image pitch: 8 bytes
const u16 CursorImg_Pal[3] __attribute__ ((aligned(4))) = {
	0xA158, 0xFFFF, 0x0000, 
};

const u8 CursorImg[240] __attribute__ ((aligned(4))) = {
	0x00, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x22, 0x11, 0x22, 0x20, 0x00, 
	0x00, 0x00, 0x21, 0x12, 0x11, 0x21, 0x12, 0x00, 0x00, 0x00, 0x21, 0x12, 0x11, 0x21, 0x12, 0x00, 
	0x00, 0x00, 0x21, 0x12, 0x11, 0x21, 0x12, 0x00, 0x00, 0x00, 0x21, 0x12, 0x11, 0x21, 0x12, 0x20, 
	0x00, 0x00, 0x21, 0x12, 0x11, 0x21, 0x12, 0x12, 0x00, 0x00, 0x21, 0x12, 0x11, 0x21, 0x12, 0x12, 
	0x02, 0x00, 0x21, 0x12, 0x11, 0x21, 0x12, 0x12, 0x21, 0x20, 0x21, 0x12, 0x11, 0x21, 0x12, 0x12, 
	0x21, 0x12, 0x21, 0x12, 0x11, 0x21, 0x12, 0x12, 0x21, 0x11, 0x21, 0x12, 0x11, 0x21, 0x12, 0x12, 
	0x02, 0x11, 0x21, 0x12, 0x11, 0x21, 0x12, 0x12, 0x02, 0x11, 0x21, 0x11, 0x11, 0x11, 0x11, 0x12, 
	0x02, 0x11, 0x21, 0x11, 0x11, 0x11, 0x11, 0x12, 0x02, 0x11, 0x21, 0x11, 0x11, 0x11, 0x11, 0x12, 
	0x02, 0x12, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0x02, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 
	0x00, 0x21, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0x00, 0x21, 0x11, 0x11, 0x11, 0x11, 0x11, 0x20, 
	0x00, 0x21, 0x11, 0x11, 0x11, 0x11, 0x11, 0x20, 0x00, 0x02, 0x11, 0x11, 0x11, 0x11, 0x11, 0x20, 
	0x00, 0x02, 0x11, 0x11, 0x11, 0x11, 0x11, 0x20, 0x00, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x00, 0x21, 0x11, 0x11, 0x21, 0x12, 0x12, 0x22, 0x00, 0x21, 0x11, 0x11, 0x11, 0x21, 0x21, 0x22, 
	0x00, 0x21, 0x21, 0x11, 0x11, 0x12, 0x12, 0x22, 0x00, 0x21, 0x21, 0x11, 0x12, 0x11, 0x21, 0x22, 
	0x00, 0x21, 0x11, 0x11, 0x11, 0x12, 0x12, 0x22, 0x00, 0x00, 0x00, 0x00, 0x21, 0x21, 0x21, 0x22, 
};
