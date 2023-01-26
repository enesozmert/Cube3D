/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_double_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:35:15 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 16:35:16 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

void	free_double_str(char **str)
{
	int	i;

	if (!str[0])
		return ;
	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
}
