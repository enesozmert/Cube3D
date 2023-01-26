/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   block_count.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:34:51 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 14:58:57 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	get_block_count(t_map *map, char block_name)
{
	int	j;
	int	i;
	int	result;

	i = 0;
	j = 0;
	result = 0;
	while (map->matris[i])
	{
		j = 0;
		while (map->matris[i][j])
		{
			if (map->matris[i][j] == block_name)
				result++;
			j++;
		}
		i++;
	}
	return (result);
}
