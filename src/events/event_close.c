/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_close.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:47:20 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 14:45:10 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	event_close(t_game *game)
{
	destroy_all(game);
	mlx_clear_window(game->wlx.mlx, game->wlx.win);
	mlx_destroy_window(game->wlx.mlx, game->wlx.win);
	exit(0);
}
