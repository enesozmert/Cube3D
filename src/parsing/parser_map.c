#include "../../include/header.h"

int parser_map(t_map *map)
{
	int 	i;
    char	*line;
	char	*tmp_line;
	char	*ft_tmp_line;
	char	*ft_map_tmp_line;
	int		line_i;

	i = 0;
	line_i = 0;
    line = NULL;
	tmp_line = NULL;
	ft_tmp_line = NULL;
	ft_map_tmp_line = NULL;
    while ((line = get_next_line(map->fd)) != NULL)
	{
		if (line[0] == '\n' && ft_strlen(line) == 1)
			line = get_next_line(map->fd);
		tmp_line = ft_strtrim(line, " ");
		ft_tmp_line = ft_strtrim(tmp_line, "\n");
		ft_tmp_line[ft_strlen(ft_tmp_line)] = '\0';
		if (format_ceiling(tmp_line, map) == 1)
		{
			map->ceiling_count++;
			parser_map_ceiling(i, ft_tmp_line, map);
		}
		else if (format_floor(ft_tmp_line, map) == 1)
		{
			map->floor_count++;
			parser_map_floor(i, ft_tmp_line, map);
		}
		if (format_texture_dir(ft_tmp_line, map) == 1)
		{
			map->texture_dirs_count++;
			parser_map_textture_dir(i, ft_tmp_line, map);
		}
		if (i > 5)
		{
			ft_map_tmp_line = ft_strtrim(line, "\n");
			map->matris[line_i++] = ft_strdup(ft_map_tmp_line);
			free(ft_map_tmp_line);
		}
		free(ft_tmp_line);
		free(tmp_line);
		free(line);
		if (!(line[0] == '\n' && ft_strlen(line) == 1))
			i++;
	}
	map->matris[line_i] = NULL;
	map->texture_dirs[5].check = 0;
	map->texture_dirs[5].dir = NULL;
	map->texture_dirs[5].texture_path = NULL;
	map->texture_dirs[5].fd_start_index = 0;
	map->texture_dirs[5].index = 0;
	close(map->fd);
    return (0);
}