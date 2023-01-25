#include "../../include/header.h"

int get_map_height(char *path)
{
	int		i;
	int		map_fd;
	char	*line;
	char	*tmp_line;

	i = 0;
	line = NULL;
	map_fd = open(path, O_RDONLY);
	line = get_next_line(map_fd);
	while (line != NULL)
	{
		if (line[0] == '\n' && ft_strlen(line) == 1)
			line = get_next_line(map_fd);
		tmp_line = ft_strtrim(line, " ");
		free(line);
		free(tmp_line);
		line = get_next_line(map_fd);
		i++;
	}
	close(map_fd);
	return (i);
}