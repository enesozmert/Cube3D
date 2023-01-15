#include "../../include/header.h"

char *get_file_extension(char *path)
{
    char *last_dot = ft_strrchr(path, '.');
    if (last_dot == NULL)
    {
        return NULL;
    }
    else
    {
        return (last_dot + 1);
    }
}