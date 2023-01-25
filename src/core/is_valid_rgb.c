#include "../../include/header.h"

int is_valid_rgb(char *str)
{
    int     count;
    int     comma;
    int     rgb[3];
    char    **get_rgb;

    count = 0;
    comma = get_str_char_count(str, ',');
    if (comma != 2)
        return (0);
    get_rgb = ft_split(str, ',');
    while (get_rgb[count])
        count++;
    if (count < 0 || count > 3)
        return (0);
    count = -1;
    while (get_rgb[++count])
    {
        if (get_str_char_count(str, ' ') > 0)
        {
            free_double_str(get_rgb);
            return (0);
        }
        rgb[count] = ft_atoi(get_rgb[count]);
    }
    free_double_str(get_rgb);
    if (rgb[0] < 0 || rgb[0] > 255 || rgb[1] < 0 || rgb[1] > 255 || rgb[2] < 0 || rgb[2] > 255)
        return (0);
    return (1);
}