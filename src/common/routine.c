/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:30:28 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 16:34:44 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	routine(t_game *game)
{
	mlx_hook(game->wlx.win, ON_KEYDOWN, 1L << 0, event_key_down, game);
	mlx_hook(game->wlx.win, ON_KEYUP, 1L << 1, event_key_up, game);
	mlx_hook(game->wlx.win, ON_DESTROY, 0, event_close, game);
	mlx_loop_hook(game->wlx.mlx, ray_update, game);
	mlx_loop(game->wlx.mlx);
	return (0);
}
