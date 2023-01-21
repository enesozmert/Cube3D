#include "../../include/header.h"

int event_key_down(int key_code, t_game *game)
{
    if (key_code == 53)
        event_close(game);
    if (key_code == 124)
    {
        game->player.rotate_speed *= game->frame.frame_time;
        game->player.rotate = game->player.rotate_speed;
		player_rotate(game);
    }
	if (key_code == 123)
    {
        game->player.rotate_speed *= game->frame.frame_time;
        game->player.rotate = game->player.rotate_speed;
		player_rotate(game);
    }
    return (0);
}