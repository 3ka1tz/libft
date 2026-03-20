#include <stddef.h>
#include <stdlib.h>

#include "../include/libft.h"

static size_t	ft_numlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_numlen(n);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	if (n == 0)
		s[0] = '0';
	if (n > 0)
	{
		s[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}
