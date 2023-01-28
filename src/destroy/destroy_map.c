/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:26:18 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 14:52:07 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	destroy_map(t_map *map)
{
	free(map->floor);
	free(map->ceiling);
	free(map->possible_texture_dir);
	free(map->texture_dirs);
	free(map->possible_items);
	free(map->possible_single_items);
	free_double_str(map->matris);
	return (0);
}
