/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_ceiling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:59:48 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 12:24:20 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	format_ceiling(char *ceiling, t_map *map)
{
	char	*rgb;

	if (ceiling[0] != 'C' || ceiling[1] != ' ')
		return (0);
	rgb = ft_substr(ceiling, 2, ft_strlen(ceiling));
	if (!is_valid_rgb(rgb))
	{
		map->ceiling->check = -1;
		free(rgb);
		return (0);
	}
	map->ceiling->check = 1;
	free(rgb);
	return (1);
}
