//#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <SDL_mixer.h>
#include "music.h"
#include "wav.h"

extern uint16_t music_volum;
extern uint16_t main_volum;
extern uint8_t main_volum_flg;
extern uint8_t music_volum_flg;
extern uint8_t music_alert_level;
extern uint8_t action_music_flag;
extern uint8_t alien_demens_flag;


uint8_t* mus_track[64];
SDL_RWops* rw;
Mix_Music* m_music;
FILE* fp;

void fill_audio(void* udata, char* stream, int len);
int play_track(int group, int track);


struct chunk_mus
{
    uint8_t* chunk_ptr;
    Uint32  chunk_size;
}chunks_mus[64];

uint8_t *chunk_mus_ptr[64]; // mus chunk ready for play

Uint32 offsets[64] = { 25, 4133, 9613, 17569, 22785, 28307, 35241, 41088, 45248,
                       50838, 0, 0, 0, 0, 0, 0, 52641, 57890, 63818, 69421,
                       75242, 81042, 86280, 91438, 96097, 101211, 0, 0, 0,
                       0, 0, 0, 106732, 113047, 114339, 115841, 117133, 118422,
                       119716, 121050, 0, 0, 0, 0, 0, 0, 0, 0, 122342, 128616,
                       134675, 140561, 145950, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

Uint32 lenghts[64] = { 8413184, 11223040, 16293888, 10682368, 11309056, 14200832,
                     11974656, 8519680, 11448320, 3692544, 0, 0, 0, 0, 0,
                     0, 10749952, 12140544, 11474944, 11921408, 11878400,
                     10727424, 10563584, 9541632, 10473472, 11307008, 0,
                     0, 0, 0, 0, 0, 12933120, 2646016, 3076096, 2646016,
                     2639872, 2650112, 2732032, 2646016, 0, 0, 0, 0, 0, 0,
                     0, 0, 12849152, 12408832, 12054528, 11036672, 12834816,
                     0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };


void fill_audio(void* udata, char* stream, int len)
{

    int volume;
    static Uint32 audio_len;
    static Uint8* audio_pos;

    SDL_memset(stream, 0, len);
    if (audio_len)
    {
        if (len > audio_len)
            len = audio_len;
        volume = (music_volum * ((main_volum << 15) / 1000) / 1000) >> 8;
        SDL_MixAudio(stream, audio_pos, len, volume);
        audio_pos += len;
        audio_len -= len;
    }
    else
    {
        printf("end of track reached - getnextmusic\n");
    }
}

/*
int __cdecl play_track(int a1, int a2)
{
    int v2; // esi
    size_t v3; // ebx
    void* v4; // edi
    void(__cdecl * v5)(void*, size_t, size_t, FILE*); // esi

    v2 = a2 + 16 * a1;
    v3 = lenghts[v2];
    v4 = malloc(lenghts[v2]);
    fseek(fp, (offsets[v2] - 25) << 11, 0);
    if (v4)
    {
        v5 = (void(__cdecl*)(void*, size_t, size_t, FILE*))_fread;
        if (_fread(v4, 1u, v3, fp) != v3)
        {
            _fseek(fp, 0, 0);
            v5(v4, 1u, v3, fp);
        }
        audio_chunk = (int)v4;
        audio_len = v3;
        audio_pos = (int)v4;
        SDL_PauseAudio(0);
    }
    return 0;
}

*/


int music_init(void)
{

    fp = fopen("MUSIC/MUSIC", "rb+");
    if (!fp)
    {
        printf("cannot open music file\n");
        return 0;
    }
    
    int i;

    for (i = 0; i < 64; i++)
    {
        mus_track[i] = (uint8_t*)malloc(sizeof(uint8_t) * lenghts[i]);
        //chunk_mus_ptr[i] = (uint8_t*)malloc(sizeof(struct wav_header));

        fseek(fp, (offsets[i] - 25) << 11, 0);
        if (mus_track[i] != 0)
            fread(mus_track[i], 1, lenghts[i], fp);
        (chunks_mus + i)->chunk_ptr = mus_track[i];
        (chunks_mus + i)->chunk_size = lenghts[i];
        //printf("%s %d \n", "i is ", mus_track[i]);


        header.chunkSize = 36 + lenghts[i];
        header.numChannels = 2;
        header.sampleRate = 22050;
        header.bytesPerSec = 22050 * 2 * 16 / 8;
        header.blockAlign = 2 * 16 / 8;
        header.bitsPerSample = 16;

         header.subchunk2Size = lenghts[i];
         //chunk_mus_ptr[i] = &header;
    }
    play_track(1, 1);
    fclose(fp);



    //fp = fopen("MUSIC/MUSIC", "rb+");
    //uint8_t* mus_track1;
    //int  numread;
    //mus_track1 = (uint8_t*)malloc(311689216);

    //if (!(mus_track1 = (uint8_t*)malloc(311689216)))
       // printf("Allocation error.");
   // numread = fread(mus_track1, 1, 1069056, fp);
   // printf("Number of items read = %d\n", numread);
   // Mix_Chunk* sample = Mix_QuickLoad_RAW(mus_track1, 311689216);
    //Mix_VolumeChunk(sample, MIX_MAX_VOLUME);
    //Mix_PlayChannel(1, sample, 0);
 
    /*
    rw = SDL_RWFromMem(mus_track1, 1069056);
    if (rw == NULL) printf("SDL_RWFromMem: %s\n", SDL_GetError());

    m_music = Mix_LoadMUS_RW(rw, 1);
    if (!m_music) {
        printf("Mix_LoadMUS_RW: %s\n", Mix_GetError());
    }
   */

    //Mix_PlayMusic(m_music, 0);
    return 1;
}


int play_track(int group, int track)
{
    int track_num;
    track_num = track + 16 * group;
    
    //printf("%s %d \n", "chunk_ptr is ", (chunks_mus + track_num)->chunk_ptr [1]);
    Mix_VolumeMusic(MIX_MAX_VOLUME);
   // Mix_Chunk* sample = Mix_QuickLoad_RAW((chunks_mus + track_num)->chunk_ptr, (chunks_mus + track_num)->chunk_size);
    //Mix_PlayChannel(1, sample, 0);



    rw = SDL_RWFromMem((chunks_mus + track_num)->chunk_ptr, (chunks_mus + track_num)->chunk_size);
    
    if (rw == NULL) printf("SDL_RWFromMem: %s\n", SDL_GetError());

    m_music = Mix_LoadMUSType_RW(rw,MUS_WAV, 0);
    if (!m_music) {
        printf("Mix_LoadMUS_RW: %s\n", Mix_GetError());
    }
    Mix_PlayMusic(m_music, 0);
    
    //MusicTrack(rw);



    return 0;
}



/*
int play_track(int group, int track)
{
    char *buff;
    char count;
    buff = malloc(lenghts[track + 16 * group]);
    count = lenghts[track + 16 * group];
    fseek(fp, (offsets[track] - 25) << 11, 0);
    if (buff)
    {
        if (_fread(buff, 1u, count, fp) != count)
        {
            _fseek(fp, 0, 0);
            fread(buff, 1u, count, fp);
        }
    }



    return 0;
}

*/

int read_music_play_list()
{   
    uint8_t track_count[4] = {9,9,7,4};
    uint8_t track;
    uint8_t group;
    uint8_t v2 = 0;
    uint8_t level = 0;
    uint8_t playing = 0;

    main_volum_flg = 1;

    //srand(srand(time(NULL)));
    //if (!main_volum_flg || !music_volum_flg || playing)
    if (!music_volum_flg || playing)
        return 1;
    playing = 1;
    
    if (alien_demens_flag)
        v2 = 1;
    
    if (music_alert_level == 1 && v2)
        level = 4;

    if (level < 1)
        level = 1;

    if (action_music_flag && level == 3)
        level = 2;

    if (level > 4)
        level = 4;
    
    track = rand(track_count[level-1]);
    group = level - 1;

    //play_track(group, track);
   
    return 1;
}


int music_pause(void)
{
    Mix_PausedMusic();
    return 1;
}

int music_unpause(void)
{  
    Mix_ResumeMusic();
    return 1;
}

int close_music(void)
{

    SDL_CloseAudio();
    return 0;
}


int get_music_volume(void)
{
    return (music_volum * ((main_volum << 15) / 1000) / 1000) >> 8;
}

int smooth_decrease_music_vol(void)
{   
    while (music_volum > 100)
    {
        if (main_volum_flg && music_volum_flg)
        {
            set_volume(100 * music_volum / 85);
        }
        music_volum -= 100;
    }
    
    return 1;
}