unsigned char Bus[] =
{
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0xFF,0xFF,0x80,0xFF,0x91,0xE2,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0xFC,0xFC,0x02,0xFE,0x10,0x22,
  0x84,0xE2,0x8C,0xE2,0x00,0xFF,0x70,0xFF,
  0x88,0xFF,0xA8,0xDF,0x88,0xF8,0x70,0x70,
  0x44,0x22,0xCD,0x23,0x01,0xFF,0x1C,0xFF,
  0x22,0xFF,0x2A,0xF7,0x22,0x3E,0x1C,0x1C
};

unsigned char Car[] =
{
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,
  0x01,0x02,0x03,0x04,0x03,0x1C,0x00,0x3F,
  0x46,0x7F,0x49,0x7F,0x0B,0x0D,0x06,0x06,
  0xDE,0x22,0xDF,0x21,0xDF,0x21,0x01,0xFF,
  0x06,0xFF,0x09,0xFF,0x0B,0x0D,0x06,0x06
};

unsigned char _Clock[] =
{
  0x00,0x3C,0x3C,0x52,0x7E,0x91,0x7E,0x91,
  0x7E,0x9D,0x7E,0x81,0x3C,0x42,0x00,0x3C
};

unsigned char Fase1_Sprites[] =
{
  0x03,0x03,0x07,0x07,0x0F,0x0F,0x1F,0x1F,
  0x3F,0x3F,0x7F,0x7F,0xFF,0xFF,0x3F,0x20,
  0xC0,0xC0,0xE6,0xE6,0xF0,0xF6,0xF8,0xFE,
  0xFC,0xFE,0xFE,0xFE,0xFF,0xFF,0x84,0x7C,
  0x3F,0x20,0x3F,0x20,0x38,0x27,0x38,0x27,
  0x38,0x27,0x38,0x23,0x38,0x27,0x38,0x27,
  0x84,0x4C,0x84,0x4C,0x84,0x7C,0xFC,0x04,
  0xFC,0x04,0xFC,0x04,0xFC,0x04,0xFC,0x04,
  0x00,0x00,0x00,0x0C,0x3F,0x3F,0x3F,0x20,
  0x31,0x20,0x31,0x20,0x31,0x20,0x3F,0x20,
  0x00,0x00,0x00,0x18,0xFE,0xFE,0xFE,0x82,
  0xC6,0xBA,0xC6,0xBA,0xC6,0xBA,0xFE,0x82,
  0x31,0x2E,0x31,0x2E,0x31,0x2E,0x3F,0x20,
  0x31,0x20,0x31,0x20,0x3F,0x20,0xFF,0xFF,
  0xC6,0x82,0xC6,0x82,0xC6,0x82,0xFE,0x82,
  0xC6,0xBA,0xC6,0xBA,0xFE,0x82,0xFF,0xFF,
  0x00,0x00,0x00,0x0F,0x00,0x0F,0x00,0x0C,
  0x03,0x08,0x00,0x08,0x02,0x08,0x00,0x08,
  0x00,0x00,0x00,0xE0,0x00,0xE0,0x00,0x60,
  0x80,0x20,0x00,0x20,0x80,0x20,0x00,0x20,
  0x00,0x0B,0x00,0x0F,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x00,0xA0,0x00,0xE0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xCF,0x30,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xCF,0x30,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x03,0x03,0x04,0x04,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xE0,0xE0,0xF0,0x10,
  0x0B,0x08,0x37,0x30,0x4F,0x40,0xBF,0x80,
  0xBF,0x80,0x7F,0x40,0x3F,0x20,0x1F,0x1F,
  0xF8,0x18,0xE4,0x1C,0xFA,0x06,0xFD,0x03,
  0xFD,0x03,0xFA,0x06,0xE4,0x1C,0xF8,0xF8,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};


unsigned char Fase2_Sprites[] =
{
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0C,0x3F,0x3F,0x23,0x3C,
  0x2D,0x32,0x2D,0x32,0x23,0x3C,0x3F,0x3F,
  0x00,0x00,0x00,0x18,0xFE,0xFE,0x46,0xBA,
  0x5A,0xA6,0x5A,0xA6,0x46,0xBA,0xFE,0xFE,
  0x3F,0x20,0x31,0x2E,0x31,0x2E,0x3F,0x20,
  0x31,0x20,0x31,0x20,0x3F,0x20,0xFF,0xFF,
  0xFE,0x82,0xC6,0x82,0xC6,0x82,0xFE,0x82,
  0xC6,0xBA,0xC6,0xBA,0xFE,0x82,0xFF,0xFF,
  0xFF,0xFF,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xEF,0xDF,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xEF,0xDF,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0xFF,0xFF,
  0x03,0x03,0x07,0x04,0x0F,0x08,0x1F,0x10,
  0x1F,0x10,0x3F,0x20,0x3F,0x20,0x3A,0x25,
  0xC0,0xC0,0xE0,0x20,0xF0,0x10,0xF8,0x08,
  0xF8,0x08,0xFC,0x04,0xFC,0x04,0x7C,0x84,
  0x38,0x27,0x1E,0x11,0x0E,0x0F,0x02,0x03,
  0x02,0x03,0x02,0x03,0x04,0x07,0x07,0x07,
  0x5C,0xA4,0x18,0xE8,0x70,0xF0,0x40,0xC0,
  0x40,0xC0,0x40,0xC0,0x20,0xE0,0xE0,0xE0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x03,0x03,0x04,0x04,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xE0,0xE0,0xF0,0x10,
  0x0B,0x08,0x37,0x30,0x4F,0x40,0xBF,0x80,
  0xBF,0x80,0x7F,0x40,0x3F,0x20,0x1F,0x1F,
  0xF8,0x18,0xE4,0x1C,0xFA,0x06,0xFD,0x03,
  0xFD,0x03,0xFA,0x06,0xE4,0x1C,0xF8,0xF8
};

unsigned char Student[] =
{
  0x0F,0x0F,0x1F,0x1F,0x1F,0x1F,0x3F,0x3E,
  0x3F,0x3C,0x1E,0x1D,0x1F,0x18,0x03,0x00,
  0x00,0x00,0xC0,0xC0,0xC0,0xC0,0x80,0x00,
  0x80,0x80,0x80,0x00,0x80,0x00,0x00,0x00,
  0x00,0x0F,0x03,0x0F,0x03,0x0F,0x07,0x07,
  0x07,0x07,0x00,0x04,0x00,0x04,0x06,0x06,
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
  0x80,0x80,0x00,0x80,0x00,0x80,0xC0,0xC0
};