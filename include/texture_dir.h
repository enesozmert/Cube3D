#ifndef TEXTURE_DIR
#define TEXTURE_DIR

typedef struct s_texture_dir
{
    int     index;
    int     fd_start_index;
    char	*dir;
    char	*texture_path;
    int		check;
}   t_texture_dir;


#endif