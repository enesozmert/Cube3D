#ifndef KEY_H
#define KEY_H

enum
{
	ON_KEYDOWN = 2,
	ON_KEYUP = 3,
	ON_MOUSEDOWN = 4,
	ON_MOUSEUP = 5,
	ON_MOUSEMOVE = 6,
	ON_EXPOSE = 12,
	ON_DESTROY = 17
};

enum 
{
	MACOS_LEFT = 123,
	MACOS_RIGHT = 124,
	MACOS_W = 13,
	MACOS_A = 0,
	MACOS_S = 1,
	MACOS_D = 2,
	MACOS_SPACE = 49
};


int event_close(t_game *game);
int event_key_up(int key_code, t_game *game);
int event_key_down(int key_code, t_game *game);
int key_close(int key_code, t_game *game);
int key_player_rotate(int key_code, t_game *game);
int key_player_move(int key_code, t_game *game);
int key_player_jump(int key_code, t_game *game);
#endif