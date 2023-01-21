#ifndef FRAME_H
#define FRAME_H

typedef struct s_frame
{
    int width;
    int height;
    double time;
    double old_time;
    double frame_time;
}   t_frame;


#endif