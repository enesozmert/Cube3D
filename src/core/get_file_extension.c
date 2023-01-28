/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file_extension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:35:50 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 14:06:43 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

char	*get_file_extension(char *path)
{
	char	*last_dot;

	last_dot = ft_strrchr(path, '.');
	if (last_dot == NULL)
		return (NULL);
	else
		return (last_dot + 1);
}
