/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_rgb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:43:27 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 15:02:00 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	*int_rgb(char *str)
{
	int		i;
	int		*rgb;
	char	**get_rgb;

	if (!is_valid_rgb(str))
		return (0);
	rgb = malloc(sizeof(int) * 3);
	get_rgb = ft_split(str, ',');
	i = -1;
	while (get_rgb[++i])
	{
		if (get_str_char_count(str, ' ') > 0)
			return (0);
		rgb[i] = ft_atoi(get_rgb[i]);
	}
	free_double_str(get_rgb);
	return (rgb);
}
