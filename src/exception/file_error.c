/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:54:12 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/25 17:54:36 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	map_file_error(t_map map)
{
	char	*str;

	if (map.fd < 0)
		return (704);
	str = ft_strchr(map.path, '.');
	if (ft_strnstr(&str[0], map.extension, ft_strlen(map.path)) == NULL)
		return (702);
	return (0);
}

int	dir_file_error(t_map map)
{
	int	i;
	int	fd[4];

	i = -1;
	while (++i < 4)
	{
		fd[i] = open(map.texture_dirs[i].texture_path, O_RDONLY);
		if (fd[i] < 0)
		{
			close(fd[i]);
			return (800 + i + 1);
		}
	}
	i = -1;
	while (++i < 4)
		close(fd[i]);
	return (0);
}
