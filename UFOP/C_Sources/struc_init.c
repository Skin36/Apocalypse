#include <stdlib.h>
#include <stdio.h>
#include "struc_init.h"






int all_struct_alloc(void)
{
    junc_ptr = malloc(512 * sizeof(struct junc_struc));
    junc_ptr = &road_junction_struc;

    map_ptr = malloc(1100 * sizeof(struct city_map_struc));
    map_ptr = &citymap_dat;
    junc_ptr_tmp = junc_ptr;

    return 0;
}


int free_all_mem(void)
{
    //free(junc_ptr);
    //free(map_ptr);
    return 0;
}



