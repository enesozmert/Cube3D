/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floor.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:25:31 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 16:25:32 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_H
# define FLOOR_H

typedef struct s_floor
{
	int				fd_start_index;
	unsigned long	hex_color;
	int				*rgb;
	int				check;
}					t_floor;

#endif