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
int	item_repeat_error(t_map map);
int	item_single_error(t_map map);
int	item_wrong_error(t_map map);
int	file_error(t_map map);
#endif
