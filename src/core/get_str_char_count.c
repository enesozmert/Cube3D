#include "../../include/header.h"

int get_str_char_count(char *str, char x)
{
    int     i;
    int     result;

    i = -1;
    result = 0;
    while (str[++i])
    {
        if (str[i] == x)
            result++;
    }
    return (result);
}