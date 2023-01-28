/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:29:01 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/28 14:24:03 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	read_map(char *path, t_map *map)
{
	if (is_valid_path(path) == 0)
		exit(printf("Error: path invalid : %s\n", path));
	map->fd = open(path, O_RDONLY);
	if (map->fd == -1)
		exit(printf("Error : incorrect file, failed to open it %s\n", path));
	map->path = ft_strdup(path);
	map->filename = get_filename_without_extension(path);
	map->extension = get_file_extension(path);
	map->matris = (char **)malloc(sizeof(char *) * \
			get_map_height(map->path) + 1);
	return (0);
}
