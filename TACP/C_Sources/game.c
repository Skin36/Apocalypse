#include <stdlib.h>

#include "struc_init.h"

struct behavior_struc* behavior_ptr;

int calc_dist_3D(int x, int y, int z)
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
    behavior_ptr = (struct behavior_struc*)malloc(25 * sizeof(struct behavior_struc));
    return 0;
}


int free_all_mem(void)
{
    free(behavior_ptr);
    return 0;

}