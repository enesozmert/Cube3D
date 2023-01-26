/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:25:55 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 16:25:56 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREEN_H
# define SCREEN_H

# define SCREEN_WIDTH 1920
# define SCREEN_HEIGHT 1080

typedef struct s_screen
{
	int	height;
	int	width;
}		t_screen;

#endif