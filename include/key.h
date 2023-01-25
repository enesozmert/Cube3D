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
	MACOS_SPACE = 49,
	MACOS_ESC = 53,
};

typedef struct s_key
{
	int is_w;
	int is_a;
	int is_s;
	int is_d;
	int is_left;
	int is_right;
	int is_esc;
	int is_space;
}	t_key;

#endif