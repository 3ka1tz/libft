/**
 * @brief Checks whether a character is alphabetic.
 *
 * Determines if the given character is a letter from the English alphabet
 * (either uppercase or lowercase).
 *
 * @param c The character to check, passed as an int to accommodate EOF.
 * @return int Returns 1 if the character is alphabetic, 0 otherwise.
 */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*
int	main(void)
{
	printf("ft_isalpha('A') returns %d\n", ft_isalpha('A'));
}
*/
