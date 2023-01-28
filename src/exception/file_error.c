/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:54:12 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 15:36:00 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	map_file_error(t_map *map)
{
	if (map->fd < 0)
		return (704);
	if (ft_strncmp(map->extension, "cub", ft_strlen(map->extension)) != 0
		|| (int)ft_strlen(map->extension) != 3)
		return (702);
	return (0);
}

int	dir_file_error(t_map *map)
{
	int	i;
	int	fd[4];

	i = -1;
	while (++i < 4)
	{
		fd[i] = open(map->texture_dirs[i].texture_path, O_RDONLY);
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
