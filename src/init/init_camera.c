/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_camera.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:07:48 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:07:55 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

void	init_camera(t_camera *camera)
{
	camera->plane_x = 0.66;
	camera->plane_y = 0;
	camera->x = 0;
	camera->y = 0;
}
