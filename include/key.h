#ifndef KEY_H
#define KEY_H

enum {
	ON_KEYDOWN = 2,
	ON_KEYUP = 3,
	ON_MOUSEDOWN = 4,
	ON_MOUSEUP = 5,
	ON_MOUSEMOVE = 6,
	ON_EXPOSE = 12,
	ON_DESTROY = 17
};

int event_close(t_game *game);
int event_key_down(int key_code, t_game *game);
int evet_player_rotate(t_game *game);
#endif