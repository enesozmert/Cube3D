/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_map_floor.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:15:19 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:15:39 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	parser_map_floor(int fd_start_index, char *floor, t_map *map)
{
	int		i;
	char	*str_rgb;
	int		*get_int_rgb;

	i = -1;
	str_rgb = ft_substr(floor, 2, ft_strlen(floor));
	get_int_rgb = int_rgb(str_rgb);
	while (++i < 3)
		map->floor->rgb[i] = get_int_rgb[i];
	map->floor->hex_color = \
	rgb_hex(map->floor->rgb[0], map->floor->rgb[1], map->floor->rgb[2]);
	map->floor->fd_start_index = fd_start_index;
	free(get_int_rgb);
	free(str_rgb);
	return (0);
}
