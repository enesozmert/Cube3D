#include "../../include/header.h"

int parser_map(t_map *map)
{
    char	*line;
	int 	i;

	i = 0;
    line = NULL;
    while ((line = get_next_line(map->fd)) != NULL)
	{
		printf("Ligne %d --> %s\n", i, line);
		free(line);
		i++;
	}
    return (0);
}