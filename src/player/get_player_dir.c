#include "../../include/header.h"

int get_player_dir(t_game *game)
{
    int		i;
	int		player_position[4];
	char	**get_posible_single_items;

	i = -1;
    while (player_position[++i])
        player_position[i] = 0;
    i = -1;
	get_posible_single_items = ft_split(game->map.possible_single_items, ',');
	while (get_posible_single_items[++i])
    {
		player_position[i] += get_block_count(&game->map, get_posible_single_items[i][0]);
        if (player_position[i] > 0)
        {
            game->player.dir = get_posible_single_items[i][0];
            return (1);
        }
    }
	return (0);
}