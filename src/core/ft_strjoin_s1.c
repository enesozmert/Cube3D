#include "../../include/header.h"

char	*ft_strjoin_s1(char *s1, char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*res;

	if (!s1)
	{
		s1 = (char *)ft_calloc(1, sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = (char *)ft_calloc((len1 + len2 + 1), sizeof(char));
	res[0] = '\0';
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, len1 + 1);
	ft_strlcpy(res + len1, s2, len2 + 1);
	free(s1);
	return (res);
}