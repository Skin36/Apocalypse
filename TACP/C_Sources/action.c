
#include "action.h"
#include "struc_init.h"
#include "sdl_event.h"

#define AI_control_NONE 0
#define Reserve_TU_shot 35 //fix to enum

int16_t check_unit_live(struct units_struct* agent_ptr, int16_t side, int16_t squad)
{
    int16_t health;
    int16_t result;


    result = 0;
    if (agent_ptr->side_t2 == side
        && (AI_control_FULL == agent_ptr->AI_control_t2 || train_flag)
        && agent_ptr->squad == squad
        && agent_ptr->image != -1)
    {
        health = agent_ptr->current_health;
        if (health > 0 && health > agent_ptr->stun_level && !agent_ptr->unit_status)
            result = 1;
    }
    return result;
}

//agent_num и sqAgents массив
static int16_t set_action_1B(int16_t a1, int16_t *agent_num, int16_t x_pos, int16_t y_pos, int16_t z_pos, int16_t* sqAgcount, int16_t* sqAgents)
{
    struct units_struct* agents_ptr = units_t;
    struct behavior_struct* behavior_ptr;

    *sqAgcount = 0;
    int16_t count = 0;
    int16_t sec_num = 0;
    int16_t sq_count = 0;

    while (1)
    {
        if (a1 <= count)
            break;
        agents_ptr += *agent_num;
        if (agents_ptr->matrix_action_27_mode)
        {
            
            behavior_ptr = find_in_behavior_struc();
            if (behavior_ptr)
            {
                behavior_ptr->unit_action = behavior_action_1B;
                behavior_ptr->val_2 = 0;
                behavior_ptr->agent_1 = *agent_num;
            }


            if (agents_ptr->matrix_ai_control[0] != -1)
            {
                sec_num = agents_ptr->exp_sec_num[0];
                if (sec_num == -1)
                    set_action_30(*agent_num, 0, -1, -1);
                else
                    sub_95630(sec_num);
            }
        }

        if (!agents_ptr->field_475)
        {
            *sqAgents = *agent_num;
            ++sqAgents;
            ++*sqAgcount;
          
        }
        if (AI_control_FULL == agents_ptr->AI_control_t2 || train_flag)
        {
            agents_ptr->x_pos_unc = x_pos;
            agents_ptr->y_pos_unc = y_pos;
            agents_ptr->z_pos_unc = z_pos;
        }
        ++agent_num;
        ++count;
    }

    return 1;
}

int16_t set_action_30(int16_t agent_num, int16_t mode, int16_t ai_control, int16_t exp_array)
{

    struct units_struct* units_ptr = units_t;
    struct behavior_struct* behavior_ptr;

    (units_ptr + agent_num);
    if (ai_control != units_ptr->matrix_ai_control[mode + 1] || exp_array != units_ptr->exp_sec_num[mode + 1])
    {
        if (unit_action_flag)
        {
            units_ptr->matrix_ai_control[mode] = ai_control;
            units_ptr->exp_sec_num[mode] = exp_array;
        }
    }
    else
    {
        behavior_ptr = find_in_behavior_struc();
        if (behavior_ptr)
        {
            behavior_ptr->unit_action = set_exp_array_num;//set enum set_exp_array_num
            behavior_ptr->val_3 = mode;
            behavior_ptr->val_2 = ai_control;
            behavior_ptr->val_4 = exp_array;
            behavior_ptr->agent_1 = agent_num;
        }
    }
    return 1;
}

int16_t set_action_31(int16_t agent_num, int16_t mode, int16_t ai_control)
{
    struct units_struct* units_ptr = units_t;
    struct behavior_struct* behavior_ptr;

    units_ptr+= agent_num;
    if (ai_control != units_ptr->action_30_array[mode])
    {
        {
            if (unit_action_flag)
                units_ptr->action_30_array[mode] = ai_control;
        }
    }
    else
    {

        behavior_ptr = find_in_behavior_struc();
        if (behavior_ptr)
        {
            behavior_ptr->unit_action = behavior_action_1F;
            behavior_ptr->val_3 = mode;
            behavior_ptr->val_2 = ai_control;
            behavior_ptr->agent_1 = agent_num;
        }
    }
    return 1;
}

int16_t single_formation_action_(int16_t a1, int16_t* agent_num, int16_t x_pos, int16_t y_pos, int16_t z_pos)
{
    int16_t v6, v7, v12, v13, v14, v15, v16, result, v23, v17;
    int16_t sqAgents[6];
    struct units_struct* units_ptr = units_t;
    struct behavior_struct* behavior_ptr;

    if (sc_mission_type == 1 && sc_mission_type == sc_bld_owner_sc)
    {
        if (a1 >= 6)
            v6 = 6;
        else
            v6 = a1;
        a1 = v6;
    }
    if (a1 >= 6)
        v7 = 6;
    else
        v7 = a1;
    result = set_action_1B(v7, agent_num, x_pos, y_pos, z_pos, &v23, sqAgents);// result???
    units_ptr += sqAgents[0];
    if (v23)
    {
        behavior_ptr = find_in_behavior_struc();
        if (behavior_ptr)
        {
            behavior_ptr->unit_action = 25;  //enum

            if (key_press("J"))
            {
                if (units_ptr->AI_control_t2 == AI_control_NONE)
                    behavior_ptr->unit_action = single_file_action;
            }
            behavior_ptr->agent_1 = sqAgents[0];
            if (v23 <= 1)
                v12 = -1;
            else
                v12 = sqAgents[1];
            behavior_ptr->val_2 = v12;
            if (v23 <= 2)
                v13 = -1;
            else
                v13 = sqAgents[2];
            behavior_ptr->val_3 = v13;
            if (v23 <= 3)
                v14 = -1;
            else
                v14 = sqAgents[3];
            behavior_ptr->val_4 = v14;
            if (v23 <= 4)
                v15 = -1;
            else
                v15 = sqAgents[4];
            behavior_ptr->val_5 = v15;
            if (v23 <= 5)
                v16 = -1;
            else
                v16 = sqAgents[5];
            behavior_ptr->val_6 = v16;
            behavior_ptr->x_pos = x_pos;
            behavior_ptr->y_pos = y_pos;
            behavior_ptr->z_pos = z_pos;
        }
    }
    return 1;
}

int16_t group_formation_action_(int16_t a1, int16_t* agent_num, int16_t x_pos, int16_t y_pos, int16_t z_pos)
{
    int16_t v6, v7, v12, v13, v14, v15, v16, result, v23, v17;
    int16_t sqAgents[6];
    struct units_struct* units_ptr = units_t;
    struct behavior_struct* behavior_ptr;

    if (sc_mission_type == 1 && sc_mission_type == sc_bld_owner_sc)
    {
        if (a1 >= 6)
            v6 = 6;
        else
            v6 = a1;
        a1 = v6;
    }
    if (a1 >= 6)
        v7 = 6;
    else
        v7 = a1;
    result = set_action_1B(v7, agent_num, x_pos, y_pos, z_pos, &v23, sqAgents);// result???
    units_ptr += sqAgents[0];
    if (v23)
    {
        behavior_ptr = find_in_behavior_struc();
        if (behavior_ptr)
        {
            behavior_ptr->unit_action = 24;  //enum

            if (key_press("J"))
            {
                if (units_ptr->AI_control_t2 == AI_control_NONE)
                    behavior_ptr->unit_action = group_format_action;
            }
            behavior_ptr->agent_1 = sqAgents[0];
            if (v23 <= 1)
                v12 = -1;
            else
                v12 = sqAgents[1];
            behavior_ptr->val_2 = v12;
            if (v23 <= 2)
                v13 = -1;
            else
                v13 = sqAgents[2];
            behavior_ptr->val_3 = v13;
            if (v23 <= 3)
                v14 = -1;
            else
                v14 = sqAgents[3];
            behavior_ptr->val_4 = v14;
            if (v23 <= 4)
                v15 = -1;
            else
                v15 = sqAgents[4];
            behavior_ptr->val_5 = v15;
            if (v23 <= 5)
                v16 = -1;
            else
                v16 = sqAgents[5];
            behavior_ptr->val_6 = v16;
            behavior_ptr->x_pos = x_pos;
            behavior_ptr->y_pos = y_pos;
            behavior_ptr->z_pos = z_pos;
        }
    }
    return 1;
}

int16_t unkn_formation_action_(int16_t a1, int16_t* agent_num, int16_t x_pos, int16_t y_pos, int16_t z_pos)
{
    int16_t v6, v7, v12, v13, v14, v15, v16, result, v23, v17;
    int16_t sqAgents[6];
    struct units_struct* units_ptr = units_t;
    struct behavior_struct* behavior_ptr;

    if (sc_mission_type == 1 && sc_mission_type == sc_bld_owner_sc)
    {
        if (a1 >= 6)
            v6 = 6;
        else
            v6 = a1;
        a1 = v6;
    }
    if (a1 >= 6)
        v7 = 6;
    else
        v7 = a1;
    result = set_action_1B(v7, agent_num, x_pos, y_pos, z_pos, &v23, sqAgents);// result???
    units_ptr += sqAgents[0];

    if (v23)
    {
        behavior_ptr = find_in_behavior_struc();
        if (behavior_ptr)
        {
            behavior_ptr->unit_action = 22;  //enum
            behavior_ptr->agent_1 = sqAgents[0];
            if (v23 <= 1)
                v12 = -1;
            else
                v12 = sqAgents[1];
            behavior_ptr->val_2 = v12;
            if (v23 <= 2)
                v13 = -1;
            else
                v13 = sqAgents[2];
            behavior_ptr->val_3 = v13;
            if (v23 <= 3)
                v14 = -1;
            else
                v14 = sqAgents[3];
            behavior_ptr->val_4 = v14;
            if (v23 <= 4)
                v15 = -1;
            else
                v15 = sqAgents[4];
            behavior_ptr->val_5 = v15;
            if (v23 <= 5)
                v16 = -1;
            else
                v16 = sqAgents[5];
            behavior_ptr->val_6 = v16;
            behavior_ptr->x_pos = x_pos;
            behavior_ptr->y_pos = y_pos;
            behavior_ptr->z_pos = z_pos;
        }
    }
    return 1;
}

int16_t sub_8E420_(struct units_struct* agent)
{
    int16_t mAictr0;
    int16_t mAictr1;
    int16_t bhAictrl;
    int16_t agent_num = 0;
    int16_t x_pos_unc;
    int16_t y_pos_unc;
    int16_t z_pos_unc;
    int16_t count;
    int16_t ag_count;
    int16_t ag_frmt;
    int16_t word_309440[60];

    struct behavior_struct* behavior_ptr;

    mAictr1 = agent->matrix_ai_control[1];
    mAictr0 = agent->matrix_ai_control[0];

    if (mAictr1 != -1)
        agent_num = agent - units_t;
    {
        if (agent->aggr_set_ctrl_unit != agent->agressive_mode
            || agent->movement_graphic_mode != agent->fire_mod_old
            || agent->fire_mode != agent->field_468
            || agent->stand_Kneel != agent->field_46A)
        {
            behavior_ptr = find_in_behavior_struc();
            if (behavior_ptr)
            {
                behavior_ptr->unit_action = behavior_action_1D;
                behavior_ptr->agent_1 = agent_num;
                behavior_ptr->val_2 = agent->aggr_set_ctrl_unit;
                behavior_ptr->val_3 = agent->fire_mod_old;
                behavior_ptr->val_4 = agent->field_468;
                behavior_ptr->val_5 = agent->field_46A;
            }

        }
        if (game_type_0)
        {
            behavior_ptr = find_in_behavior_struc();
            if (behavior_ptr)
            {
                behavior_ptr->unit_action = Reserve_TU_shot;  //fix to enum
                behavior_ptr->agent_1 = agent_num;
                if (agent->fire_mod_old >= 2)
                    bhAictrl = -1;
                else
                    bhAictrl = agent->field_468;
                behavior_ptr->val_2 = bhAictrl;
            }
        }
        y_pos_unc = agent->y_pos_unc;
        x_pos_unc = agent->x_pos_unc;
        z_pos_unc = agent->z_pos_unc;

        if (abs(agent->x_pos_4 - x_pos_unc) > 2
            || abs(agent->y_pos_4 - y_pos_unc) > 2
            || (agent->z_pos_4 != z_pos_unc)
            || agent->matrix_ai_control[1] == 99)
        {
            count = 1;
            word_309440[0] = agent_num;

            struct units_struct* units_ptr = units_t;
            if (mAictr1 != 99)
            {
                ag_count = 0;
                do
                {
                    if (units_ptr != agent // wut ??
                        && check_unit_live(units_ptr, agent->side_t2, agent->squad)
                        && units_ptr->x_pos_unc == x_pos_unc
                        && units_ptr->y_pos_unc == y_pos_unc
                        && units_ptr->z_pos_unc == z_pos_unc)
                    {
                        word_309440[count++] = ag_count;
                    }
                    units_ptr++;
                    ag_count++;
                } while (units_ptr < units_t + 60);
            }

            ag_frmt = agent->agent_formation;
            if (ag_frmt < 1u)
            {
                group_formation_action_(count, word_309440, x_pos_unc, y_pos_unc, z_pos_unc);
            }
            else if (ag_frmt <= 1u)
            {
                single_formation_action_(count, word_309440, x_pos_unc, y_pos_unc, z_pos_unc);
            }
            else if (ag_frmt == 2)
            {
                unkn_formation_action_(count, word_309440, x_pos_unc, y_pos_unc, z_pos_unc);
            }

        }
        else if (agent->matrix_action_27_mode)
        {
            behavior_ptr = find_in_behavior_struc();
            if (behavior_ptr)
            {
                behavior_ptr->unit_action = behavior_action_1B;
                behavior_ptr->val_2 = 0;
                behavior_ptr->agent_1 = agent_num;
            }
            if (mAictr0 != -1)
            {
                if (agent->exp_sec_num[0] == -1)

                    set_action_30(agent_num, 0, -1, -1);
                else
                    sub_95630(agent->exp_sec_num[0]);

            }
        }
    }

    return 1;
}