
#include "struc_init.h"
#include "matrix_calc.h"
#include "matrixio.h"
#include "action.h"

#define change_direction 9
#define Stand_kneel 13

int16_t set_zero_expirean_temp_section(int32_t section)
{
    struct expirean_struct* expirean_ptr = expirean_t;
    expirean_ptr += section;
    expirean_ptr->flag == 0;
    return section;
}

void matrix_stp1()
{
    int16_t count = 0;
    int16_t v12 = 0;
    int16_t v0 = 0;
    int16_t ind = 0;
    int16_t agent_num = 0;
    int16_t* array;
    float alien_health;  //  float ?
    float agent_health; //   float ?
    float lim[2] = { 0.58, 1.71 };
    float v11;

    int8_t byte_30A8B0[100];
    int8_t byte_30A84C[100];

    memset(byte_30A8B0, 1, 100);
    memset(byte_30A84C, 0, 100);
    struct units_struct* units_ptr = units_t;
   
    do {
        if (units_ptr->matrix_ai_control[1] > 0 && get_time_func(0) <= units_ptr->time_unc)
            byte_30A8B0[units_ptr->exp_sec_num[1]] = 0;
        //printf("name %s\n", units_ptr ->name_t1);
        //printf("ai %d\n", units_ptr->matrix_ai_control[1]);
        units_ptr++;
    } while (units_ptr < units_t + 60);

    units_ptr = units_t;

    if (units_ptr < units_t + 60)
    {
        count = 0;
        do
        {
            if (units_ptr->matrix_ai_control[1] > 0)
            {
                if (byte_30A8B0[units_ptr->exp_sec_num[1]])
                {
                    if (!byte_30A84C[units_ptr->exp_sec_num[1]])
                    {
                        if (units_ptr->brainsuck_flag)
                        {
                            if (units_ptr->brainsuck_flag == 1)
                            {
                                alien_health = alien_health_damage_array[units_ptr->exp_sec_num[1]];
                                if (alien_health)
                                {
                                    agent_health = agent_health_damage_array[units_ptr->exp_sec_num[1]];
                                    v11 = agent_health / alien_health;
                                    v0 = 1;
                                    if (v11 > lim[v12])
                                    {
                                        do
                                        {
                                            if (v12 >= 2)
                                                break;
                                            v12 += 1;
                                            ++v0;
                                        } while (v11 > (lim[v12]));

                                    }

                                }
                                else
                                {
                                    v0 = (agent_health_damage_array[units_ptr->exp_sec_num[1]] != 0) + 1;
                                }

                            }
                        }
                        else
                        {
                            if (alien_health_damage_array[units_ptr->exp_sec_num[1]])
                            {
                                agent_health = agent_health_damage_array[units_ptr->exp_sec_num[1]];
                                alien_health = alien_health_damage_array[units_ptr->exp_sec_num[1]];
                                v11 = agent_health / alien_health;
                                v12 = 0;
                                v0 = 0;
                                if (v11 > lim[v12])
                                {
                                    do
                                    {
                                        if (v12 >= 2)
                                            break;
                                        v12 += 1;
                                        ++v0;
                                    } while (v11 > (lim[v12]));
                                }
                            }
                            else
                            {
                                v0 = (agent_health_damage_array[units_ptr->exp_sec_num[1]] != 0) + 1;
                            }

                        }
                        set_2_expirean_temp_section(units_ptr->exp_sec_num[1], 3 * units_ptr->brainsuck_flag + v0);
                        byte_30A84C[units_ptr->exp_sec_num[1]] = 1;

                    }
                    set_action_30(agent_num, 1, -1, -1);
                    side_array_set(units_ptr->side_t2, units_ptr->squad);

                }
            }
            agent_num++;
            units_ptr++;
        } while (units_ptr < units_t + 60);
    }

    units_ptr = units_t;

    if (units_ptr < units_t + 60)
    {
        count = 0;
        agent_num = 0;
        ind = 0;
        do
        {
            if (units_ptr->image != -1 || units_ptr->image_2 != -1)
            {
                array = units_ptr->action_30_array;
                {
                    if (ind < 20)
                    {
                        do
                        {
                            if (*array != -1)
                            {
                                if (byte_30A84C[*array])
                                    set_action_31(agent_num, count >> 1, -1);

                            }
                            ++array;
                            count += 2;
                            ind += 1;
                        } while (ind < 20);
                    }
                }
            }
            units_ptr++;

        } while (units_ptr < units_t + 60);
    }
}

void matrix_0_2()
{
    struct units_struct* v0;
    struct units_struct* v4;
    struct units_struct* off_2A177C;
    int32_t* v23;
    int32_t* v2;
    int16_t v22;
    int32_t v24;
    int32_t v21;
    int32_t v3;
    int32_t v5;
    int32_t v6;
    int32_t v8;
    int32_t v11;
    int32_t v15;
    int32_t v19;
    int32_t v20;
    int32_t v25;
    int16_t v18[60];
    int32_t dword_30A918[60];
    struct losarea_struct* v12;
    int32_t* off_2A1780;
    struct losarea_struct* losearea_ptr = losarea_t;


    if (update_matrix_flag)
    {
        off_2A177C = units_t;
        off_2A1780 = dword_30A918;
        return;
    }
    v0 = off_2A177C;
    v23 = off_2A1780;
    if (off_2A177C < units_t + 60)
    {
        v22 = off_2A177C - units_t;
        do
        {
            if (v0->image != -1)
            {
                if (v0->current_health > 0
                    && v0->current_health > v0->stun_level
                    && !v0->unit_status
                    && (AI_control_FULL == v0->AI_control_t2 || train_flag)
                    && !v0->matrix_action_27_mode
                    && !v0->field_475)
                {
                    if (v0->x_pos_2 != v0->x_pos_4 || v0->y_pos_2 != v0->y_pos_4 || v0->z_pos_2 != v0->z_pos_4)//x_pos_t2 - x_pos_t2 ?
                    {
                        if (*v23)
                        {
                            for (struct units_struct* i = units_t; i < units_t + 60; i++)
                            {
                                if (i->side_t2 == v0->side_t2
                                    && (AI_control_FULL == i->AI_control_t2 || train_flag)
                                    && i->squad == v0->squad
                                    && i->image != -1
                                    && i->current_health > 0
                                    && i->stun_level < i->current_health
                                    && !i->unit_status)
                                {
                                    i->field_474 = 0;
                                }
                            }
                        }
                        *v23 = 0;
                    }
                    else if (!*v23)
                    {
                        if (v0->matrix_ai_control[1] == 99)
                        {
                            sub_8E420(v0);
                        }
                        else
                        {
                            *v23 = 1;
                            v2 = dword_30A918;
                            v3 = 0;
                            v24 = 1;
                            v4 = agents_t;
                            v21 = v22 / 1180;
                            if (v4 < agents_t + 60)
                            {
                                v5 = 0;
                                do
                                {
                                    v6 = v0->squad;
                                    v20 = v0->side_t2;
                                    v19 = v6;
                                    if (v4->side_t2 == v20
                                        && (v4->AI_control_t2 == AI_control_FULL || train_flag)
                                        && v4->squad == v19
                                        && v4->image != -1
                                        && v4->current_health > 0
                                        && v4->stun_level < v4->current_health
                                        && !v4->unit_status)
                                    {
                                        if (*v2)
                                        {

                                            v25 = v5;
                                            v8 = v3++;
                                            v18[v8] = v5;
                                        }
                                        else
                                        {
                                            v24 = 0;
                                        }
                                    }
                                    v5++;
                                    v4++;
                                    ++v2;
                                } while (v4 < units_t + 60);
                            }
                            if (v24)
                            {
                                for (struct units_struct* j = units_t; j < units_t + 60; j++)
                                {
                                    if (j->side_t2 == v0->side_t2
                                        && (j->AI_control_t2 == AI_control_FULL || train_flag)
                                        && j->squad == v0->squad
                                        && j->image != -1
                                        && j->current_health > 0
                                        && j->stun_level < j->current_health
                                        && !j->unit_status)
                                    {
                                        j->field_474 = 1;
                                    }
                                }
                            }
                            v11 = v0->field_472;
                            if (v11 != -1)
                            {
                                v12 = losearea_ptr + v11;
                                struct behavior_struct* v13 = find_in_behavior_struc();
                                if (v13)
                                {
                                    v13->unit_action = change_direction;
                                    v13->agent_1 = v21;
                                    v13->val_2 = calc_unit_to_unit_direction_2d(
                                        v0->x_pos_2,
                                        v0->y_pos_2,
                                        v12->sections_x,
                                        v12->sections_y);
                                }
                                if (!v0->stand_Kneel)
                                {
                                    v0->field_46A = 1;
                                    struct behavior_struct* v14 = find_in_behavior_struc();
                                    if (v14)
                                    {
                                        v15 = v21;
                                        v14->unit_action = Stand_kneel;
                                        v14->agent_1 = v15;
                                    }
                                }
                            }
                            if (v0->curr_TU && v0->field_472 == -1 && v3 > 1)
                            {
                                sub_96130(v3, v18);
                                off_2A177C = v0 + 1;
                                off_2A1780 = v23 + 1;
                                return;
                            }
                        }
                    }
                }
            }
            v0++;
            v22++;
            ++v23;
        } while (v0 < agents_t + 60);
    }
    off_2A177C = agents_t;
    off_2A1780 = dword_30A918;
}

 void update_matrix_c()
{
    int32_t v1;
    uint32_t dword_30A73C=0;
    uint32_t dword_30A740=0;
    uint32_t dword_30A72C=0;
    uint32_t dword_30A738=0;
    uint32_t column=0;
    uint32_t column_0=0;
    uint32_t squad_array_1=0;
    uint32_t brainsucer_flag=0;
    uint32_t squad_1_0=0;
    int32_t brain_write_timer = 0;
    uint32_t index_long[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0 };
    uint32_t index_short[9] = { 1, 2, 3, 4, 5, 6, 7, 11, 0 };
    uint32_t index[12] = { 0 };
    uint32_t row_index = -1;
    uint32_t side_tmp = 27;
    int32_t squad_temp = -1;

    float dbl_E3218 = 1000.0;
    float dword_30A748 = 0;
    float dword_30A730 = 0;

    //write_expirien_dat();
    //WEAPEXP_write();

    if (update_matrix_flag)
    {
        dword_2A1578 = 0;
        agent_count = 0;
        brain_write_timer = 0;
        side_tmp = 27;                              // side_tmp 1 or 27 value
        squad_temp = -1;
        row_index = -1;
        return;
    }

    if (sc_mission_type != 1 || sc_mission_type != sc_bld_owner_sc)
        memcpy(index, index_long, 48);
    else
        memcpy(index, index_long, 36);

    v1 = brain_write_timer;

    if (36 * (second + 60 * (60 * hours + minute)) + tick > brain_write_timer)
    {
        write_expirien_dat();
        if (!WEAPEXP_write_flag)
            WEAPEXP_write();
        brain_write_timer = 36 * (second + 60 * (60 * hours + minute)) + tick + 500;
    }
    matrix_stp1();
    matrix_0_2();

}