#include "../../include/header.h"

int is_valid_path(char* path)
{
    int len;
    int i;
    int has_directory;

    len = (int)ft_strlen(path);
    i = 1;
    has_directory = 0;
    if (path[0] != '.' || (path[i] != '/' && path[i] != '\\'))
        return (0);
    while (i < len) {
        if (path[i] == '/' || path[i] == '\\') {
            has_directory = 1;
            break;
        }
        i++;
    }
    if (!has_directory)
        return (0);
    while (i < len) {
        if (!((path[i] >= 'a' && path[i] <= 'z') || (path[i] >= 'A' && path[i] <= 'Z') || (path[i] >= '0' && path[i] <= '9') || path[i] == '.' || path[i] == '_' || path[i] == '-' || path[i] == '/' || path[i] == '\\' || path[i] == '\n'))
            return (0);
        i++;
    }
    return (1);
}