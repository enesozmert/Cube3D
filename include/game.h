#ifndef GAME_H
#define GAME_H

#include "map.h"
#include "camera.h"
#include "frame.h"
#include "screen.h"
#include "ray.h"
#include "wlx.h"
#include "draw.h"
#include "player.h"

typedef struct s_game
{
    t_map		map;
    t_player	player;
    t_camera	camera;
    t_frame		frame;
    t_wlx       wlx;
    t_screen	screen;
    t_ray       ray;
    t_draw      draw;
    t_draw      texture[4];
    t_draw      *select_texture;
    t_data      tmp_data;
}	t_game;


#endif