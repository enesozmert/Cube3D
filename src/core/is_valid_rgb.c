/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_rgb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:34:31 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 12:29:43 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

static int	is_valid_rgb_count(char *str)
{
	int		count;
	char	**get_rgb;
	int		rgb[3];

	count = 0;
	get_rgb = ft_split(str, ',');
	while (get_rgb[count])
		count++;
	if (count < 0 || count > 3)
		return (0);
	count = -1;
	while (get_rgb[++count])
	{
		if (get_str_char_count(str, ' ') > 0)
		{
			free_double_str(get_rgb);
			return (0);
		}
		rgb[count] = ft_atoi(get_rgb[count]);
	}
	free_double_str(get_rgb);
	if (rgb[0] < 0 || rgb[0] > 255 || rgb[1] < 0 || \
		rgb[1] > 255 || rgb[2] < 0 || rgb[2] > 255)
		return (0);
	return (1);
}

int	is_valid_rgb(char *str)
{
	int	count;
	int	comma;

	count = 0;
	comma = get_str_char_count(str, ',');
	if (comma != 2)
		return (0);
	if (is_valid_rgb_count(str) == 0)
		return (0);
	return (1);
}
