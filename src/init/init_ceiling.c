/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_ceiling.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:08:12 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:08:12 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

void	init_ceiling(t_map *map)
{
	map->ceiling->fd_start_index = -1;
	map->ceiling->hex_color = 0;
	map->ceiling->rgb = malloc(sizeof(int) * 3);
	map->ceiling->check = -1;
}
