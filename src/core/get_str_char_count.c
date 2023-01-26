/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_str_char_count.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:42:33 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 16:43:09 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	get_str_char_count(char *str, char x)
{
	int		i;
	int		result;

	i = -1;
	result = 0;
	while (str[++i])
	{
		if (str[i] == x)
			result++;
	}
	return (result);
}
