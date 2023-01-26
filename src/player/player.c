/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:43:33 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:43:42 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

void	player(t_game *game)
{
	get_player_position(game);
	get_player_dir(game);
	player_select_rotate(game);
	player_rotate(game);
	game->map.matris[(int)game->player.pos_y][(int)game->player.pos_x] = '0';
}
