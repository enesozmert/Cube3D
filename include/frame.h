#ifndef FRAME_H
#define FRAME_H

typedef struct s_frame
{
    int width;
    int height;
    struct timespec time;
    struct timespec old_time;
    double frame_time;
}   t_frame;


#endif