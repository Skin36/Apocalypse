//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <io.h>
#include <stdint.h>
#include <SDL.h>
#include <SDL_mixer.h>
#include <string.h>
#include <malloc.h>
#include "sound.h"



#define MIX_MAX_BALANCE 255



struct chunk_raw
{
    Uint16  bitrate;
    uint8_t* chunk_ptr;
    Uint32  chunk_size;
    Uint16  fsize;
    Uint16  max_vol;
    
}chunks_raw[215];

struct struct_sound
{
    char    sound_path[50];
    Uint32  bitrate;
    Uint32  fsize;
    Uint16  format;
    Uint16  max_vol;
    Uint16  anonymous_3;
};

struct struct_sound snd_raw[215] = {
                 {"RAWSOUND/EXTRA/ATMODEM.RAW", 22050, 2075, 8, 24575, 1},
                 {"RAWSOUND/EXTRA/ATRADIO.RAW", 22050, 1999, 8, 24575, 1},
                 {"RAWSOUND/EXTRA/EXPTERR.RAW", 11025, 3239, 8, 24575, 1},
                 {"RAWSOUND/EXTRA/FTCONC1.RAW", 22050, 79, 8, 4095, 1},
                 {"RAWSOUND/EXTRA/FTCONC2.RAW", 22050, 90, 8, 4095, 1},
                 {"RAWSOUND/EXTRA/FTMARB1.RAW", 11025, 95, 8, 4095, 1},
                 {"RAWSOUND/EXTRA/FTMARB2.RAW", 11025, 120, 8, 4095, 1},
                 {"RAWSOUND/EXTRA/FTMETAL1.RAW", 22050,214, 8, 4095, 1},
                 {"RAWSOUND/EXTRA/FTMETAL2.RAW ", 22050, 201, 8, 4095, 1},
                 {"RAWSOUND/EXTRA/FTMUD1.RAW", 11025, 155, 8, 4095, 1},
                 {"RAWSOUND/EXTRA/FTMUD2.RAW", 11025, 197, 8, 4095, 1},
                 {"RAWSOUND/EXTRA/FTSLUDG1.RAW", 11025, 602, 8, 4095, 1},
                 {"RAWSOUND/EXTRA/FTSLUDG2.RAW", 11025, 661, 8, 4095, 1},
                 {"RAWSOUND/EXTRA/FTSOFT1.RAW ", 22050, 161, 8, 4095, 1},
                 {"RAWSOUND/EXTRA/FTSOFT2.RAW", 22050, 249, 8, 4095, 1},
                 {"RAWSOUND/EXTRA/FTTUBE1.RAW", 11025, 591, 8, 4095, 1},
                 {"RAWSOUND/EXTRA/FTTUBE2.RAW", 11025, 551, 8, 4095, 1},
                 {"RAWSOUND/EXTRA/FTWOOD1.RAW", 11025, 116, 8, 4095, 1},
                 {"RAWSOUND/EXTRA/FTWOOD2.RAW ", 11025, 111, 8, 4095, 1},
                 {"RAWSOUND/EXTRA/HDETHF1.RAW ", 22050, 658, 8, 24575, 5},
                 {"RAWSOUND/EXTRA/HDETHF2.RAW", 22050, 1296, 8, 24575, 5},
                 {"RAWSOUND/EXTRA/HDETHM1.RAW ", 22050, 1128, 8, 24575, 5},
                 {"RAWSOUND/EXTRA/HDETHM2.RAW", 22050, 1306, 8, 24575, 5},
                 {"RAWSOUND/EXTRA/HDETHM3.RAW", 22050, 1712, 8, 24575, 5},
                 {"RAWSOUND/EXTRA/HPAINF1.RAW ", 22050, 453, 8, 24575, 3},
                 {"RAWSOUND/EXTRA/HPAINF2.RAW", 22050, 419, 8, 24575, 3},
                 {"RAWSOUND/EXTRA/HPAINM1.RAW", 22050, 503, 8, 24575, 3},
                 {"RAWSOUND/EXTRA/HPAINM2.RAW", 22050, 307, 8, 24575, 3},
                 {"RAWSOUND/EXTRA/HPAINM3.RAW", 22050, 496, 8, 24575, 3},
                 {"RAWSOUND/EXTRA/LBUTTN1.RAW", 22050, 31, 8, 24575, 1},
                 {"RAWSOUND/EXTRA/LBUTTN2.RAW", 22050, 225, 8, 24575, 1},
                 {"RAWSOUND/EXTRA/LOCLANG.RAW", 11025, 2254, 8, 24575, 1},
                 {"RAWSOUND/EXTRA/MBSPREAD.RAW", 22050, 1810, 8, 24575, 1},
                 {"RAWSOUND/EXTRA/OBJFALL1.RAW", 22050, 205, 8, 24575, 1},
                 {"RAWSOUND/EXTRA/OBJFALL2.RAW", 22050, 137, 8, 24575, 1},
                 {"RAWSOUND/EXTRA/OBJFALL3.RAW", 22050, 295, 8, 24575, 1},
                 {"RAWSOUND/EXTRA/RUBCRASH.RAW", 22050, 2137, 8, 24575, 1},
                 {"RAWSOUND/EXTRA/TRONLAUN.RAW", 22050, 753, 8, 24575, 1},
                 {"RAWSOUND/SPARES/DIMFIELD.RAW", 22050, 1338, 8, 24575, 4},
                 {"RAWSOUND/SPARES/FORCEWEB.RAW", 22050, 1967, 8, 24575, 4},
                 {"RAWSOUND/SPARES/MTRACKER.RAW", 22050, 457, 8, 24575, 4},
                 {"RAWSOUND/SPARES/PISTOL.RAW", 22050, 595, 8, 24575, 4},
                 {"RAWSOUND/SPARES/PISTOL2.RAW", 22050, 551, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/EXPLOSNS/DIMSHIFT.RAW", 22050, 1037, 8, 24575, 6},
                 {"RAWSOUND/STRATEGC/EXPLOSNS/EXPLOSN1.RAW", 22050, 1548, 8, 24575, 6},
                 {"RAWSOUND/STRATEGC/EXPLOSNS/EXPLOSN2.RAW", 22050, 2059, 8, 24575, 6},
                 {"RAWSOUND/STRATEGC/EXPLOSNS/EXPLOSN3.RAW", 11025, 1054, 8, 24575, 6},
                 {"RAWSOUND/STRATEGC/EXPLOSNS/SHLDHIT1.RAW", 22050, 777, 8, 24575, 6},
                 {"RAWSOUND/STRATEGC/EXPLOSNS/TELEPORT.RAW", 22050, 1127, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/INTRFACE/BUTTNDRP.RAW", 22050, 18, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/INTRFACE/BUTTON1.RAW", 22050, 53, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/INTRFACE/DAMAGE.RAW", 22050, 701, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/INTRFACE/UFOALERT.RAW", 22050, 320, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/TERRAIN/DGATE_IN.RAW", 22050, 2136, 8, 24575, 3},
                 {"RAWSOUND/STRATEGC/TERRAIN/DGAT_OUT.RAW", 22050, 2136, 8, 24575, 3},
                 {"RAWSOUND/STRATEGC/TERRAIN/TERRN_LP.RAW", 22050,  2179, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/VEHICLE/BIGUFO2.RAW", 22050, 1381, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/VEHICLE/BIGUFO3.RAW", 22050, 1636, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/VEHICLE/COPSIRN1.RAW", 22050, 908, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/VEHICLE/COPSIRN2.RAW", 22050, 1829, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/VEHICLE/ELECTCAR.RAW", 22050, 1515, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/VEHICLE/HOVERCAR.RAW", 22050, 1116, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/VEHICLE/MEDUFO.RAW", 22050, 1579, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/VEHICLE/MEDUFO3.RAW", 22050, 1992, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/VEHICLE/ROADCAR1.RAW", 22050, 1823, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/VEHICLE/SMALLUFO.RAW", 22050, 304, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/VEHICLE/SMLUFO2.RAW", 22050, 1310, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/VEHICLE/SMLUFO3.RAW", 22050, 873, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/VEHICLE/SP_LINER.RAW", 22050, 2118, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/VEHICLE/TANKLP.RAW", 22050, 1308, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/VEHICLE/TRUCKS.RAW", 22050, 1702, 8, 24575, 1},
                 {"RAWSOUND/STRATEGC/WEAPONS/AIRGUARD.RAW", 22050, 800, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/BOLTER.RAW", 22050, 406, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/DINVRSN1.RAW", 22050, 1918, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/DISRUPT1.RAW", 22050, 799, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/DISRUPT2.RAW", 22050, 1023, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/DISRUPT3.RAW", 22050, 1090, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/GR_MISSL.RAW", 22050, 1356, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/HELLFIRE.RAW", 22050, 886, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/JANITOR.RAW", 22050, 1160, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/JUSTICE.RAW", 22050, 1430, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/LANCER.RAW", 22050,1049, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/MARSDEF.RAW", 22050,1278, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/MARSPLAS.RAW", 22050, 831, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/MARS_GLM.RAW", 22050, 1830, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/MCANNON.RAW", 22050, 764, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/MEGLASER.RAW", 22050, 293, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/MPLASMA1.RAW", 22050, 243, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/MPLASMA2.RAW", 22050, 680, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/MULTPLAS.RAW", 22050, 604, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/REPEATER.RAW", 22050, 378, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/RETRIB.RAW", 22050, 855, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/RUPTMULT.RAW", 22050, 1107, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/STASIS.RAW", 22050, 834, 8, 24575, 4},
                 {"RAWSOUND/STRATEGC/WEAPONS/TNKCANON.RAW", 22050, 592, 8, 24575, 4},
                 {"RAWSOUND/TACTICAL/ALIENS/ATTACKS/BRAINSUK.RAW", 22050, 1851, 8, 24575, 4},
                 {"RAWSOUND/TACTICAL/ALIENS/ATTACKS/PSIMORPH.RAW", 22050, 1878, 8, 24575, 4},
                 {"RAWSOUND/TACTICAL/ALIENS/ATTACKS/QUEENWHP.RAW", 22050, 687, 8, 24575, 4},
                 {"RAWSOUND/TACTICAL/ALIENS/ATTACKS/SPITTER.RAW", 22050, 773, 8, 24575, 4},
                 {"RAWSOUND/TACTICAL/ALIENS/ATTACKS/WORMSPIT.RAW", 22050, 977, 8, 24575, 4},
                 {"RAWSOUND/TACTICAL/ALIENS/ATTACKS/WRMATTAK.RAW", 22050, 1787, 8, 24575, 4},
                 {"RAWSOUND/TACTICAL/ALIENS/ATTACKS/WRMHIT.RAW", 22050, 828, 8, 24575, 4},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/ANTHRPD1.RAW", 22050, 1840, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/ANTHRPD2.RAW", 22050, 1158, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/BRNSUKR1.RAW", 22050, 1652, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/BRNSUKR2.RAW", 22050, 2218, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/BRNSUKR3.RAW", 22050, 1208, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/MEGTRON.RAW", 22050, 1924, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/MWORM1.RAW", 22050, 476, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/MWORM2.RAW", 22050, 607, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/POPPER1.RAW", 22050, 2154, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/POPPER2.RAW", 22050, 1811, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/PSIMRPH1.RAW", 22050, 2200, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/PSIMRPH2.RAW", 22050, 2162, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/QUEENSP1.RAW", 22050, 1923, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/SALISCRY.RAW", 22050, 1464, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/SKELETLD.RAW", 22050, 1176, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/SPITTR1.RAW", 22050, 914, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/CRIES/SPITTR2.RAW", 22050, 1062, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/ALIENS/DEATHS/ANTHRPD1.RAW", 22050, 2166, 8, 24575, 5},
                 {"RAWSOUND/TACTICAL/ALIENS/DEATHS/BRNSUKR2.RAW", 22050, 1675, 8, 24575, 5},
                 {"RAWSOUND/TACTICAL/ALIENS/DEATHS/CHRYSALS.RAW", 22050, 937, 8, 24575, 5},
                 {"RAWSOUND/TACTICAL/ALIENS/DEATHS/GUNK.RAW", 22050, 1082, 8, 24575, 5},
                 {"RAWSOUND/TACTICAL/ALIENS/DEATHS/HOWL.RAW", 22050, 1219, 8, 24575, 5},
                 {"RAWSOUND/TACTICAL/ALIENS/DEATHS/HYPWRM01.RAW", 22050, 696, 8, 24575, 5},
                 {"RAWSOUND/TACTICAL/ALIENS/DEATHS/MEGHOWL.RAW", 22050, 2052, 8, 24575, 5},
                 {"RAWSOUND/TACTICAL/ALIENS/DEATHS/QUEENSP2.RAW", 22050, 1893, 8, 24575, 5},
                 {"RAWSOUND/TACTICAL/ALIENS/DEATHS/SKELETD1.RAW", 22050, 2226, 8, 24575, 5},
                 {"RAWSOUND/TACTICAL/ALIENS/DEATHS/SPITTR1.RAW", 22050, 1689, 8, 24575, 5},
                 {"RAWSOUND/TACTICAL/ALIENS/DEATHS/WORMEGG.RAW", 22050, 462, 8, 24575, 5},
                 {"RAWSOUND/TACTICAL/ALIENS/MOVEMNTS/ANTHROP1.RAW", 22050, 308, 8, 16383, 1},
                 {"RAWSOUND/TACTICAL/ALIENS/MOVEMNTS/HYPWORM1.RAW", 22050, 1870, 8, 16383, 1},
                 {"RAWSOUND/TACTICAL/ALIENS/MOVEMNTS/MEGTRON1.RAW", 22050, 393, 8, 16383, 1},
                 {"RAWSOUND/TACTICAL/ALIENS/MOVEMNTS/MEGTRON2.RAW", 22050, 524, 8, 16383, 1},
                 {"RAWSOUND/TACTICAL/ALIENS/MOVEMNTS/MULTWORM.RAW", 22050, 2031, 8, 16383, 1},
                 {"RAWSOUND/TACTICAL/ALIENS/MOVEMNTS/POPPER1.RAW ", 22050, 387, 8, 16383, 1},
                 {"RAWSOUND/TACTICAL/ALIENS/MOVEMNTS/POPPER2.RAW ", 22050, 297, 8, 16383, 1},
                 {"RAWSOUND/TACTICAL/ALIENS/MOVEMNTS/QUEENSPN.RAW", 22050, 2172, 8, 16383, 1},
                 {"RAWSOUND/TACTICAL/ALIENS/MOVEMNTS/SCUTTLE.RAW ", 22050, 1800, 8, 16383, 1},
                 {"RAWSOUND/TACTICAL/ALIENS/MOVEMNTS/SKELSTP1.RAW", 22050, 119, 8, 16383, 1},
                 {"RAWSOUND/TACTICAL/ALIENS/MOVEMNTS/SKELSTP2.RAW", 22050, 170, 8, 16383, 1},
                 {"RAWSOUND/TACTICAL/ALIENS/MOVEMNTS/SPITTER1.RAW", 22050, 509, 8, 16383, 1},
                 {"RAWSOUND/TACTICAL/ALIENS/MOVEMNTS/SPITTER2.RAW", 22050, 268, 8, 16383, 1},
                 {"RAWSOUND/TACTICAL/EXPLOSNS/EXPLOSN1.RAW", 22050, 2100, 8, 32767, 6},
                 {"RAWSOUND/TACTICAL/EXPLOSNS/EXPLOSN2.RAW", 22050, 1475, 8, 32767, 6},
                 {"RAWSOUND/TACTICAL/EXPLOSNS/FIREXPLS.RAW", 22050, 1899, 8, 32767, 6},
                 {"RAWSOUND/TACTICAL/EXPLOSNS/GASEXPLS.RAW", 22050, 2022, 8, 24575, 6},
                 {"RAWSOUND/TACTICAL/EXPLOSNS/MTRACK1.RAW", 22050, 94, 8, 24575, 6},
                 {"RAWSOUND/TACTICAL/EXPLOSNS/MTRACK2.RAW", 22050, 221, 8, 24575, 6},
                 {"RAWSOUND/TACTICAL/EXPLOSNS/PSIGRNAD.RAW", 22050, 1631, 8, 24575, 6},
                 {"RAWSOUND/TACTICAL/EXPLOSNS/SHLDHIT1.RAW", 22050, 777, 8, 24575, 6},
                 {"RAWSOUND/TACTICAL/EXPLOSNS/STUNGRND.RAW", 22050, 704, 8, 24575, 6},
                 {"RAWSOUND/TACTICAL/EXPLOSNS/TELEPORT.RAW", 22050, 975, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/INTRFACE/BUTTON1.RAW", 22050, 53, 8, 24575, 1},
                 {"RAWSOUND/TACTICAL/INTRFACE/ENEMY.RAW", 22050, 307, 8, 24575, 1},
                 {"RAWSOUND/TACTICAL/INTRFACE/UNDRFIRE.RAW", 22050, 599, 8, 24575, 1},
                 {"RAWSOUND/TACTICAL/TERRAIN/DOORWHSH.RAW", 22050, 788, 8, 12287, 1},
                 {"RAWSOUND/TACTICAL/TERRAIN/LIFTLOOP.RAW", 22050, 2124, 8, 24575, 1},
                 {"RAWSOUND/TACTICAL/TERRAIN/TELEPOT2.RAW", 22050, 729, 8, 24575, 1},
                 {"RAWSOUND/TACTICAL/TERRAIN/TERRAIN.RAW", 22050, 1499, 8, 24575, 1},
                 {"RAWSOUND/TACTICAL/WEAPONS/BOOMROID.RAW", 22050, 804, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/BULLET1.RAW", 22050, 563, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/BULLET2.RAW", 22050, 556, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/BULLET3.RAW", 22050, 492, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/DCANNON1.RAW", 22050, 1016, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/DIMNMISL.RAW", 22050, 2092, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/DISRUPTR.RAW", 22050, 652, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/DSTABLSR.RAW", 22050, 375, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/ENTROPY.RAW", 22050, 1147, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/MARSEC1.RAW", 22050, 1370, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/MARSEC2.RAW", 22050, 2223, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/MEGAPOL.RAW", 22050, 437, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/MEGASTUN.RAW", 22050, 576, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/MEGCANON.RAW", 22050, 703, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/MEGHIT.RAW", 22050, 393, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/POWERS.RAW", 22050, 356, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/PSIONIC1.RAW", 22050, 1418, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/SNIPER.RAW", 22050, 145, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/SUCKLAUN.RAW", 22050, 650, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/THROW1.RAW", 22050, 295, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/THROW2.RAW", 22050, 277, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/TOXIGUN.RAW", 22050, 322, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/TRAKGUN.RAW", 22050, 290, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/TRAKHIT.RAW", 22050, 241, 8, 24575, 3},
                 {"RAWSOUND/TACTICAL/WEAPONS/ZAPHIT.RAW", 22050, 662, 8, 24575, 3},
                 {"RAWSOUND/EXTRA/TEXTBEEP.RAW", 22050, 63, 8, 24575, 1},
                 {"RAWSOUND/EXTRA/BRHATCH.RAW", 22050, 378, 8, 24575, 1},
                 {"RAWSOUND/EXTRA/OBCONC.RAW", 22050, 96, 8, 16383, 2},
                 {"RAWSOUND/EXTRA/OBMARB.RAW", 22050, 36, 8, 16383, 2},
                 {"RAWSOUND/EXTRA/OBMETAL.RAW", 22050, 182, 8, 16383, 2},
                 {"RAWSOUND/EXTRA/OBMUD.RAW", 22050, 137, 8, 16383, 2},
                 {"RAWSOUND/EXTRA/OBSLUDG.RAW", 22050, 194, 8, 16383, 2},
                 {"RAWSOUND/EXTRA/OBSOFT.RAW", 22050, 43, 8, 16383, 2},
                 {"RAWSOUND/EXTRA/OBTUBE.RAW", 22050, 777, 8, 16383, 2},
                 {"RAWSOUND/EXTRA/OBWOOD.RAW", 22050, 137, 8, 16383, 2},
                 {"RAWSOUND/zEXTRA/ALERT.RAW", 22050, 1295, 8, 24575, 1},
                 {"RAWSOUND/zEXTRA/ALERT2.RAW", 22050, 1660, 8, 24575, 3},
                 {"RAWSOUND/zEXTRA/ALERT3.RAW", 11025, 4021, 8, 24575, 3},
                 {"RAWSOUND/zEXTRA/ALERT4.RAW", 22050, 1660, 8, 24575, 3},
                 {"RAWSOUND/zEXTRA/DOOR1.RAW", 22050, 483, 8, 16383, 3},
                 {"RAWSOUND/zEXTRA/DOOR2.RAW", 22050, 493, 8, 16383, 3},
                 {"RAWSOUND/zEXTRA/DOOR3.RAW", 22050, 618, 8, 16383, 3},
                 {"RAWSOUND/zEXTRA/DOOR4.RAW", 22050, 557, 8, 16383, 3},
                 {"RAWSOUND/zEXTRA/DOOR5.RAW", 22050, 526, 8, 16383, 3},
                 {"RAWSOUND/zEXTRA/GRAVLIFT.RAW", 22050, 1798, 8, 24575, 3},
                 {"RAWSOUND/zEXTRA/HIT1.RAW", 22050, 962, 8, 24575, 3},
                 {"RAWSOUND/zEXTRA/HIT2.RAW", 22050, 1007, 8, 24575, 3},
                 {"RAWSOUND/zEXTRA/HIT3.RAW", 22050, 600, 8, 24575, 3},
                 {"RAWSOUND/zEXTRA/PSIONIC1.RAW", 22050, 1656, 8, 24575, 3},
                 {"RAWSOUND/zEXTRA/PSIONIC2.RAW", 22050, 604, 8, 24575, 3},
                 {"RAWSOUND/zEXTRA/PSIONIC4.RAW", 22050, 1776, 8, 24575, 3},
                 {"RAWSOUND/zEXTRA/PSIONIC5.RAW", 22050, 1886, 8, 24575, 3},
                 {"RAWSOUND/zEXTRA/PSIONIC6.RAW", 22050, 1770, 8, 24575, 3},
                 {"RAWSOUND/zEXTRA/PSIONIC7.RAW", 22050, 1207, 8, 24575, 3},
                 { "RAWSOUND/zEXTRA/LASEROF2.RAW", 22050, 1048, 8, 24575, 3 } };
struct struct_sound *snd;
//snd = &snd_raw;

void  load_raw_snd(void);
void free_raw(void);
int get_balance(int16_t x_pos, int16_t y_pos);
int get_first_free_channel(int index);
int get_volume_dist(int16_t x1, int16_t y1, int16_t z1, int16_t x2, int16_t y2, int16_t z2);

//struct sound_struc* snd;
//extern struct sound_struc* raw_snd;

//extern struct raw_snd* sound_struc;

uint8_t* raw_track[215];

 extern uint16_t map_view_flag;
 extern uint8_t main_volum_flg;
 extern uint16_t snd_volum_flg;
 extern uint8_t swap_channal_flag;

 extern int16_t camera_coord_x_3;
 extern int16_t camera_coord_y_5;
 extern int16_t camera_coord_7_x;
 extern int16_t camera_coord_9_y;
 extern int16_t camera_z_coord;

 extern uint16_t main_volum;
 extern uint16_t snd_volum;
 
 uint16_t main_volum_tmp;


int sound(int raw_ind, int16_t x_pos, int16_t y_pos, int16_t z_pos, int16_t unc)

{
 
    if (main_volum_flg && snd_volum_flg && raw_ind != -1)
    {
        int ret_val = 0;
        //int freq = (chunks_raw + raw_ind)->bitrate;



        int l_balance;
        int r_balance;

        //get original scale //255
        //32768
        //main_volum_tmp = get_sound_volume(x_pos, y_pos, z_pos, (chunks_raw + raw_ind)->max_vol, (chunks_raw + raw_ind)->fsize) >> 8; // *255
        main_volum_tmp = get_sound_volume(x_pos, y_pos, z_pos, 32768, (chunks_raw + raw_ind)->fsize) >> 8; // *255
        int balance_shift = get_balance(x_pos, y_pos);
        if (!balance_shift)
        {
            l_balance = MIX_MAX_BALANCE;
            r_balance = MIX_MAX_BALANCE;
        }
        else if (balance_shift > 0)
        {
            l_balance = 0;
            r_balance = balance_shift >> 7;
        }
        else if (balance_shift < 0)
        {
            r_balance = 0;
            l_balance = (~balance_shift+1) >> 7;
        }
        int free_channel_index = get_first_free_channel(raw_ind);
        //ret_val |= Mix_Volume(free_channel_index, main_volum_tmp);



        ret_val |= Mix_SetPanning(free_channel_index, (uint8_t)l_balance, (uint8_t)r_balance);
        Mix_Chunk* sample = Mix_QuickLoad_RAW((chunks_raw + raw_ind)->chunk_ptr, (chunks_raw + raw_ind)->chunk_size);
        Mix_VolumeChunk(sample, MIX_MAX_VOLUME);
        Mix_AllocateChannels(m_num_simultaneously_playing_channels * (raw_ind + 1));

        
        ret_val |= Mix_Volume(free_channel_index, main_volum_tmp);
 
        ret_val |= Mix_PlayChannel(free_channel_index, sample, 0);

        //Mix_SetDistance(0, 1);  
    }
    return 1;
}


void  load_raw_snd()
{
    int i;
    snd = (struct struct_sound*)malloc(215 * sizeof(struct struct_sound));
    snd = &snd_raw;
    FILE* file;
      
    for (i = 0; i < 215; i++)
    {
        file = fopen((snd + i)->sound_path, "rb");

        long size = _filelength(_fileno(file));
        raw_track[i] = (uint8_t*)malloc(sizeof(uint8_t) * size);
        if (raw_track[i])
            fread(raw_track[i], size, 1, file);
        (chunks_raw + i)->chunk_ptr = raw_track[i];
        (chunks_raw + i)->chunk_size = size;
        (chunks_raw + i)->bitrate = (snd + i)->bitrate;
        (chunks_raw + i)->fsize = (snd + i)->fsize;
        (chunks_raw + i)->max_vol = (snd + i)->max_vol;
        fclose(file);
    }
};


int get_sound_volume(int16_t x, int16_t y, int16_t z, uint16_t max_volume, uint16_t size)
{
    uint16_t v5,v6,v7;

    if (map_view_flag || x < 0)                
    {
        if (x < 0)           
        {
            v6 = max_volume;
        }
        else
        {
            v7 = get_volume_dist(x, y, z, camera_coord_7_x + 40, camera_coord_9_y + 22, camera_z_coord);
            if (v7 <= 75 || size >= 500)
            {
                v6 = max_volume - v7 * (max_volume / 75);
                if (v6 < 0)
                    v6 = 0;
            }
            else
            {
                v6 = 0;
            }
        }
    }
    else
    {
        v5 = get_volume_dist(x, y, z, camera_coord_x_3 + 16, camera_coord_y_5 + 16, camera_z_coord);
        if (v5 <= 75 || size >= 500)
        {
            v6 = max_volume - v5 * (max_volume / 75);
            if (v6 < 0)
                v6 = 0;
        }
        else
        {
            v6 = 0;
        }
    }
    return snd_volum * (main_volum * v6 / 1000) / 1000;
}

int get_balance(int16_t x_pos, int16_t y_pos)
{
    int16_t v3, v4, v5;   //v6,v7;
    if (map_view_flag || x_pos < 0)
    {
        if (x_pos < 0)
        {
            v3 = 0;
            if (x_pos == -13 || x_pos == -3)
                v3 = 15;
            if (x_pos == -14 || x_pos == -4)
                v3 = -15;
            if (x_pos == -11)
            { 
                v5 = 0;
                return v5;
            }
        }
        else
        {
            v3 = x_pos - (camera_coord_7_x + 40);
        }
    }
    else
    {
        v3 = x_pos + camera_coord_y_5 - (camera_coord_x_3 + y_pos);
    }
    if (swap_channal_flag)
        v3 = -v3;
    if (v3 >= 15)
        v4 = 15;
    else
        v4 = v3;
    if (v4 <= -15)
    {
        v5 = -15;
    }
    else
    {
        if (v3 >= 15)
            v3 = 15;
        v5 = v3;
    }
    return 2184 * v5 + v5;
}


int get_first_free_channel(int index)
{
    for (int i = index; i < index + m_num_simultaneously_playing_channels; i++)
    {
        if (!Mix_Playing(i))
        {
            return i;
        }
    }
    Mix_HaltChannel(index);
    return index;
}

int get_volume_dist(int16_t x1, int16_t y1, int16_t z1, int16_t x2, int16_t y2, int16_t z2)
{
    int x_delta, y_delta, z_delta, x_y_shift,v10,v11,v12,v13;
    
    
    if (z1 >= z2)
        z_delta = z1 - z2;
    else
        z_delta = z2 - z1;
    if (x2 <= x1)
        x_delta = x1 - x2;
    else
        x_delta = x2 - x1;
    if (y2 <= y1)
        y_delta = y1 - y2;
    else
        y_delta = y2 - y1;
    if (x_delta < y_delta)
    {
        x_y_shift = y_delta;
    }
    else
    {
        x_y_shift = x_delta;
        x_delta = y_delta;
    }
    v10 = ((2 * x_delta) + (4 * x_y_shift)) / 2;
    v11 = 2 * z_delta;
    v12 = v10;
    if (v10 < v11)
    {
        v10 = v11;
        v11 = v12;
    }
    v13 = (2 * v11) +(4 * v10);
    return v13 >> 2;
}


void close_sound(void)
{
    //int i;
   // for (i = 0; i < 215; i++)
       // free(raw_track[i]);
    //free(snd);

    
   SDL_CloseAudio();
   SDL_QuitSubSystem(SDL_INIT_AUDIO);
   Mix_CloseAudio();
}