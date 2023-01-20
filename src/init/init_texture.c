#include "../../include/header.h"

int init_texture(t_game *game)
{
	int i;

	i = -1;
	while (++i < 4)
	{
		game->texture[i].data.img = mlx_xpm_file_to_image(game->wlx.mlx, game->map.texture_dirs[i].texture_path,
													 &(game->texture[i].tex_w), &(game->texture[i].tex_h));
		game->texture[i].data.addr = (int *)mlx_get_data_addr(game->texture[i].data.img,
														 &(game->texture[i].data.bits_per_pixel), &(game->texture[i].data.line_length),
														 &(game->texture[i].data.endian));
	}
	return (0);
}