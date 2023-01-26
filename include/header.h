/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:25:40 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 16:57:02 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# define M_PI 3.14159265358979323846

# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <math.h>
# include <float.h>
# include <time.h>
# include <sys/time.h>
# include <mach/mach_time.h>

# include "../libraries/libft/libft.h"
# include "../libraries/minilibx/mlx.h"
# include "gnl.h"
# include "map.h"
# include "floor.h"
# include "ceiling.h"
# include "exception.h"
# include "camera.h"
# include "game.h"
# include "player.h"
# include "frame.h"
# include "position.h"
# include "screen.h"
# include "wlx.h"
# include "ray.h"
# include "draw.h"
# include "key.h"

// core
int				is_valid_filename(char *path);
int				is_valid_path(char *path);
int				is_valid_path2(int i, int len, char *path);
int				is_valid_rgb(char *str);
char			*ft_strjoin_s1(char *s1, char *s2);
int				get_block_count(t_map *map, char block_name);
char			*get_filename_from_path(char *path);
char			*get_filename_without_extension(char *path);
char			*get_file_extension(char *path);
int				get_str_char_count(char *str, char x);
unsigned long	rgb_hex(int r, int g, int b);
int				*int_rgb(char *str);
int				get_map_height(char *path);
void			my_mlx_pixel_put(t_data *data, int x, int y, int color);
long			get_time(void);
void			free_double_str(char **str);

// common
int				routine(t_game *game);
int				read_map(char *path, t_map *map);

// parsing
int				parser_map(t_map *map);
int				parser_map_floor(int fd_start_index, char *floor, t_map *map);
int				parser_map_ceiling(int fd_start_index,
					char *ceiling, t_map *map);
int				parser_map_textture_dir(int fd_start_index,
					char *texture_dir, t_map *map);

// init
void			init_map(t_map *map);
void			init_floor(t_map *map);
void			init_ceiling(t_map *map);
void			init_texture_dirs(t_map *map);
void			init_camera(t_camera *camera);
void			init_frame(t_frame *frame);
void			init_player(t_player *player);
void			init_screen(t_screen *screen);
void			init_ray(t_ray *ray);
void			init_draw(t_draw *draw);
void			init_texture(t_game *game);
void			init_tmp_data(t_game *game);
void			init_all(t_game *game);

// format
int				format_texture_dir(char *texture_dir, t_map *map);
int				format_ceiling(char *ceiling, t_map *map);
int				format_floor(char *floor, t_map *map);

// drawing
int				draw_screen(t_game *game);
int				draw_pixel_height(t_game *game);
int				draw_texture_calculate(t_game *game);
void			draw_texture_select(t_game *game);
unsigned long	draw_texture_color(t_game *game);
int				draw_wall_x(t_game *game);
int				draw_texture(t_game *game);

// raycasting
int				ray(t_game *game);
int				ray_update(t_game *game);
int				ray_steps(t_game *game);
int				ray_hit(t_game *game);
int				ray_fisheye_fixed(t_game *game);
int				ray_wall_height(t_game *game);

// player
int				get_player_dir(t_game *game);
int				player_rotate(t_game *game);
int				player_select_rotate(t_game *game);
int				get_player_position(t_game *game);
int				player_position_is_wall(t_game *game, int map_x, int map_y);
int				player_move_ad(t_game *game, int x, int y);
int				player_move_ws(t_game *game, int x, int y);
void			player(t_game *game);
// frame
int				ray_time(t_game *game);
// key
int				event_close(t_game *game);
int				event_key_up(int key_code, t_game *game);
int				event_key_down(int key_code, t_game *game);
int				key_close(t_game *game);
int				key_player_rotate(t_game *game);
int				key_player_move(t_game *game);
int				key_player_jump(t_game *game);
void			init_key(t_key *key);
// static
void			static_exception(t_exception *exception);
#endif