#pragma once
#ifndef SOUND_H_INCLUDED
#define SOUND_H_INCLUDED
int sound_init();
int  sound(int raw_ind, int16_t x_pos, int16_t y_pos, int16_t z_pos, int16_t bitrate);
int get_sound_volume(int16_t x_pos, int16_t y_pos, int16_t z_pos, uint16_t max_volume, uint16_t volume_limit);

#endif
