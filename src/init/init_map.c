/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:10:14 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 14:23:58 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

void	init_map(t_map *map)
{
	map->floor = malloc(sizeof(t_floor) * 1);
	init_floor(map);
	map->ceiling = malloc(sizeof(t_ceiling) * 1);
	init_ceiling(map);
	map->texture_dirs = malloc(sizeof(t_texture_dir) * 4);
	init_texture_dirs(map);
	map->fd = -1;
	map->fd_start_index = -1;
	map->path = NULL;
	map->filename = NULL;
	map->extension = NULL;
	map->matris = NULL;
	map->possible_items = ft_strdup("0,1,E,N,S,W, ");
	map->possible_single_items = ft_strdup("E,N,S,W");
	map->possible_texture_dir = ft_strdup("NO,SO,WE,EA");
	map->area = 0;
	map->max_x = 0;
	map->max_y = 0;
	map->max_line_size = 0;
	map->min_line_size = 0;
	map->floor_count = 0;
	map->ceiling_count = 0;
	map->texture_dirs_count = 0;
	map->check = -1;
}
