/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_key_down.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:48:07 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 12:34:30 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	event_key_down(int key_code, t_game *game)
{
	if (key_code == MACOS_A)
		game->key.is_a = 1;
	if (key_code == MACOS_D)
		game->key.is_d = 1;
	if (key_code == MACOS_W)
		game->key.is_w = 1;
	if (key_code == MACOS_S)
		game->key.is_s = 1;
	if (key_code == MACOS_LEFT)
		game->key.is_left = 1;
	if (key_code == MACOS_RIGHT)
		game->key.is_right = 1;
	if (key_code == MACOS_ESC)
		game->key.is_esc = 1;
	if (key_code == MACOS_SPACE)
		game->key.is_space = 1;
	if (key_code == 14)
		game->key.cursor += 1;
	return (0);
}
