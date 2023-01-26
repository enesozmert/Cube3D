/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_rgb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:43:27 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 16:48:25 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	*int_rgb(char *str)
{
	int		i;
	int		*rgb;
	char	**get_rgb;

<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 8b5f32c87b52380a22e4ce4ebdb0f87788063ce4
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
	return (rgb);
}
<<<<<<< HEAD
=======
=======
    if (!is_valid_rgb(str))
        return (0);
    rgb = malloc(sizeof(int) * 3);
    get_rgb = ft_split(str, ',');
    i = -1;
    while (get_rgb[++i])
    {
        if (get_str_char_count(str, ' ') > 0)
        {
            free_double_str(get_rgb);
            return (0);
        }
        rgb[i] = ft_atoi(get_rgb[i]);
    }
    free_double_str(get_rgb);
    return (rgb);
}
>>>>>>> 875c2fed454e357818e7313581ee2e11251d1b86
>>>>>>> 8b5f32c87b52380a22e4ce4ebdb0f87788063ce4
