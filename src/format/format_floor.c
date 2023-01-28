/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_floor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:05:08 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 12:24:59 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	format_floor(char *floor, t_map *map)
{
	char	*rgb;

	if (floor[0] != 'F' || floor[1] != ' ')
		return (0);
	rgb = ft_substr(floor, 2, ft_strlen(floor));
	if (!is_valid_rgb(rgb))
	{
		map->floor->check = -1;
		free(rgb);
		return (0);
	}
	map->floor->check = 1;
	free(rgb);
	return (1);
}
