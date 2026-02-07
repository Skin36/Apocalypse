#include <stdint.h>
#ifndef PALETTE_H_INCLUDED
#define PALETTE_H_INCLUDED
void out_palette(const uint8_t* pal_ptr);
uint8_t* current_pal = NULL;
#endif