/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_draw.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:08:40 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:08:52 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

void	init_draw(t_draw *draw)
{
	draw->start = 0;
	draw->end = 0;
	draw->line_height = 0;
	draw->tex_w = 0;
	draw->tex_h = 0;
	draw->tex_x = 0;
	draw->tex_y = 0;
	draw->wall_x = 0.0;
	draw->step = 0.0;
	draw->tex_pos = 0.0;
}
