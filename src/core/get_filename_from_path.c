#include "../../include/header.h"

char *get_filename_from_path(char *path)
{
    char *last_slash = ft_strrchr(path, '/');
    if (last_slash == NULL)
    {
        return path;
    }
    else
    {
        return last_slash + 1;
    }
}