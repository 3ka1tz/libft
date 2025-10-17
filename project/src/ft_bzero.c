#include <stddef.h> // provides size_t

#include "libft.h" // provides ft_memset

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
