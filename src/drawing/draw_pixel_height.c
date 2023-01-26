/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_pixel_height.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:38:54 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 17:39:29 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	draw_pixel_height(t_game *game)
{
	game->draw.start = (-1 * game->draw.line_height / 2)
		+ (game->screen.height / 2);
	if (game->draw.start < 0)
		game->draw.start = 0;
	game->draw.end = (game->draw.line_height / 2) + (game->screen.height / 2);
	if (game->draw.end >= game->screen.height)
		game->draw.end = game->screen.height - 1;
	return (0);
}
