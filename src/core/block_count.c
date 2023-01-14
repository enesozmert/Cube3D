#include "../../include/header.h"

int	get_block_count(t_map *map, char block_name)
{
	int	j;
	int	i;
	int	result;

	i = 0;
	j = 0;
	result = 0;
	while (map->matris[i])
	{
		j = 0;
		while (map->matris[i][j])
		{
			if (map->matris[i][j] == block_name)
				result++;
			j++;
		}
		i++;
	}
	return (result);
}
