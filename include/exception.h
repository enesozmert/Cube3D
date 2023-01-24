#ifndef EXCEPTION_H
#define EXCEPTION_H

# include "map.h"

typedef struct s_exception
{
	int				error_code;
	char			*message;
	int				(*f)(t_map);
}   t_exception;

int exception_handler(t_map map);
int	map_error(t_map map);
int	map_error_space(t_map map);
int header_location_error(t_map map);
int	header_count_error(t_map map);
int item_invalid_error(t_map map);
int	item_single_error(t_map map);
int	map_file_error(t_map map);
int dir_file_error(t_map map);
int player_error(t_map map);
#endif
