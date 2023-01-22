#include "../../include/header.h"

void init_draw(t_draw *draw)
{
    draw->start = 0;
    draw->end = 0;
    draw->line_height = 0;
    draw->tex_w = 0;
    draw->tex_h = 0;
    draw->tex_x = 0;
    draw->tex_y = 0;
	draw->wall_x = 0.0;
	draw->step = 0.0;
	draw->tex_pos = 0.0;
}