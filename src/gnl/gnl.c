/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:06:23 by eozmert           #+#    #+#             */
/*   Updated: 2023/01/26 13:13:36 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

char	*ft_read(int fd, char *next_linex)
{
	char	*buffer;
	int		read_byte;

	read_byte = 1;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (0);
	while (!ft_strchr(next_linex, '\n') && read_byte != 0)
	{
		read_byte = read(fd, buffer, BUFFER_SIZE);
		if (read_byte == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[read_byte] = '\0';
		next_linex = ft_strjoin_s1(next_linex, buffer);
	}
	free(buffer);
	return (next_linex);
}

char	*ft_readline(char *next_linex)
{
	char	*read_line;

	if (!next_linex[0])
		return (NULL);
	read_line = ft_substr(next_linex, 0,
			(ft_strchr(next_linex, '\n') - next_linex + 1));
	if (!read_line)
		return (NULL);
	return (read_line);
}

char	*ft_newline(char *next_linex)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (next_linex[i] && next_linex[i] != '\n')
		i++;
	if (!next_linex[i])
	{
		free(next_linex);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(next_linex) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (next_linex[i])
		str[j++] = next_linex[i++];
	str[j] = '\0';
	free(next_linex);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*next_line;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	next_line = ft_read(fd, next_line);
	if (!next_line)
		return (NULL);
	line = ft_readline(next_line);
	next_line = ft_newline(next_line);
	return (line);
}
