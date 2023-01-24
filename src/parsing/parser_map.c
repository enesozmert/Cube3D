#include "../../include/header.h"

int parser_map(t_map *map)
{
    char	*line;
	char	*tmp_line;
	char	*ft_tmp_line;
	int 	i;
	int		line_i;

	i = 0;
	line_i = 0;
    line = NULL;
    while ((line = get_next_line(map->fd)) != NULL)
	{
		if (line[0] == '\n' && ft_strlen(line) == 1)
		{
			line = get_next_line(map->fd);
			// i++;
		}
		tmp_line = ft_strtrim(line, " ");
		ft_tmp_line = ft_strtrim(tmp_line, "\n");
		ft_tmp_line[ft_strlen(ft_tmp_line)] = '\0';
		if (format_ceiling(tmp_line, map) == 1)
		{
			map->ceiling_count++;
			parser_map_ceiling(i, ft_tmp_line, map);
			// printf("format_ceiling ok , i : %d index: %d\n", i, map->ceiling->fd_start_index);
		}
		else if (format_floor(ft_tmp_line, map) == 1)
		{
			map->floor_count++;
			parser_map_floor(i, ft_tmp_line, map);
			// printf("format_floor ok , i : %d index: %d\n", i, map->floor->fd_start_index);
		}
		if (format_texture_dir(ft_tmp_line, map) == 1)
		{
			map->texture_dirs_count++;
			parser_map_textture_dir(i, ft_tmp_line, map);
			// printf("format_textture_dir ok , i : %d\n", i);
		}
		if (i > 5)
		{
			map->matris[line_i++] = ft_strdup(ft_strtrim(line, "\n"));
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