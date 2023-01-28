/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:26:03 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 14:51:15 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	destroy_all(t_game *game)
{
	destroy_ceiling(game->map.ceiling);
	destroy_floor(game->map.floor);
	destroy_texture_dir(game->map.texture_dirs);
	destroy_map(&game->map);
	return (0);
}
