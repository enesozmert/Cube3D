/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:17:08 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/27 17:48:52 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

static char	*parser_line_clear(char *line)
{
	char	*tmp_line;
	char	*ft_tmp_line;

	tmp_line = ft_strtrim(line, " ");
	ft_tmp_line = ft_strtrim(tmp_line, "\n");
	free(tmp_line);
	return (ft_tmp_line);
}

static int	parser_map_header(int i, char *line, t_map *map)
{
	char	*ft_tmp_line;

	ft_tmp_line = NULL;
	ft_tmp_line = parser_line_clear(line);
	if (format_ceiling(ft_tmp_line, map) == 1)
	{
		parser_map_ceiling(i, ft_tmp_line, map);
		map->ceiling_count++;
	}
	if (format_floor(ft_tmp_line, map) == 1)
	{
		parser_map_floor(i, ft_tmp_line, map);
		map->floor_count++;
	}
	if (format_texture_dir(ft_tmp_line, map) == 1)
	{
		parser_map_textture_dir(i, ft_tmp_line, map);
		map->texture_dirs_count++;
	}
	free(ft_tmp_line);
	return (0);
}

static int	parser_map_matris(int *line_i, char *line, t_map *map)
{
	int		tmp_line_i;
	char	*ft_map_tmp_line;

	tmp_line_i = *line_i;
	ft_map_tmp_line = ft_strtrim(line, "\n");
	map->matris[tmp_line_i++] = ft_strdup(ft_map_tmp_line);
	free(ft_map_tmp_line);
	*line_i = tmp_line_i;
	return (0);
}

int	parser_map(t_map *map)
{
	int		i;
	char	*line;
	int		line_i;

	i = 0;
	line_i = 0;
	line = get_next_line(map->fd);
	while (line != NULL)
	{
		if (line[0] != '\n')
		{
			parser_map_header(i, line, map);
			if (i > 5)
				parser_map_matris(&line_i, line, map);
			free(line);
			i++;
		}
		else
			free(line);
		line = get_next_line(map->fd);
	}
	free(line);
	map->matris[line_i] = NULL;
	close(map->fd);
	return (0);
}
