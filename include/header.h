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
char	*ft_strjoin_s1(char *s1, char *s2);
int	    get_block_count(t_map *map, char block_name);
int 	core();

//common
int     routine();


#endif