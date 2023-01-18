#include "../../include/header.h"

int main(int argc, char *argv[])
{
    t_game game;
    init_map(&game.map);
    if (argc != 2)
        return (0);
    read_map(argv[1], &game.map);
    parser_map(&game.map);
    exception_handler(game.map);
    init_player(&game.player);
    init_camera(&game.camera);
    init_frame(&game.frame);
    init_screen(&game.screen);
    load_screen(&game);
    mlx_loop(game.wlx.mlx);
    return (0);
}
