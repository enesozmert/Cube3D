#include "../../include/header.h"

int ray_update(t_game *game)
{
    int x;
    int step_x;
    int step_y;
    int side;
    t_position *player_position;
    t_data tmp_data;

    x = -1;
    step_x = 0;
    step_y = 0;
    side = 0;
    player_position = get_player_position(&game->map);
    game->player.pos_x = player_position->x + 0.5;
    game->player.pos_y = player_position->y + 0.5;
    tmp_data.bits_per_pixel = 0;
	tmp_data.line_length = 0;
	tmp_data.endian = 0;
	tmp_data.img = mlx_new_image(game->wlx.mlx, game->screen.width, game->screen.height);
	tmp_data.addr = (int *)mlx_get_data_addr(tmp_data.img, &tmp_data.bits_per_pixel,
			&tmp_data.line_length, &tmp_data.endian);
    while (++x < game->screen.width)
    {
        game->ray.per_pixel_x = x;
        ray(game);
        ray_steps(game, &step_x, &step_y);
        ray_hit(game, &step_x, &step_y, &side);
        ray_fisheye_fixed(game, &side);
        draw_pixel_height(game);
        draw_wall_x(game);
        draw_texture_calculate(game);
        draw_texture_color(game, &side);
        draw_texture(game, &tmp_data);
    }
    mlx_put_image_to_window(game->wlx.mlx, game->wlx.win, tmp_data.img, 0, 0);
	mlx_destroy_image(game->wlx.mlx, tmp_data.img);
    return (0);
}