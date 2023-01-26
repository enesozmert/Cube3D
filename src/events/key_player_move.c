/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_player_move.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:50:06 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 17:50:18 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	key_player_move(t_game *game)
{
	if (game->key.is_a)
		player_move_ad(game, -1, 1);
	if (game->key.is_d)
		player_move_ad(game, 1, -1);
	if (game->key.is_w)
		player_move_ws(game, 1, 1);
	if (game->key.is_s)
		player_move_ws(game, -1, -1);
	return (0);
}
