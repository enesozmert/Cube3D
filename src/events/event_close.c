/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_close.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:47:20 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 17:47:47 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	event_close(t_game *game)
{
	mlx_clear_window(game->wlx.mlx, game->wlx.win);
	mlx_destroy_window(game->wlx.mlx, game->wlx.win);
	exit(0);
}
