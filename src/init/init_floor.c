/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_floor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:09:08 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 11:33:11 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

void	init_floor(t_map *map)
{
	map->floor->fd_start_index = -1;
	map->floor->hex_color = 0;
	map->floor->check = -1;
	map->floor->rgb = malloc(sizeof(int) * 3);
}
