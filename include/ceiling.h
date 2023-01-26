/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ceiling.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:25:22 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 16:25:23 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CEILING_H
# define CEILING_H

typedef struct s_ceiling
{
	int				fd_start_index;
	unsigned long	hex_color;
	int				*rgb;
	int				check;
}	t_ceiling;

#endif