/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_floor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:05:08 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 18:05:32 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	format_floor(char *floor, t_map *map)
{
	char	*rgb;

	(void)map;
	if (floor[0] != 'F' || floor[1] != ' ')
		return (0);
	rgb = ft_substr(floor, 2, ft_strlen(floor));
	if (!is_valid_rgb(rgb))
	{
		free(rgb);
		return (0);
	}
	free(rgb);
	return (1);
}
