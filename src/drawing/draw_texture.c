#include "../../include/header.h"

int draw_texture(t_game *game)
{
    int y;
    unsigned long color;
    
    y = -1;
    while (++y < game->screen.height)
    {
        if (y < game->draw.start)
            game->tmp_data.addr[y * game->screen.width + game->ray.per_pixel_x] = (int)game->map.ceiling->hex_color;
        else if (y >= game->draw.start - game->player.jump_size && y <= game->draw.end - game->player.jump_size)
        {
            game->draw.tex_y = (int)game->draw.tex_pos & (game->select_texture->tex_h - 1);
            game->draw.tex_pos += game->draw.step;
            color = game->select_texture->data.addr[game->select_texture->tex_h * game->draw.tex_y + game->draw.tex_x];
            game->tmp_data.addr[y * game->screen.width + game->ray.per_pixel_x] = color;
        }
        else if (y < game->screen.height)
            game->tmp_data.addr[y * game->screen.width + game->ray.per_pixel_x] = (int)game->map.floor->hex_color;
    }
    return (0);
}