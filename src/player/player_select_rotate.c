/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_select_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:43:06 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:43:31 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	player_select_rotate(t_game *game)
{
	if (game->player.dir == 'S')
		game->player.rotate = M_PI;
	else if (game->player.dir == 'W')
		game->player.rotate = 1.5 * M_PI;
	else if (game->player.dir == 'E')
		game->player.rotate = 0.5 * M_PI;
	else if (game->player.dir == 'N')
		game->player.rotate = 0;
	return (0);
}
