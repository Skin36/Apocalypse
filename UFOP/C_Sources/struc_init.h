#pragma once
#ifndef STRUC_INIT_H_INCLUDED
#define STRUC_INIT_H_INCLUDED
#include <stdint.h>

#endif

struct junc_struc
{
	int16_t x_pos;
	int16_t y_pos;
	int16_t z_pos;
	int16_t neig[4];//NESD
	int16_t dist[4];//NESD
	int8_t unk1;
	int8_t unk2;
	int8_t unk3;
	int8_t unk4;
	int16_t road_end;
};

struct city_map_struc
{
	int8_t tile_type;
	int8_t road_type;
	int8_t road_junction[4];
	int8_t road_level_change[4];
	int8_t height;
	int8_t constitution;
	int8_t value;
	int8_t overlaytile_idx;
	int8_t landing_pad;
	int8_t walk_type;
	int8_t voxelIdx[16];
	int8_t has_basement;
	int8_t people_tube_connections[6];
	int8_t mass;
	int16_t strength;
	int16_t damagedtile_idx;
	int16_t supportile_idx;
	int8_t target_Pnt[4];
	int16_t stratmap_idx;
};


struct junc_struc* junc_ptr;
struct junc_struc* junc_ptr_tmp;
struct city_map_struc* map_ptr;


extern uint8_t* road_junction_struc;
extern uint8_t* citymap_dat;

extern uint16_t junct_num;
extern int16_t* citymap_work;
struct city_map_struc* map_ptr_tmp;
struct city_map_struc* map_ptr_ngb;




//=============common functions====================
int all_struct_alloc(void);
int free_all_mem(void);


