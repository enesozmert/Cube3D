#ifndef HEADER_H
#define HEADER_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <math.h>
#include <float.h>
#include <time.h>
#include <sys/time.h>

#include "../libraries/libft/libft.h"
#include "../libraries/minilibx/mlx.h"
#include "gnl.h"
#include "map.h"
#include "floor.h"
#include "ceiling.h"
#include "exception.h"
#include "camera.h"
#include "player.h"
#include "frame.h"
#include "position.h"
#include "screen.h"
#include "wlx.h"
#include "ray.h"
#include "draw.h"
#include "game.h"

// core
int is_valid_filename(char *path);
int is_valid_path(char *path);
int is_valid_rgb(char *str);
char *ft_strjoin_s1(char *s1, char *s2);
int get_block_count(t_map *map, char block_name);
char *get_filename_from_path(char *path);
char *get_filename_without_extension(char *path);
char *get_file_extension(char *path);
int get_str_char_count(char *str, char x);
unsigned long rgb_hex(int r, int g, int b);
int *int_rgb(char *str);
int get_map_height(char *path);
t_position *get_player_position(t_map *map);
void my_mlx_pixel_put(t_data *data, int x, int y, int color);
int core();

// common
int routine();
int read_map(char *path, t_map *map);

// parsing
int parser_map(t_map *map);
int parser_map_floor(int fd_start_index, char *floor, t_map *map);
int parser_map_ceiling(int fd_start_index, char *ceiling, t_map *map);
int parser_map_textture_dir(int fd_start_index, char *texture_dir, t_map *map);

// init
void init_map(t_map *map);
void init_floor(t_map *map);
void init_ceiling(t_map *map);
void init_texture_dirs(t_map *map);
void init_camera(t_camera *camera);
void init_frame(t_frame *frame);
void init_player(t_player *player);
void init_screen(t_screen *screen);
void init_ray(t_ray *ray);
void init_draw(t_draw *draw);
void init_texture(t_game *game);
void init_tmp_data(t_game *game);

// format
int format_texture_dir(char *texture_dir, t_map *map);
int format_ceiling(char *ceiling, t_map *map);
int format_floor(char *floor, t_map *map);

// drawing
int				draw_screen(t_game *game);
int				draw_pixel_height(t_game *game);
int				draw_texture_calculate(t_game *game);
void            draw_texture_select(t_game *game, int *side);
unsigned long	draw_texture_color(t_game *game, int *side);
int				draw_wall_x(t_game *game);
int             draw_texture(t_game *game);

// raycasting
int ray(t_game *game);
int ray_update(t_game *game);
int ray_steps(t_game *game, int *step_x, int *step_y);
int ray_hit(t_game *game, int *step_x, int *step_y, int *side);
int ray_fisheye_fixed(t_game *game, int *side);
int ray_wall_height(t_game *game);

#endif