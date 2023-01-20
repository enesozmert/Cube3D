#include "../../include/header.h"

t_draw *draw_texture_select(t_game *game, int *side)
{
	if (*side == 1)
	{
		if ((game->ray.dir_x <= 0 && game->ray.dir_y <= 0)
			|| (game->ray.dir_x >= 0 && game->ray.dir_y <= 0))
			return (&game->texture[0]);
		else
			return (&game->texture[1]);
	}
	else
	{
		if ((game->ray.dir_x <= 0 && game->ray.dir_y <= 0)
			|| (game->ray.dir_x <= 0 && game->ray.dir_y >= 0))
			return (&game->texture[2]);
		else
			return (&game->texture[3]);
	}
	return (0);
}