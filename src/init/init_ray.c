#include "../../include/header.h"

void init_ray(t_ray *ray)
{
    ray->per_pixel_x = -1;
    ray->map_x = 0;
    ray->map_y = 0;
    ray->dir_x = 0;
    ray->dir_y = 0;
    ray->delta_dist_x = 0;
    ray->delta_dist_y = 0;
    ray->side_dist_x = 0;
    ray->side_dist_y = 0;
    // *(ray->step_x) = 0;
    // *(ray->step_y) = 0;
    ray->perp_wall_dist = 0;
    ray->hit = 0;
    // ray->side = 0;
}