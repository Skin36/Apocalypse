
#include "junction.h"



int16_t x_road_index[4] = { 0, 1, 0, -1};
int16_t y_road_index[4] = { -1, 0, 1, 0};
int16_t byte_D4D38[4] = { 2,3,0,1};

static read_junc_connect_(int16_t junc_num, uint16_t dir, int16_t* dist, uint16_t* j_dir)
{
    int16_t delta_x = junc_ptr_tmp->x_pos;
    int16_t delta_y = junc_ptr_tmp->y_pos;
    int16_t junct_num_tmp;
    int16_t v7;
    int16_t map_t;
    int16_t ret_val = 0;
    struct junc_struc* junc_ptr_tmp2;
    int16_t z_level = junc_ptr_tmp->z_pos;
    map_ptr_ngb = map_ptr + *(citymap_work + z_level * 10000 + delta_y * 100 + delta_x);

    while (1)

    {
        
        delta_x = x_road_index[dir] + delta_x;
        delta_y = y_road_index[dir] + delta_y;
        if (map_ptr_ngb->road_level_change[dir] == 1)
        {
            z_level = z_level + 1;
        }
            
        map_ptr_ngb = map_ptr + *(citymap_work + z_level * 10000 + delta_y * 100 + delta_x);
        if (map_ptr_ngb->tile_type != 1 && z_level)
        {
            z_level = z_level - 1;
            map_ptr_ngb = map_ptr + *(citymap_work + z_level * 10000 + delta_y * 100 + delta_x);
            if (!map_ptr_ngb->road_level_change[dir])
            {
                break;
            }
        }
        map_ptr_ngb = map_ptr + *(citymap_work + z_level * 10000 + delta_y * 100 + delta_x);
        ++ *dist;

        if (!map_ptr_ngb->road_type || map_ptr_ngb->tile_type != 1)
        {
                if (map_ptr_ngb->tile_type)
                {
                    map_t = 0;
                    while (1)
                    {
                        if (map_ptr_ngb->road_junction[map_t])
                        {
                            v7 = byte_D4D38[dir];// 2,3,0,1
                            if (map_t != v7)
                            {
                                dir = map_t;
                                break;
                            }
                        }
                        if (++map_t >= 4u)
                            break;
                    }
                    if (map_t == 4)
                    {
                        *dist = 0;
                        ret_val = 1;
                    }
                    if (ret_val)
                        return 1;
                }
                else
                {
                    *dist = 0;
                    return 1;
                }
        }
        else
        {
            junc_ptr_tmp2 = junc_ptr;
            junct_num_tmp = 0;
            if (junct_num)
            {
                while (junc_ptr_tmp2->x_pos != delta_x || junc_ptr_tmp2->y_pos != delta_y || junc_ptr_tmp2->z_pos != z_level)
                {
                    junc_ptr_tmp2++;
                    ++junct_num_tmp;
                    if (junct_num_tmp >= junct_num)
                        return 0;
                }
                *j_dir = junct_num_tmp;
            }
            return 1;
        }
    }
    return  1;
}





int16_t recalc_junc(void)
{

    int16_t dir = 0;
    int16_t i = 0;
    int16_t junc_dir = 0;
    int16_t dist = 0;


    for (i = 0;; ++i)
    { 
        if (junct_num <= i)
            break;
        dir = 0;
        map_ptr_tmp = map_ptr + *(citymap_work + junc_ptr_tmp->z_pos * 10000 + junc_ptr_tmp->y_pos * 100 + junc_ptr_tmp->x_pos);
        do
        {
           if (junc_ptr_tmp->neig[dir] == -1 && map_ptr_tmp->road_junction[dir])
            {
               read_junc_connect_(i, dir, &dist, &junc_dir);
               if (dist)
               {
                   junc_ptr_tmp->neig[dir] = junc_dir;
                   junc_ptr_tmp->dist[dir] = dist;
               }
            }
            ++dir;
        } while (dir < 4);
    ++junc_ptr_tmp;
    }

    return  1;
}
