#ifndef DRAW_H
#define DRAW_H

typedef struct s_data
{
	void *img;
	int *addr;
	int bits_per_pixel;
	int line_length;
	int endian;
} t_data;

typedef struct s_draw
{
	t_data 	data;
    int		start;
    int		end;
    int		line_height;
	int		tex_x;
	int		tex_y;
	int		tex_w;
	int		tex_h;
	double	wall_x;
	double	step;
	double	tex_pos;
}   t_draw;

#endif
