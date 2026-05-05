#include <stdlib.h>

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s, const char *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s || !set)
		return (NULL);
	start = 0;
	while (s[start] && is_in_set(s[start], set))
		start++;
	end = ft_strlen(s);
	while (end > start && is_in_set(s[end - 1], set))
		end--;
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
