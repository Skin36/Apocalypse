//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "wav.h"

#define PCM_SIZE 16
#define PCM 1

struct wav_header header = {
                             { 'R', 'I', 'F', 'F' },
                             0,
                             { 'W', 'A', 'V', 'E' },
                             { 'f', 'm', 't', ' ' },
                             PCM_SIZE,
                             PCM,
                             0,
                             0,
                             0,
                             0,
                             0,
                             { 'd', 'a', 't', 'a' },
                             0
};
















int load_from_path(char path)
{    
     load_from_mem(path, file.get_size(), 11025, 8, 1);

    return 0;
}


int fill_wav_header(size_t data_size, uint32_t samplerate, uint32_t bits_per_sample, uint32_t num_channels)
{
    if (samplerate > 384000 || bits_per_sample > 32 || num_channels > 8)
    {
        printf("%s %s \n", "Invalid wav parameters. Samplerate: ", samplerate);
        printf("%s %s \n", " Bits per sample:  ", bits_per_sample);
        printf("%s %s \n", " Num channels: ", num_channels);
        return -1;
    }
    header.sampleRate = samplerate;
    header.bitsPerSample = bits_per_sample;
    header.numChannels = num_channels;
    header.bytesPerSec = header.sampleRate * header.numChannels * header.bitsPerSample / 8;
    header.blockAlign = header.numChannels * header.bitsPerSample / 8;
    header.subchunk2Size = data_size;
    header.chunkSize = 36 + header.subchunk2Size;
    return 0;
}