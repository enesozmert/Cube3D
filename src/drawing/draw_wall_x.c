#include "../../include/header.h"

int	draw_wall_x(t_game *game)
{
	if (game->ray.side == 0)
		game->draw.wall_x = game->player.pos_y + game->ray.perp_wall_dist
			* game->ray.dir_y;
	else
		game->draw.wall_x = game->player.pos_x + game->ray.perp_wall_dist
			* game->ray.dir_x;
	game->draw.wall_x -= floor(game->draw.wall_x);
	return (0);
}