#include "../../include/header.h"

char *get_filename_without_extension(char *path)
{
    char *last_slash = ft_strrchr(path, '/');
    char *last_dot;
    if (last_slash == NULL)
    {
        last_dot = ft_strrchr(path, '.');
        if (last_dot == NULL)
        {
            return (path);
        }
        else
        {
            return ft_strndup(path, last_dot - path);
        }
    }
    else
    {
        last_dot = ft_strrchr(last_slash, '.');
        if (last_dot == NULL)
        {
            return (last_slash + 1);
        }
        else
        {
            return ft_strndup(last_slash + 1, last_dot - last_slash - 1);
        }
    }
}