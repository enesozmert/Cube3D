#include "../../include/header.h"

int	map_error(t_map map)
{
	int i;
	int	x;
	int	y;
	int	size;

	x = 1;
	y = 0;
	i = -1;
    size = 0;
	while (map.matris[++i])
	{
		printf("i: %d line :%s\n", i, map.matris[i]);
	}
	while (map.matris[y])
	{
		x = 0;
	    size = (int)ft_strlen(map.matris[y]) - 1;
		while (map.matris[y][x])
		{
			if (map.matris[0][x] != '1')
				return (404);
			else if (map.matris[y][0] != '1')
				return (403);
			// printf("y: %d size: %d char %c\n", y, size - 2, map.matris[y][size - 2]);
			//printf("****%c\n", map.matris[y][size - 1]);
			if (map.matris[y][size - 1] != '1')
			{
				//printf("y: %d size: %d char %c\n", y, size, map.matris[y][size - 1]);
				return (402);
			}
			else if (map.matris[size - 1][x] != '1')
				return (401);
			x++;
		}
		y++;
	}
	return (0);
}

int	item_repeat_error(t_map map)
{
	(void)map;
	// char	*singular_items;
    // char	**get_posible_items;
	// int		i;
    // int     j;

	// i = -1;
    // j = -1;
    // get_posible_items = ft_split(map.possible_items, ",");
	// while (singular_items[++i])
	// {
    //     while (get_posible_items[++j])
    //     {
    //         if (get_block_count(&map, get_posible_items[j]) < 1)
	// 		    return (202);
    //     }
	// }
	return (0);
}

int	item_single_error(t_map map)
{
	(void)map;
    // char	**get_posible_items;
    
    // get_posible_items = ft_split(map.possible_items, ",");
	// if (get_block_count(&map, 'P') != 1)
	// 	return (204);
	return (0);
}

int	item_wrong_error(t_map map)
{
	(void)map;
	// int	i;
	// int	j;

	// j = 0;
	// i = 0;
	// while (map.matris[i])
	// {
	// 	j = 0;
	// 	while (map.matris[i][j])
	// 	{
	// 		if (!ft_strchr("1PCE0X\n", map.matris[i][j]))
	// 			return (102);
	// 		j++;
	// 	}
	// 	i++;
	// }
	return (0);
}

int	file_error(t_map map)
{
	(void)map;
    // char *str;

	// if (map.fd < 0)
	// 	return (504);
    // str = ft_strchr(map.path, '.');
	// if (ft_strnstr(&str, map.extension, ft_strlen(&map.path)) == NULL)
	// 	return (502);
	return (0);
}