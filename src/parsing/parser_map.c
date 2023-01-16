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
			i++;
		}
		line = ft_strtrim(line, " ");
		if (format_textture_dir(line, map) == 1)
			printf("format_textture_dir ok , i : %d\n", i);
		free(line);
		i++;
	}
    return (0);
}