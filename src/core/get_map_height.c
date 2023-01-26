/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_height.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:40:39 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 14:50:58 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int	get_map_height(char *path)
{
	int		i;
	int		map_fd;
	char	*line;

	i = 0;
	line = NULL;
	map_fd = open(path, O_RDONLY);
	line = get_next_line(map_fd);
	while (line != NULL)
	{
		if (line[0] != '\n')
			i++;
		free(line);
		line = get_next_line(map_fd);
	}
	free(line);
	close(map_fd);
	return (i);
}