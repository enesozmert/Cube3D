/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:30:28 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 14:49:51 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	routine(t_game *game)
{
	mlx_hook(game->wlx.win, ON_KEYDOWN, 1L << 0, event_key_down, game);
	mlx_hook(game->wlx.win, ON_KEYUP, 1L << 1, event_key_up, game);
	mlx_hook(game->wlx.win, 6, 1L << 6, event_mouse_move, game);
	mlx_hook(game->wlx.win, ON_DESTROY, 0, event_close, game);
	mlx_loop_hook(game->wlx.mlx, ray_loop, game);
	mlx_loop(game->wlx.mlx);
	return (0);
}
