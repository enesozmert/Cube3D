#include "../../include/header.h"

int draw_texture(t_game *game, t_data *tmp_data, t_draw *select_texture)
{
    int y;
    long int color;
    y = -1;
    while (++y < game->screen.height)
    {
        if (y < game->draw.start)
            tmp_data->addr[y * game->screen.width + game->ray.per_pixel_x] = (int)game->map.ceiling->hex_color;
        else if (y >= game->draw.start && y <= game->draw.end)
        {
            tmp_data->addr[y * game->screen.width + game->ray.per_pixel_x] = color;
            game->draw.tex_y = (int)game->draw.tex_pos & (select_texture->tex_h - 1);
            game->draw.tex_pos += game->draw.step;
            color = select_texture->data.addr[game->draw.tex_y * select_texture->tex_h + game->draw.tex_x];
            tmp_data->addr[y * game->screen.width + game->ray.per_pixel_x] = color;
        }
        else if (y < game->screen.height)
            tmp_data->addr[y * game->screen.width + game->ray.per_pixel_x] = (int)game->map.floor->hex_color;
    }
    return (0);
}