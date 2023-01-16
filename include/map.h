#ifndef MAP_H
#define MAP_H

# include "floor.h"
# include "ceiling.h"
# include "texture_dir.h"

typedef struct s_map
{
    t_floor			*floor;
    t_ceiling		*ceiling;
	t_texture_dir	*texture_dirs;
    int             fd;
    char            *path;
    char			*filename;
    char			*extension;
    char    		**matris;
    char			*possible_items;
    char			*possible_texture_dir;
    int     		area;
    int     		max_x;
    int     		max_y;
    int     		max_line_size;
    int     		min_line_size;
    int     		check;
}   t_map;

#endif 