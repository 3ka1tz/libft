#include <stddef.h>
#include <stdlib.h>

#include "../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	strjoin = malloc(len + 1);
	if (!strjoin)
		return (NULL);
	while(*s1)
		*strjoin++ = *s1++;
	while (*s2)
		*strjoin++ = *s2++;
	*strjoin = '\0';
	return (strjoin);
}
