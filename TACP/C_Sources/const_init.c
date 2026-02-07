#include "const_init.h"


int32_t image_to_image(int32_t image_1, int32_t image_2)
{

    int16_t v4 = -1;
    int16_t v5 = 0;
    int32_t v11 = 1;
    int16_t v6 = -1;
    int16_t v8;
    int16_t v9;

    do
    {
        if (units_init_t[v5].image == image_1)
            v4 = v5;
        if (units_init_t[v5].image == image_2)
            v6 = v5;
        ++v5;
   
    } while (v5 < 47);

   

    if (units_init_t[v4].inventory != units_init_t[v6].inventory)
        v11 = 0;
    if (units_init_t[v4].movement_type != units_init_t[v6].movement_type)
        v11 = 0;
    if ((image_1 == multiwormEgg || image_1 == chrysalis_i || image_1 == queenspawn_i)
        && (image_2 == 1 || image_2 == 5 || image_2 == queenspawn_i ? (v8 = 0) : (v8 = 1), v8)
        || (image_1 == multiwormEgg || image_1 == chrysalis_i || image_1 == queenspawn ? (v9 = 0) : (v9 = 1),
            v9 && (image_2 == multiwormEgg || image_2 == chrysalis_i || image_2 == queenspawn_i)))
    {
        v11 = 0;
    }
    if (units_init_t[v4].psi_energy != units_init_t[v6].psi_energy)
        v11 = 0;
    return v11;
}