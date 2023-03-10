/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_texture_dir.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:05:44 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/27 16:23:29 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	format_texture_dir(char *texture_dir, t_map *map)
{
	int		i;
	int		flag;
	char	*dir;
	char	*path;
	char	**get_possible_texture_dir;

	i = -1;
	flag = 0;
	dir = ft_substr(texture_dir, 0, 2);
	get_possible_texture_dir = ft_split(map->possible_texture_dir, ',');
	while (get_possible_texture_dir[++i])
	{
		if (ft_strncmp(dir, get_possible_texture_dir[i], ft_strlen(dir)) == 0)
			flag = 1;
	}
	free(dir);
	free_double_str(get_possible_texture_dir);
	path = ft_substr(texture_dir, 3, ft_strlen(texture_dir));
	if (!flag || texture_dir[2] != ' ' || !is_valid_path(path))
	{
		free(path);
		return (0);
	}
	free(path);
	return (1);
}
