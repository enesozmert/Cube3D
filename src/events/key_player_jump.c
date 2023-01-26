/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_player_jump.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:49:39 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 17:49:43 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	key_player_jump(t_game *game)
{
	if (game->key.is_space)
		game->player.jump_size = 10;
	return (0);
}
