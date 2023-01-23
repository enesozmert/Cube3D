#include "../../include/header.h"

int main(int argc, char *argv[])
{
    t_game game;
    init_all(&game);
    if (argc != 2)
        return (0);
    //map
    read_map(argv[1], &game.map);
    parser_map(&game.map);
    //exception
    exception_handler(game.map);
    //player
    get_player_position(&game);
    get_player_dir(&game);
    player_select_rotate(&game);
    player_rotate(&game);
    //draw
    draw_screen(&game);
    init_texture(&game);
    game.map.matris[(int)game.player.pos_x][(int)game.player.pos_y] = '0';
    mlx_hook(game.wlx.win, ON_KEYDOWN, 1L<<0, event_key_down, &game);
    mlx_hook(game.wlx.win, ON_KEYUP, 1L<<1, event_key_up, &game);
    mlx_hook(game.wlx.win, ON_DESTROY, 0, event_close, &game);
    mlx_loop_hook(game.wlx.mlx, ray_update, &game);
    mlx_loop(game.wlx.mlx);
    return (0);
}
