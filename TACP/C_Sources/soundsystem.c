#include <SDL.h>
#include <SDL_mixer.h>
#include "soundsystem.h"
#include "music.h"
#include "sound.h"
#include <stdio.h>


extern uint16_t music_volum;
extern uint16_t main_volum;
extern uint16_t snd_volum;

uint16_t music_volum_temp;
uint16_t main_volum_temp;
uint16_t snd_volum_temp;


int soundsystem_init()
{
    music_volum_temp = music_volum;
    main_volum_temp = main_volum;
    snd_volum_temp = snd_volum;



    int ret_val = 0;
    int audio_rate = 22050;
    Uint16 audio_format = AUDIO_S16SYS;
    int audio_channels = 2;
    int audio_buffers = 1024;

    if (SDL_InitSubSystem(SDL_INIT_AUDIO))
    {
        printf("ERROR: SDL init audio. : %s\n", Mix_GetError());
    }

    if (Mix_OpenAudio(audio_rate, audio_format, audio_channels, audio_buffers) < 0)
    {
        printf("ERROR: Mix_OpenAudio.  %s\n", Mix_GetError());
        ret_val = 0;
    }

    music_init();
    sound_init();
   
   /*
    if (Mix_Volume(-1, MIX_MAX_VOLUME) != MIX_MAX_VOLUME)
    {
        ret_val |= -1;
    }
   */
    return ret_val;
}

 
int close_sound_system()
{
    Mix_CloseAudio();
    SDL_QuitSubSystem(SDL_INIT_AUDIO);
    return 0;
}

void set_volume(void)
{
    if (music_volum_temp != music_volum || main_volum_temp != main_volum || snd_volum_temp != snd_volum)
    {
        Mix_VolumeMusic((music_volum * ((main_volum << 15) / 1000) / 1000) >> 8);
    }
  
}