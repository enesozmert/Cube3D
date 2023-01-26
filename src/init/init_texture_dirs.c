/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_texture_dirs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:12:09 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:12:10 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

void	init_texture_dirs(t_map *map)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		map->texture_dirs[i].fd_start_index = -1;
		map->texture_dirs[i].check = -1;
		map->texture_dirs[i].index = -1;
		map->texture_dirs[i].dir = NULL;
		map->texture_dirs[i].texture_path = NULL;
	}
}
