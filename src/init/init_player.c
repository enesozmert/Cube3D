/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:10:44 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 13:44:48 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

void	init_player(t_player *player)
{
	player->pos_x = 0;
	player->pos_y = 0;
	player->dir_x = 0;
	player->dir_y = 1.0;
	player->rotate = 0;
	player->dir = 'E';
	player->rotate_speed = 3.0;
	player->move_speed = 5.0;
	player->jump_size = 0;
}
