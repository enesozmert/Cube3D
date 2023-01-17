#ifndef HEADER_H
# define HEADER_H

# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <math.h>
# include <float.h>
# include <time.h>
# include <sys/time.h>

# include "../libraries/libft/libft.h"
# include "../libraries/minilibx/mlx.h"
# include "gnl.h"
# include "map.h"
# include "floor.h"
# include "ceiling.h"
# include "exception.h"

//core
int             is_valid_filename(char *path);
int             is_valid_path(char* path);
int             is_valid_rgb(char *str);
char            *ft_strjoin_s1(char *s1, char *s2);
int             get_block_count(t_map *map, char block_name);
char            *get_filename_from_path(char *path);
char            *get_filename_without_extension(char *path);
char            *get_file_extension(char *path);
int             get_str_char_count(char *str, char x);
unsigned long   rgb_hex(int r, int g, int b);
int             *int_rgb(char *str);
int 	        core();

//common
int         routine();
int         read_map(char *path, t_map *map);

//parsing
int         parser_map(t_map *map);
int         parser_map_floor(char *floor, t_map map);
int         parser_map_ceiling(char *ceiling, t_map *map);
int         parser_map_textture_dir(int index, char *texture_dir, t_map map);

//init
void        init_map(t_map *map);
void        init_floor(t_map *map);
void        init_ceiling(t_map *map);
void        init_texture_dirs(t_map *map);

//format
int         format_textture_dir(char *texture_dir, t_map *map);
int         format_ceiling(char *ceiling, t_map *map);
int         format_floor(char *floor, t_map *map);
#endif