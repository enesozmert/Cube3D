#ifndef GNL_H
# define GNL_H

# include <stdlib.h>
# include "../libraries/libft/libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*ft_read(int fd, char *next_linex);
char	*ft_readline(char *next_linex);
char	*ft_newline(char *next_linex);
char	*get_next_line(int fd);

#endif