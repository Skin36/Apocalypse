#pragma once
#ifndef MUSIC_H_INCLUDED
#define MUSIC_H_INCLUDED

int music_init(void);
int music_update(void);
int close_music(void);
int smooth_decrease_music_vol(void);
int music_unpause(void);

#endif
