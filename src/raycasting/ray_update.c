#include "../../include/header.h"

int ray_update(t_game *game)
{
    int step_x;
    int step_y;
    int side;
    t_position *player_position;

    step_x = 0;
    step_y = 0;
    side = 0;
    game->ray.per_pixel_x = -1;
    player_position = get_player_position(&game->map);
    game->player.pos_x = (double)player_position->x + 0.5;
    game->player.pos_y = (double)player_position->y + 0.5;
    init_tmp_data(game);
    while (++game->ray.per_pixel_x < game->screen.width)
    {
        ray(game);
        ray_steps(game, &step_x, &step_y);
        ray_hit(game, &step_x, &step_y, &side);
        ray_fisheye_fixed(game, &side);
        ray_wall_height(game);
        draw_pixel_height(game);
        draw_wall_x(game);
        draw_texture_calculate(game);
        draw_texture_select(game, &side);
        draw_texture(game);
    }
    mlx_put_image_to_window(game->wlx.mlx, game->wlx.win, game->tmp_data.img, 0, 0);
	mlx_destroy_image(game->wlx.mlx, game->tmp_data.img);
    return (0);
}