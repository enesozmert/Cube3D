/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:25:53 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 16:25:54 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAY_H
# define RAY_H

typedef struct s_ray
{
	int		per_pixel_x;
	int		map_x;
	int		map_y;
	double	dir_x;
	double	dir_y;
	int		step_x;
	int		step_y;
	double	side_dist_x;
	double	side_dist_y;
	double	delta_dist_x;
	double	delta_dist_y;
	double	perp_wall_dist;
	int		hit;
	int		side;
}			t_ray;

#endif