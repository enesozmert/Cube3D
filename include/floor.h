#ifndef FLOOR_H
#define FLOOR_H

typedef struct s_floor
{
    int             fd_start_index;
    unsigned long	hex_color;
    int				*rgb;
    int				check;
}   t_floor;

#endif