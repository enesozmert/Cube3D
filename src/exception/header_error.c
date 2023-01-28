/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:26:19 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 12:16:25 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	header_count_error(t_map *map)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (map->texture_dirs_count > 4)
			return (102);
	}
	if (map->floor_count > 1 || map->ceiling_count > 1)
		return (102);
	return (0);
}

int	header_location_error(t_map *map)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (map->texture_dirs[i].fd_start_index > 5)
			return (103);
	}
	if (map->floor->fd_start_index > 5 || map->ceiling->fd_start_index > 5)
		return (103);
	return (0);
}
