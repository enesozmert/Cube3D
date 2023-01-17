#include "../../include/header.h"

int parser_map(t_map *map)
{
    char	*line;
	int 	i;

	i = 0;
    line = NULL;
    while ((line = get_next_line(map->fd)) != NULL)
	{
		if (line[0] == '\n' && ft_strlen(line) == 1)
		{
			line = get_next_line(map->fd);
			// i++;
		}
		line = ft_strtrim(line, " ");
		if (format_ceiling(line, map) == 1)
		{
			parser_map_ceiling(line, map);
			printf("format_ceiling ok , i : %d\n", i);
		}
		if (format_floor(line, map) == 1)
		{
			// parser_map_floor(line, *map);
			printf("format_floor ok , i : %d\n", i);
		}
		if (format_textture_dir(line, map) == 1)
		{
			// parser_map_textture_dir(i % 4, line, *map);
			printf("format_textture_dir ok , i : %d\n", i);
		}
		free(line);
		i++;
	}
    return (0);
}