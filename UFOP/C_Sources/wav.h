#pragma once
#ifndef WAV_H_INCLUDED
#define WAV_H_INCLUDED
#include <stdint.h>
#endif



#define PCM_SIZE 16
#define PCM 1


struct wav_header
{
    /* RIFF Chunk Descriptor */
    uint8_t riff[4] ; // RIFF Header Magic header
    uint32_t chunkSize ;                   // RIFF Chunk Size (36 + subchunk2Size)
    uint8_t wave[4] ; // WAVE Header
    /* "fmt" sub-chunk */
    uint8_t fmt[4]; // FMT header
    uint32_t subchunk1Size;       // Size of the fmt chunk
    uint16_t audioFormat;              // Audio format 1=PCM,6=mulaw,7=alaw,     257=IBM
    // Mu-Law, 258=IBM A-Law, 259=ADPCM
    uint16_t numChannels;                // Number of channels 1=Mono 2=Sterio
    uint32_t sampleRate;                 // Sampling Frequency in Hz
    uint32_t bytesPerSec;                // (sampleRate * numChannels * bitsPerSample/8)
    uint16_t blockAlign;                 // (numChannels * bitsPerSample/8)
    uint16_t bitsPerSample;              // Number of bits per sample
    /* "data" sub-chunk */
    uint8_t subchunk2ID[4]; // "data"  string
    uint32_t subchunk2Size;                      // Sampled data length
};

