#include "../../include/header.h"

int parser_map(t_map *map)
{
    char	*line;
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
		line = ft_strtrim(line, " ");
		// line = ft_strtrim(line, "\n");
		if (format_ceiling(line, map) == 1)
		{
			map->ceiling_count++;
			parser_map_ceiling(i, line, map);
			printf("format_ceiling ok , i : %d\n", i);
		}
		else if (format_floor(line, map) == 1)
		{
			map->floor_count++;
			parser_map_floor(i, line, map);
			printf("format_floor ok , i : %d\n", i);
		}
		if (format_texture_dir(line, map) == 1)
		{
			map->texture_dirs_count++;
			parser_map_textture_dir(i, line, map);
			printf("format_textture_dir ok , i : %d\n", i);
		}
		if (i > 5 && line[0] == '1')
		{
			// line = ft_strtrim(line, "\n");
			map->matris[line_i++] = ft_strdup(line);
		}
		free(line);
		i++;
	}
	printf("map_>matris[0] : %s\n", map->matris[0]);
	map->matris[line_i] = NULL;
	close(map->fd);
    return (0);
}