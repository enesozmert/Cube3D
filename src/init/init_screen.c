/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_screen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:11:15 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:11:36 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

void	init_screen(t_screen *screen)
{
	screen->height = SCREEN_HEIGHT;
	screen->width = SCREEN_WIDTH;
}
