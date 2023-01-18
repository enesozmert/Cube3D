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
		if (format_ceiling(tmp_line, map) == 1)
		{
			map->ceiling_count++;
			parser_map_ceiling(i, tmp_line, map);
			printf("format_ceiling ok , i : %d index: %d\n", i, map->ceiling->fd_start_index);
		}
		else if (format_floor(tmp_line, map) == 1)
		{
			map->floor_count++;
			parser_map_floor(i, tmp_line, map);
			printf("format_floor ok , i : %d index: %d\n", i, map->floor->fd_start_index);
		}
		if (format_texture_dir(tmp_line, map) == 1)
		{
			map->texture_dirs_count++;
			parser_map_textture_dir(i, tmp_line, map);
			printf("format_textture_dir ok , i : %d\n", i);
		}
		if (i > 5)
		{
			ft_tmp_line = ft_strtrim(tmp_line, "\n");
			line[ft_strlen(line)] = '\0';
			map->matris[line_i++] = ft_strdup(ft_tmp_line);
		}
		free(tmp_line);
		free(line);
		i++;
	}
	map->matris[line_i] = NULL;
	close(map->fd);
    return (0);
}