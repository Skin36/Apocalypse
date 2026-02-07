//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <io.h>
#include <stdint.h>
#include <stdbool.h>
#include <SDL.h>
#include <SDL_mixer.h>
#include "sound.h"
#include "debug.h"

#define MIX_MAX_BALANCE 255


void load_sounds(void);
int get_balance(int16_t x_pos, int16_t y_pos);
int get_first_free_channel(int index);
int get_volume_dist(int16_t x1, int16_t y1, int16_t z1, int16_t x2, int16_t y2, int16_t z2);

extern uint16_t map_view_flag;
extern uint8_t main_volum_flg;
extern uint16_t snd_volum_flg;
extern uint8_t swap_channal_flag;

extern int8_t camera_coord_x_3;
extern int16_t camera_coord_y_5;
extern int16_t camera_coord_7_x;
extern int16_t camera_coord_9_y;
extern int16_t camera_z_coord;

extern int16_t AI_contrl_NONE;
extern int16_t player_side;

extern uint16_t main_volum;
extern uint16_t snd_volum;


int m_num_simultaneously_playing_channels;
bool m_sound_was_initted = false;
uint16_t main_volum_tmp;


char* sound_path[215] = {               
                 {"SOUND/EXTRA/ATMODEM.WAV"},
                 {"SOUND/EXTRA/ATRADIO.WAV"},
                 {"SOUND/EXTRA/EXPTERR.WAV"},
                 {"SOUND/EXTRA/FTCONC1.WAV"},
                 {"SOUND/EXTRA/FTCONC2.WAV"},
                 {"SOUND/EXTRA/FTMARB1.WAV"},
                 {"SOUND/EXTRA/FTMARB2.WAV"},
                 {"SOUND/EXTRA/FTMETAL1.WAV"},
                 {"SOUND/EXTRA/FTMETAL2.WAV "},
                 {"SOUND/EXTRA/FTMUD1.WAV"},
                 {"SOUND/EXTRA/FTMUD2.WAV"},
                 {"SOUND/EXTRA/FTSLUDG1.WAV"},
                 {"SOUND/EXTRA/FTSLUDG2.WAV"},
                 {"SOUND/EXTRA/FTSOFT1.WAV "},
                 {"SOUND/EXTRA/FTSOFT2.WAV"},
                 {"SOUND/EXTRA/FTTUBE1.WAV"},
                 {"SOUND/EXTRA/FTTUBE2.WAV"},
                 {"SOUND/EXTRA/FTWOOD1.WAV"},
                 {"SOUND/EXTRA/FTWOOD2.WAV "},
                 {"SOUND/EXTRA/HDETHF1.WAV "},
                 {"SOUND/EXTRA/HDETHF2.WAV"},
                 {"SOUND/EXTRA/HDETHM1.WAV "},
                 {"SOUND/EXTRA/HDETHM2.WAV"},
                 {"SOUND/EXTRA/HDETHM3.WAV"},
                 {"SOUND/EXTRA/HPAINF1.WAV "},
                 {"SOUND/EXTRA/HPAINF2.WAV"},
                 {"SOUND/EXTRA/HPAINM1.WAV"},
                 {"SOUND/EXTRA/HPAINM2.WAV"},
                 {"SOUND/EXTRA/HPAINM3.WAV"},
                 {"SOUND/EXTRA/LBUTTN1.WAV"},
                 {"SOUND/EXTRA/LBUTTN2.WAV"},
                 {"SOUND/EXTRA/LOCLANG.WAV"},
                 {"SOUND/EXTRA/MBSPREAD.WAV"},
                 {"SOUND/EXTRA/OBJFALL1.WAV"},
                 {"SOUND/EXTRA/OBJFALL2.WAV"},
                 {"SOUND/EXTRA/OBJFALL3.WAV"},
                 {"SOUND/EXTRA/RUBCRASH.WAV"},
                 {"SOUND/EXTRA/TRONLAUN.WAV"},
                 {"SOUND/SPARES/DIMFIELD.WAV"},
                 {"SOUND/SPARES/FORCEWEB.WAV"},
                 {"SOUND/SPARES/MTRACKER.WAV"},
                 {"SOUND/SPARES/PISTOL.WAV"},
                 {"SOUND/SPARES/PISTOL2.WAV"},
                 {"SOUND/STRATEGC/EXPLOSNS/DIMSHIFT.WAV"},
                 {"SOUND/STRATEGC/EXPLOSNS/EXPLOSN1.WAV"},
                 {"SOUND/STRATEGC/EXPLOSNS/EXPLOSN2.WAV"},
                 {"SOUND/STRATEGC/EXPLOSNS/EXPLOSN3.WAV"},
                 {"SOUND/STRATEGC/EXPLOSNS/SHLDHIT1.WAV"},
                 {"SOUND/STRATEGC/EXPLOSNS/TELEPORT.WAV"},
                 {"SOUND/STRATEGC/INTRFACE/BUTTNDRP.WAV"},
                 {"SOUND/STRATEGC/INTRFACE/BUTTON1.WAV"},
                 {"SOUND/STRATEGC/INTRFACE/DAMAGE.WAV"},
                 {"SOUND/STRATEGC/INTRFACE/UFOALERT.WAV"},
                 {"SOUND/STRATEGC/TERRAIN/DGATE_IN.WAV"},
                 {"SOUND/STRATEGC/TERRAIN/DGAT_OUT.WAV"},
                 {"SOUND/STRATEGC/TERRAIN/TERRN_LP.WAV"},
                 {"SOUND/STRATEGC/VEHICLE/BIGUFO2.WAV"},
                 {"SOUND/STRATEGC/VEHICLE/BIGUFO3.WAV"},
                 {"SOUND/STRATEGC/VEHICLE/COPSIRN1.WAV"},
                 {"SOUND/STRATEGC/VEHICLE/COPSIRN2.WAV"},
                 {"SOUND/STRATEGC/VEHICLE/ELECTCAR.WAV"},
                 {"SOUND/STRATEGC/VEHICLE/HOVERCAR.WAV"},
                 {"SOUND/STRATEGC/VEHICLE/MEDUFO.WAV"},
                 {"SOUND/STRATEGC/VEHICLE/MEDUFO3.WAV"},
                 {"SOUND/STRATEGC/VEHICLE/ROADCAR1.WAV"},
                 {"SOUND/STRATEGC/VEHICLE/SMALLUFO.WAV"},
                 {"SOUND/STRATEGC/VEHICLE/SMLUFO2.WAV"},
                 {"SOUND/STRATEGC/VEHICLE/SMLUFO3.WAV"},
                 {"SOUND/STRATEGC/VEHICLE/SP_LINER.WAV"},
                 {"SOUND/STRATEGC/VEHICLE/TANKLP.WAV"},
                 {"SOUND/STRATEGC/VEHICLE/TRUCKS.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/AIRGUARD.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/BOLTER.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/DINVRSN1.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/DISRUPT1.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/DISRUPT2.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/DISRUPT3.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/GR_MISSL.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/HELLFIRE.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/JANITOR.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/JUSTICE.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/LANCER.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/MARSDEF.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/MARSPLAS.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/MARS_GLM.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/MCANNON.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/MEGLASER.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/MPLASMA1.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/MPLASMA2.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/MULTPLAS.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/REPEATER.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/RETRIB.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/RUPTMULT.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/STASIS.WAV"},
                 {"SOUND/STRATEGC/WEAPONS/TNKCANON.WAV"},
                 {"SOUND/TACTICAL/ALIENS/ATTACKS/BRAINSUK.WAV"},
                 {"SOUND/TACTICAL/ALIENS/ATTACKS/PSIMORPH.WAV"},
                 {"SOUND/TACTICAL/ALIENS/ATTACKS/QUEENWHP.WAV"},
                 {"SOUND/TACTICAL/ALIENS/ATTACKS/SPITTER.WAV"},
                 {"SOUND/TACTICAL/ALIENS/ATTACKS/WORMSPIT.WAV"},
                 {"SOUND/TACTICAL/ALIENS/ATTACKS/WRMATTAK.WAV"},
                 {"SOUND/TACTICAL/ALIENS/ATTACKS/WRMHIT.WAV"},
                 {"SOUND/TACTICAL/ALIENS/CRIES/ANTHRPD1.WAV"},
                 {"SOUND/TACTICAL/ALIENS/CRIES/ANTHRPD2.WAV"},
                 {"SOUND/TACTICAL/ALIENS/CRIES/BRNSUKR1.WAV"},
                 {"SOUND/TACTICAL/ALIENS/CRIES/BRNSUKR2.WAV"},
                 {"SOUND/TACTICAL/ALIENS/CRIES/BRNSUKR3.WAV"},
                 {"SOUND/TACTICAL/ALIENS/CRIES/MEGTRON.WAV"},
                 {"SOUND/TACTICAL/ALIENS/CRIES/MWORM1.WAV"},
                 {"SOUND/TACTICAL/ALIENS/CRIES/MWORM2.WAV"},
                 {"SOUND/TACTICAL/ALIENS/CRIES/POPPER1.WAV"},
                 {"SOUND/TACTICAL/ALIENS/CRIES/POPPER2.WAV"},
                 {"SOUND/TACTICAL/ALIENS/CRIES/PSIMRPH1.WAV"},
                 {"SOUND/TACTICAL/ALIENS/CRIES/PSIMRPH2.WAV"},
                 {"SOUND/TACTICAL/ALIENS/CRIES/QUEENSP1.WAV"},
                 {"SOUND/TACTICAL/ALIENS/CRIES/SALISCRY.WAV"},
                 {"SOUND/TACTICAL/ALIENS/CRIES/SKELETLD.WAV"},
                 {"SOUND/TACTICAL/ALIENS/CRIES/SPITTR1.WAV" },
                 {"SOUND/TACTICAL/ALIENS/CRIES/SPITTR2.WAV"},
                 {"SOUND/TACTICAL/ALIENS/DEATHS/ANTHRPD1.WAV"},
                 {"SOUND/TACTICAL/ALIENS/DEATHS/BRNSUKR2.WAV"},
                 {"SOUND/TACTICAL/ALIENS/DEATHS/CHRYSALS.WAV"},
                 {"SOUND/TACTICAL/ALIENS/DEATHS/GUNK.WAV"},
                 {"SOUND/TACTICAL/ALIENS/DEATHS/HOWL.WAV"},
                 {"SOUND/TACTICAL/ALIENS/DEATHS/HYPWRM01.WAV"},
                 {"SOUND/TACTICAL/ALIENS/DEATHS/MEGHOWL.WAV"},
                 {"SOUND/TACTICAL/ALIENS/DEATHS/QUEENSP2.WAV"},
                 {"SOUND/TACTICAL/ALIENS/DEATHS/SKELETD1.WAV"},
                 {"SOUND/TACTICAL/ALIENS/DEATHS/SPITTR1.WAV"},
                 {"SOUND/TACTICAL/ALIENS/DEATHS/WORMEGG.WAV"},
                 {"SOUND/TACTICAL/ALIENS/MOVEMNTS/ANTHROP1.WAV"},
                 {"SOUND/TACTICAL/ALIENS/MOVEMNTS/HYPWORM1.WAV"},
                 {"SOUND/TACTICAL/ALIENS/MOVEMNTS/MEGTRON1.WAV"},
                 {"SOUND/TACTICAL/ALIENS/MOVEMNTS/MEGTRON2.WAV"},
                 {"SOUND/TACTICAL/ALIENS/MOVEMNTS/MULTWORM.WAV"},
                 {"SOUND/TACTICAL/ALIENS/MOVEMNTS/POPPER1.WAV "},
                 {"SOUND/TACTICAL/ALIENS/MOVEMNTS/POPPER2.WAV "},
                 {"SOUND/TACTICAL/ALIENS/MOVEMNTS/QUEENSPN.WAV"},
                 {"SOUND/TACTICAL/ALIENS/MOVEMNTS/SCUTTLE.WAV "},
                 {"SOUND/TACTICAL/ALIENS/MOVEMNTS/SKELSTP1.WAV"},
                 {"SOUND/TACTICAL/ALIENS/MOVEMNTS/SKELSTP2.WAV"},
                 {"SOUND/TACTICAL/ALIENS/MOVEMNTS/SPITTER1.WAV"},
                 {"SOUND/TACTICAL/ALIENS/MOVEMNTS/SPITTER2.WAV"},
                 {"SOUND/TACTICAL/EXPLOSNS/EXPLOSN1.WAV"},
                 {"SOUND/TACTICAL/EXPLOSNS/EXPLOSN2.WAV"},
                 {"SOUND/TACTICAL/EXPLOSNS/FIREXPLS.WAV"},
                 {"SOUND/TACTICAL/EXPLOSNS/GASEXPLS.WAV"},
                 {"SOUND/TACTICAL/EXPLOSNS/MTRACK1.WAV"},
                 {"SOUND/TACTICAL/EXPLOSNS/MTRACK2.WAV"},
                 {"SOUND/TACTICAL/EXPLOSNS/PSIGRNAD.WAV"},
                 {"SOUND/TACTICAL/EXPLOSNS/SHLDHIT1.WAV"},
                 {"SOUND/TACTICAL/EXPLOSNS/STUNGRND.WAV"},
                 {"SOUND/TACTICAL/EXPLOSNS/TELEPORT.WAV"},
                 {"SOUND/TACTICAL/INTRFACE/BUTTON1.WAV"},
                 {"SOUND/TACTICAL/INTRFACE/ENEMY.WAV"},
                 {"SOUND/TACTICAL/INTRFACE/UNDRFIRE.WAV"},
                 {"SOUND/TACTICAL/TERRAIN/DOORWHSH.WAV"},
                 {"SOUND/TACTICAL/TERRAIN/LIFTLOOP.WAV"},
                 {"SOUND/TACTICAL/TERRAIN/TELEPOT2.WAV"},
                 {"SOUND/TACTICAL/TERRAIN/TERRAIN.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/BOOMROID.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/BULLET1.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/BULLET2.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/BULLET3.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/DCANNON1.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/DIMNMISL.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/DISRUPTR.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/DSTABLSR.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/ENTROPY.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/MARSEC1.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/MARSEC2.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/MEGAPOL.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/MEGASTUN.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/MEGCANON.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/MEGHIT.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/POWERS.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/PSIONIC1.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/SNIPER.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/SUCKLAUN.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/THROW1.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/THROW2.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/TOXIGUN.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/TRAKGUN.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/TRAKHIT.WAV"},
                 {"SOUND/TACTICAL/WEAPONS/ZAPHIT.WAV"},
                 {"SOUND/EXTRA/TEXTBEEP.WAV"},
                 {"SOUND/EXTRA/BRHATCH.WAV"},
                 {"SOUND/EXTRA/OBCONC.WAV"},
                 {"SOUND/EXTRA/OBMARB.WAV"},
                 {"SOUND/EXTRA/OBMETAL.WAV"},
                 {"SOUND/EXTRA/OBMUD.WAV"},
                 {"SOUND/EXTRA/OBSLUDG.WAV"},
                 {"SOUND/EXTRA/OBSOFT.WAV"},
                 {"SOUND/EXTRA/OBTUBE.WAV"},
                 {"SOUND/EXTRA/OBWOOD.WAV"},
                 {"SOUND/zEXTRA/ALERT.WAV",},
                 {"SOUND/zEXTRA/ALERT2.WAV"},
                 {"SOUND/zEXTRA/ALERT3.WAV"},
                 {"SOUND/zEXTRA/ALERT4.WAV"},
                 {"SOUND/zEXTRA/DOOR1.WAV"},
                 {"SOUND/zEXTRA/DOOR2.WAV"},
                 {"SOUND/zEXTRA/DOOR3.WAV"},
                 {"SOUND/zEXTRA/DOOR4.WAV"},
                 {"SOUND/zEXTRA/DOOR5.WAV"},
                 {"SOUND/zEXTRA/GRAVLIFT.WAV"},
                 {"SOUND/zEXTRA/HIT1.WAV"},
                 {"SOUND/zEXTRA/HIT2.WAV"},
                 {"SOUND/zEXTRA/HIT3.WAV"},
                 {"SOUND/zEXTRA/PSIONIC1.WAV"},
                 {"SOUND/zEXTRA/PSIONIC2.WAV"},
                 {"SOUND/zEXTRA/PSIONIC4.WAV"},
                 {"SOUND/zEXTRA/PSIONIC5.WAV"},
                 {"SOUND/zEXTRA/PSIONIC6.WAV"},
                 {"SOUND/zEXTRA/PSIONIC7.WAV"},
                 {"SOUND/zEXTRA/LASEROF2.WAV"} };
Mix_Chunk* sounds[215];
int chunk_vol[215] = {2075,1999,3239,79,90,95,120,214,201,155,197,602,661,161,249,591,551,116,111,658,1296,1128,1306,1712,453,419,503,307,496,31,225,2254,1810,205,137,295,2137,753,
                      1338,1967,457,595,551,1037,1548,2059,1054,777,1127,18,53,701,320,2136,2136,2179,1381,1636,908,1829,1515,1116,1579,1992,1823,304,1310,873,2118,1308,1702,800,406,
                      1918,799,1023,1090,1356,886,1160,1430,1049,1278,831,1830,764,293,243,680,604,378,855,1107,834,592,1851,1878,687,773,977,1787,828,1840,1158,1652,2218,1208,1924,
                      476,607,2154,1811,2200,2162,1923,1464,1176,914,1062,2166,1675,937,1082,1219,696,2052,1893,2226,1689,462,308,1870,393,524,2031,387,297,2172,1800,119,170,509,268,
                      2100,1475,1899,2022,94,221,1631,777,704,975,53,307,599,788,2124,729,1499,804,563,556,492,1016,2092,652,375,1147,1370,2223,437,576,703,393,356,1418,145,650,295,277,
                      322,290,241,662,63,378,96,36,182,137,194,43,777,137,1295,1660,4021,1660,483,493,618,557,526,1798,962,1007,600,1656,604,1776,1886,1770,1207,1048
 };



void load_sounds()
{
    int i;
    load_units();
    for (i = 0; i < 215; i++)
    {
        sounds[i] = Mix_LoadWAV(sound_path[i]);
        if (sounds[i] == NULL)
        {
            printf("Failed to load sound effect! SDL_mixer Error: %s\n", Mix_GetError());
            printf("Sound effect not load: %s\n", sound_path[i]);
        }

    }

}

 int sound_init()
 {
     load_sounds();
     int ret_val = 0;
     m_num_simultaneously_playing_channels = 6;
     int max_channels = 215 * m_num_simultaneously_playing_channels;
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

     if (!ret_val)
     {
         m_sound_was_initted = true;
     }
     return ret_val;
 }

int sound(int raw_ind, int16_t x_pos, int16_t y_pos, int16_t z_pos, int16_t unc)
{
    if (!m_sound_was_initted)
    {
        return -1;
    }


    if (main_volum_flg && snd_volum_flg && raw_ind != -1)
    {
        int ret_val = 0;
        int l_balance;
        int r_balance;

        //get original scale //255
        //32768
        main_volum_tmp = get_sound_volume(x_pos, y_pos, z_pos, 32768, chunk_vol[raw_ind]) >> 8; // *255

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
            if (r_balance > 255)
                r_balance = 255;
        }
        else if (balance_shift < 0)
        {
            r_balance = 0;
            l_balance = (~balance_shift+1) >> 7;
            if (l_balance > 255)
                l_balance = 255;
        }
        int free_channel_index = get_first_free_channel(raw_ind);
        Mix_Volume(free_channel_index, main_volum_tmp);
        ret_val |= Mix_SetPanning(free_channel_index, (uint8_t)l_balance, (uint8_t)r_balance);       
        ret_val |= Mix_PlayChannel(free_channel_index, sounds[raw_ind], 0);
        //Mix_SetDistance(0, 1);  
    }
    return 1;
}

int get_sound_volume(int16_t x_pos, int16_t y_pos, int16_t z_pos, uint16_t max_volume, uint16_t volume_limit)
{
    uint16_t v6 = 65535;
    uint16_t v7 = 0;
    int16_t v18 = -1;
    int16_t v9, v10, v12, v13, v14, v15, v17, v19, v22;



    if (map_view_flag || x_pos < 0)
    {
        if (x_pos < 0)
        {
            v17 = max_volume;
        }
        else
        {
            v19 = get_volume_dist(x_pos, y_pos, z_pos, camera_coord_7_x + 40, camera_coord_9_y + 22, camera_z_coord);
            
            if (v19 <= 75 || volume_limit >= 500)
            {
                v12 = v19 * (max_volume / 75);
                if (max_volume - v12 >= 0)
                    v13 = max_volume - v12;
                else
                    v13 = 0;
                v17 = v13;
            }
            else
            {
                v17 = 0;
            }
            if (v17)
            {
                v22 = 0;

                do
                {
                    if ((units_ptr + v22)->image != -1 && AI_contrl_NONE == (units_ptr + v22)->AI_control_t2 && player_side == (units_ptr + v22)->side_t2)
                    {
                        v14 = get_volume_dist(x_pos, y_pos, z_pos, (units_ptr + v22)->x_pos_t2, (units_ptr + v22)->y_pos_t2, (units_ptr + v22)->z_pos_t2);
                        
                        if (v14 < v6)
                        {
                            v6 = v14;
                            v18 = v22;
                        }
                    }
                 
                    ++v22;
                } while (v22 < 60);

                if (v18 != -1 && v6 <= 50u)
                {
                    v15 = max_volume - v6 * (max_volume / 50);
                    if (v15 < 0)
                        v15 = 0;
                    v7 = v15;
                }
                if (v6 > 50u)
                    v7 = 0;
                if (v7 < v17)
                    v17 = v7;
            }
        }
    }
    else
    {
        v19 = get_volume_dist(x_pos, y_pos, z_pos, camera_coord_x_3 + 30, camera_coord_y_5 + 30, camera_z_coord); 
        if (v19 <= 75 || volume_limit >= 500)
        {
            v9 = v19 * (max_volume / 75);
            
            if (max_volume - v9 >= 0)
                v10 = max_volume - v9;
            else
                v10 = 0;
            v17 = v10;
        }
        else
        {
            v17 = 0;
        }
        
        if (v17)
        {
            v22 = 0;

            do
            {
            
                if ((units_ptr + v22)->image != -1 && AI_contrl_NONE == (units_ptr + v22)->AI_control_t2 && player_side == (units_ptr + v22)->side_t2)
                    //x-com only
                {
                    v19 = get_volume_dist(x_pos, y_pos, z_pos, (units_ptr + v22)->x_pos_t2, (units_ptr + v22)->y_pos_t2, (units_ptr + v22)->z_pos_t2);
                    
                
                   
                    if (v19 < v6)
                    {
                        v6 = v19;
                        v18 = v22;
                    }
                }
                ++v22;
            } while (v22 < 60);
           

            if (v18 != -1 && v6 <= 50u)
            {
                v7 = max_volume - v6 * (max_volume / 50);
              
                if (v7 < 0)
                    v7 = 0;
            }
            if (v6 > 50u)
                v7 = 0;
            if (v7 < v17)
                v17 = v7;
           
        }
    }
    
    //printf("volum %d\n", snd_volum* (main_volum* v17 / 1000) / 1000);
    return snd_volum * (main_volum * v17 / 1000) / 1000;
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


int get_first_free_channel(int chunk_index)
{
    const int channel_index = chunk_index * m_num_simultaneously_playing_channels;
    for (int i = channel_index; i < channel_index + m_num_simultaneously_playing_channels; i++)
    {
        if (!Mix_Playing(i))
        {
            return i;
        }
    }
    Mix_HaltChannel(channel_index);
    return channel_index;
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
