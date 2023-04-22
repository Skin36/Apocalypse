#include <SDL.h>

#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED
int video_init();
void screenshot(char *path);
void palette_correct(uint32_t index, uint32_t red, uint32_t green, uint32_t blue);
void palette_mix(uint32_t index, uint8_t* pal_1, uint8_t* pal_2);

void redraw(void);
void redraw2(void);

uint8_t* current_pal;

void close_video(void);
#endif