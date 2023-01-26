/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:25:34 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 16:25:35 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAME_H
# define FRAME_H

typedef struct s_frame
{
	int					width;
	int					height;
	struct timespec		time;
	struct timespec		old_time;
	double				frame_time;
}						t_frame;

#endif