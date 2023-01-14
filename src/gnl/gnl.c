#include "../../include/header.h"

static char	*ft_get_one_line(char *left_str)
{
	int		i;
	char	*str;

	i = 0;
	if (!left_str[i])
		return (0);
	while (left_str[i] && left_str[i] != '\n')
		i++;
	str = (char *)ft_calloc(sizeof(char), (i + 2));
	if (!str)
		return (0);
	str[0] = '\0';
	i = 0;
	while (left_str[i] && left_str[i] != '\n')
	{
		str[i] = left_str[i];
		i++;
	}
	if (left_str[i] == '\n')
	{
		str[i] = left_str[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	*ft_new_left_str(char *left_str)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (left_str[i] && left_str[i] != '\n')
		i++;
	if (!left_str[i])
	{
		free(left_str);
		return (0);
	}
	str = (char *)ft_calloc(sizeof(char), (ft_strlen(left_str) - i + 1));
	if (!str)
		return (0);
	str[0] = '\0';
	i++;
	j = 0;
	while (left_str[i])
		str[j++] = left_str[i++];
	str[j] = '\0';
	free(left_str);
	return (str);
}

char	*ft_search_n_str(int fd, char *left_str)
{
	char	*buff;
	int		rd_bytes;

	buff = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	buff[0] = '\0';
	if (!buff)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strchr(left_str, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buff, BUFFER_SIZE);
		if (rd_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[rd_bytes] = '\0';
		left_str = ft_strjoin_s1(left_str, buff);
	}
	free(buff);
	return (left_str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*left_str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	left_str = ft_search_n_str(fd, left_str);
	if (!left_str)
		return (NULL);
	line = ft_get_one_line(left_str);
	left_str = ft_new_left_str(left_str);
	return (line);
}
