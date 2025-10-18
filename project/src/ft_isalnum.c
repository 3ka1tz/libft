#include "../include/libft.h" // provides ft_isalpha, ft_isdigit

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
