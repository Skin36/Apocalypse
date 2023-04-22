#include <SDL.h>
#include <SDL_mixer.h>
#include "soundsystem.h"
#include "music.h"

int m_num_simultaneously_playing_channels;


int soundsystem_init()
{
    int ret_val = 0;

    int audio_rate = 22050;
    Uint16 audio_format = AUDIO_S16SYS;
    int audio_channels = 2;
    int audio_buffers = 1024;

    if (SDL_InitSubSystem(SDL_INIT_AUDIO))
    {
        printf("ERROR: SDL init audio. : %s\n", Mix_GetError());
    }

    if (Mix_OpenAudio(audio_rate, audio_format, audio_channels, audio_buffers) < 0)//11050, AUDIO_U8, 2, 512
    {
        printf("ERROR: Mix_OpenAudio.  %s\n", Mix_GetError());
        ret_val = 0;
    }

    //SDL_PauseAudio(0);

    m_num_simultaneously_playing_channels = 10;
    const int num_sound_files = 215;
    int max_channels = 104 * m_num_simultaneously_playing_channels;
    int num_channels = Mix_AllocateChannels(max_channels);
    int num_reserve_channels = Mix_ReserveChannels(max_channels);
    if (num_channels != max_channels || num_reserve_channels != max_channels)
    {
        printf("%s %d \n", "ERROR: allocate channels.Current channels number is ", num_channels);
        ret_val |= -1;
    }
    if (Mix_Volume(-1, MIX_MAX_VOLUME) != MIX_MAX_VOLUME)
    {
        ret_val |= -1;
    }

    music_init();
    return ret_val;
}