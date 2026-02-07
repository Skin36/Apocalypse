#include <stdlib.h>
#include <stdio.h>
#include "struc_init.h"



static int calc_dist_3D(int x, int y, int z)
{
    int v3; // esi
    int v4; // ecx

    if (x < 0)
        x = -x;
    if (y < 0)
        y = -y;
    if (z < 0)
        z = -z;
    if (x <= y)
    {
        if (x <= z)
        {
            if (z <= y)
            {
                v3 = y;
                v4 = z;
            }
            else
            {
                v3 = z;
                v4 = y;
            }
            y = x;
        }
        else
        {
            v3 = y;
            v4 = x;
            y = z;
        }
    }
    else if (y <= z)
    {
        if (z <= x)
        {
            v3 = x;
            v4 = z;
        }
        else
        {
            v3 = z;
            v4 = x;
        }
    }
    else
    {
        v3 = x;
        v4 = y;
        y = z;
    }
    return 3 * (v4 - y) + 4 * y + 2 * (v3 - v4);
}

int all_struct_alloc(void)

{
    //random_dat_ofs = time() % 10013;
   
    behavior_t = malloc(145 * sizeof(struct behavior_struct));
    behavior_t = struc_behavior;
  
    units_t = malloc(60 * sizeof(struct units_struct));;
    units_t = &agents_t;

    expirean_t = malloc(100 * sizeof(struct expirean_struct));
    expirean_t = &expirean_temp_2;

    brain_t = malloc(100 * sizeof(struct brain_struct));
    brain_t = &BRAIN_DAT;

    losarea_t = malloc(3500 * sizeof(struct losarea_struct));
    losarea_t = &losarea_dat;

    return 0;
}

struct behavior_struct* find_in_behavior_struc()
{
    int16_t count = 0;
    struct behavior_struct* behavior_ptr = behavior_t;

    do
    {
        if (!behavior_ptr->unit_action)
            break;
        ++count;
        ++behavior_ptr;
    } while (count < 145);

    if (count == 145)
        behavior_ptr = 0;

    return behavior_ptr;
}

int16_t set_2_expirean_temp_section(int16_t expirean_row_num, int16_t section)
{
    int16_t section_new;
    int16_t section_found;
    struct expirean_struct* expirean_ptr = expirean_t;
    struct brain_struct* brain_ptr = brain_t;
    expirean_ptr += expirean_row_num;
    expirean_ptr->flag = 2;
    expirean_ptr->section = section;
    section_found = find_section_brain_dat(expirean_ptr->index, 0, 0);
    section_new = section + 1;
    brain_ptr += section_found;
    if (section + 1 < brain_ptr->section)
        section_new = brain_ptr ->section;
    brain_ptr->section = section_new;

    return 0;
}

int32_t find_section_brain_dat(int32_t index, int32_t row_count, int32_t section) {
    int32_t k = 0;
    int32_t v20 = 0;
    int32_t brain_index_count_temp = 0;
    struct brain_struct* brain_ptr = brain_t;

    if (brain_index_count > 0)
    {
        while (index != (brain_ptr + k)->index)
        {
            ++k;
            if (k >= brain_index_count)
                goto lebel_8;
        }
        v20 = 1;
        if (row_count != 0)// проверить &sect
            row_count = (brain_ptr + k)->row_count;
        brain_index_count_temp = k;
    }

lebel_8:
    if (!v20) {
        if (brain_index_count >= 25)
            return -1;
        brain_index_count_temp = brain_index_count;
        (brain_ptr + brain_index_count)->index = index;
        (brain_ptr + brain_index_count)->row_count = row_count;
        (brain_ptr + brain_index_count)->section = section;

        int32_t i;
        int32_t j;
        int32_t k;
        int32_t l;
        int32_t n;
        int32_t v9 = 0;
        for (i = 0; i < 6; ++i)
        {

            for (j = 0; j < row_count; ++j)
            {
                (brain_ptr + brain_index_count)->fsection[i].shot_section[j][0] = -0.5;
                (brain_ptr + brain_index_count)->fsection[i].shot_section[j][1] = 1.0;
                for (k = 2; k < 12; ++k)
                {
                    (brain_ptr + brain_index_count)->fsection[i].shot_section[j][k] = 0;
                }

            }
            (brain_ptr + brain_index_count)->fsection[i].total = 0;
            for (l = 0; l < 25; ++l)
            {
                for (n = 0; n < 25; ++n)
                {
                    if (l = n)//why it not work for [0][0] ?
                        (brain_ptr + brain_index_count)->fsection[i].long_section[l][n] = 1;
                    else
                        (brain_ptr + brain_index_count)->fsection[i].long_section[l][n] = 0;
                }
            }
            (brain_ptr + brain_index_count)->fsection[i].long_section[0][0] = 1;

        }
        ++brain_index_count;
    }

    return brain_index_count_temp;
}

//for test
static void print_unit(void)
{
    int i;
    struct units_struct *units_ptr = units_t;

    for (i = 0; i < 215; i++)
    {
        printf("%s\n", (units_ptr + i)->name_t1);
    }
}

int16_t side_array_set(int16_t side, int16_t squad)
{
    int16_t v7;
    int16_t agent_count_tmp;
    int16_t i;
    for (i = 0; ; ++i)
    {
        v7 = side != side_array[agent_count_tmp] || squad != squad_array[agent_count_tmp];
        if (!v7 || i >= dword_2A1578)
            break;
        if (++agent_count_tmp == 60)
            agent_count_tmp = 0;
    }
    if (i == dword_2A1578)
    {
        dword_2A1578 = dword_2A1578 + 1;
        side_array[agent_count_tmp] = side;
        squad_array[agent_count_tmp] = squad;
    }


    return agent_count_tmp;
}

int free_all_mem(void)
{
    free(behavior_t);
    free(units_t);
    free(expirean_t);
    free(brain_t);
    free(losarea_t);
    return 0;

}

int16_t calc_unit_to_unit_direction_2d(int16_t x1, int16_t y1, int16_t x2, int16_t y2)
{

    int16_t result = 0;
    int16_t delta_x = x2 - x1;
    int16_t delta_y = y2 - y1;

    if (delta_y - (2 * delta_x) < 0 && (2 * delta_x) + delta_y <= 0)
        return 0;
    if (delta_y + 2 * delta_x > 0 && delta_x + 2 * delta_y <= 0)
        return 1;
    if (2 * delta_y + delta_x > 0 && 2 * delta_y - delta_x <= 0)
        return 2;
    if (2 * delta_y - delta_x > 0 && delta_y - 2 * delta_x <= 0)
        return 3;
    if (delta_y - 2 * delta_x > 0 && delta_y + 2 * delta_x >= 0)
        return 4;
    if (delta_y + 2 * delta_x < 0 && delta_x + 2 * delta_y >= 0)
        return 5;
    if ((2 * delta_y) + delta_x >= 0 || (2 * delta_y) - delta_x < 0)
        result = 7;
    else
        result = 6;
    return result;
}

int16_t get_time_func(int16_t a1)
{
    int result; // eax

    if (a1 && game_type_0)
        result = dword_27A0F0;
    else
        result = 36 * (second + 60 * (minute + 60 * hours)) + tick;
    return result;
}
