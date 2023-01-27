/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:25:27 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/27 17:39:12 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_H
# define EXCEPTION_H

# include "map.h"

typedef struct s_exception
{
	int				error_code;
	char			*message;
	int				(*f)(t_map);
}					t_exception;

int	exception_handler(t_map map);
int	map_error(t_map map);
int	map_error_space(t_map map);
int map_rgb_error(t_map map);
int	header_location_error(t_map map);
int	header_count_error(t_map map);
int	item_wrong_error(t_map map);
int	item_single_error(t_map map);
int	map_file_error(t_map map);
int	dir_file_error(t_map map);
int	player_error(t_map map);
#endif
