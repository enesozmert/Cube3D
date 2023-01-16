#include "../../include/header.h"

int is_valid_filename(char *path)
{
    int i;
    
    if (path[0] != '.' || (path[1] != '/' && path[1] != '\\'))
        return (0);
    i = 1;
    while (++i < (int)ft_strlen(path))
    {
        if (!((path[i] >= 'a' && path[i] <= 'z')
            || (path[i] >= 'A' && path[i] <= 'Z') || (path[i] >= '0' && path[i] <= '9')
            || path[i] == '.' || path[i] == '_' || path[i] == '-'))
            return (0);
    }
    return (1);
}