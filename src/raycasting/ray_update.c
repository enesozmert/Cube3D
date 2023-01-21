#include "../../include/header.h"

int ray_update(t_game *game)
{
    time_t seconds;
    int step_x;
    int step_y;
    int side;

    step_x = 0;
    step_y = 0;
    side = 0;
    game->ray.per_pixel_x = -1;
    init_tmp_data(game);
    game->frame.old_time = time(&seconds);
    while (++game->ray.per_pixel_x < game->screen.width)
    {
        ray(game);
        ray_steps(game, &step_x, &step_y);
        ray_hit(game, &step_x, &step_y, &side);
        ray_fisheye_fixed(game, &side);
        ray_wall_height(game);
        draw_pixel_height(game);
        draw_wall_x(game);
        draw_texture_select(game, &side);
        draw_texture_calculate(game);
        draw_texture(game);
    }
    mlx_put_image_to_window(game->wlx.mlx, game->wlx.win, game->tmp_data.img, 0, 0);
    ray_time(game);
	mlx_destroy_image(game->wlx.mlx, game->tmp_data.img);
    ft_putnbr_fd(1.0 / game->frame.frame_time, 1);
    ft_putchar_fd('\n', 1);
    // printf("xxxx : %0.2f", 1.0 / game->frame.frame_time);
    return (0);
}