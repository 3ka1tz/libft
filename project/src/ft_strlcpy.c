#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	ssize;
	size_t	i;

	if (!dst || !src)
		return (0);
	ssize = 0;
	while (src[ssize])
		ssize++;
	i = 0;
	while (i < dsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dsize != 0)
		dst[i] = '\0';
	return (ssize);
}
