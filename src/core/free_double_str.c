#include "../../include/header.h"

void    free_double_str(char **str)
{
	int	i;

	if (!str[0])
		return ;
	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
}