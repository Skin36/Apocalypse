//#include <SDL.h>
#include <stdio.h>
//#include <stdlib.h>
#include <time.h>
#include <SDL_mixer.h>
#include "music.h"
#include <conio.h>
#include <math.h>

extern uint8_t main_volum_flg;
extern uint8_t music_volum_flg;
extern uint8_t music_alert_level;
extern uint8_t action_music_flag;
extern uint8_t alien_demens_flag;

char* music_path[33] = {
"MUSIC/GROUP_1/AMBIENCE.WAV",
"MUSIC/GROUP_1/BIGDARK.WAV",
"MUSIC/GROUP_1/BODYBAG.WAV",
"MUSIC/GROUP_1/CREEPY.WAV",
"MUSIC/GROUP_1/DANGER.WAV",
"MUSIC/GROUP_1/EERIE.WAV",
"MUSIC/GROUP_1/HOLLOW.WAV",
"MUSIC/GROUP_1/MOODY.WAV",
"MUSIC/GROUP_1/SEWER.WAV",
"MUSIC/GROUP_1/SILENCE.WAV",

"MUSIC/GROUP_2/DARKWIND.WAV",
"MUSIC/GROUP_2/EVILNEAR.WAV",
"MUSIC/GROUP_2/HUNTING.WAV",
"MUSIC/GROUP_2/NOTALONE.WAV",
"MUSIC/GROUP_2/SCARY.WAV",
"MUSIC/GROUP_2/TROUBLE.WAV",
"MUSIC/GROUP_2/HYPE_UP.WAV",
"MUSIC/GROUP_2/ORGANIC.WAV",
"MUSIC/GROUP_2/SLOWMO.WAV",
"MUSIC/GROUP_2/UNSETTLE.WAV",

"MUSIC/GROUP_3/ACTION.WAV",
"MUSIC/GROUP_3/CHASE.WAV",
"MUSIC/GROUP_3/DRAMA1.WAV",
"MUSIC/GROUP_3/HORROR1.WAV",
"MUSIC/GROUP_3/ACTION1.WAV",
"MUSIC/GROUP_3/ACTION2.WAV",
"MUSIC/GROUP_3/DRAMA2.WAV",
"MUSIC/GROUP_3/HORROR2.WAV",

"MUSIC/GROUP_4/FEAR.WAV",
"MUSIC/GROUP_4/LOWTONE.WAV",
"MUSIC/GROUP_4/MINDMAZE.WAV",
"MUSIC/GROUP_4/STRANGE.WAV",
"MUSIC/GROUP_4/TEXTURE.WAV"
};
int track_count[4] = { 9,9,7,4 };
int group_ofset[4] = { 0,10,10,28 };

Mix_Music* music[33];

int track = 0;
int group = 1;
int temp_group = 1;



int music_init(void)
{
    srand(time(NULL));
    int t = 0;
    for (t = 0; t < 33; ++t) {
        music[t] = Mix_LoadMUS(music_path[t]);
        if (music[t] == NULL) {
            printf("Failed to load wav! SDL_mixer Error: %s\n", Mix_GetError());
        }
    }
    return 1;
}

int music_update(void)
{   
    group = music_alert_level;

    if (!main_volum_flg || !music_volum_flg){
        if (Mix_PlayingMusic()) {
            Mix_HaltMusic();
            printf("\n music_volume %d\n", get_music_volume());
        }
        return;
    }

    if (music_alert_level == 1 && alien_demens_flag)
        group = 4;
    if (group < 1)
        group = 1;
    if (action_music_flag && group == 3)
        group = 2;
    if (group > 4)
        group = 4;

    //----------------------------------------------------
    
    if ((group == temp_group) && Mix_PlayingMusic())
        return 1;
    else if ((group != temp_group) && Mix_PlayingMusic())
    {
        temp_group = group;
        track = rand() % track_count[group-1] + group_ofset[group-1];
        Mix_PlayMusic(music[track], 0);
        printf("\n playing %s\n", music_path[track]);
        return 2;

    }
    else if ((group == temp_group) && !Mix_PlayingMusic())
    {
        track = rand() % track_count[group-1] + group_ofset[group-1];
        
        printf("\n playing %s\n", music_path[track]);
        
        Mix_PlayMusic(music[track], 0);
        
        return 3;
    }
    //----------------------------------------------------
 
    return 4;
}

int music_pause(void)
{
    if (Mix_PausedMusic())
        Mix_ResumeMusic();
    else if (Mix_PlayingMusic())
        Mix_PauseMusic();

    return 1;
}

int music_unpause(void)
{  
    if (Mix_PausedMusic())
        Mix_ResumeMusic();
    else if (Mix_PlayingMusic())
        Mix_PauseMusic();
    return 1;
}

int close_music(void)
{
    for (int m = 0; m < 33; m++) {
        Mix_FreeMusic(music[m]);
        music[m] = NULL;
    }
    Mix_Quit();
    return 0;
}


int get_music_volume(void)
{
    //return (music_volum * ((main_volum << 15) / 1000) / 1000) >> 8;
}


void set_music_volume(void)
{
    //Mix_VolumeMusic((music_volum * ((main_volum << 15) / 1000) / 1000) >> 8);
}








int smooth_decrease_music_vol(void)
{   
    //while (music_volum > 100)
    //{
       // if (main_volum_flg && music_volum_flg)
       // {
           // set_volume(100 * music_volum / 85);
      //  }
       // music_volum -= 100;
  //  }
    
    return 1;
}

