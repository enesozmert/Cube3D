/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_map_textture_dir.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:16:20 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 10:16:48 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	parser_map_textture_dir(int fd_start_index, char *texture_dir, t_map *map)
{
	char	*dir;
	char	*texture_path;

	dir = ft_substr(texture_dir, 0, 2);
	texture_path = ft_substr(texture_dir, 3, ft_strlen(texture_dir));
	map->texture_dirs[fd_start_index % 4].dir = ft_strdup(dir);
	map->texture_dirs[fd_start_index % 4].texture_path \
	= ft_strdup(texture_path);
	map->texture_dirs[fd_start_index % 4].index = fd_start_index % 4;
	map->texture_dirs[fd_start_index % 4].fd_start_index = fd_start_index;
	free(dir);
	free(texture_path);
	return (0);
}
