#include "../../include/header.h"

int player_position_is_wall(t_game *game, int map_x, int map_y)
{
	if (game->map.matris[(int)(game->player.pos_y)][map_x] == '1')
		return (1);
	if (game->map.matris[map_y][(int)(game->player.pos_x)] == '1')
		return (1);
	// if (game->map.matris[map_y][map_x] == '1')
		// return (1);
	return (0);
}