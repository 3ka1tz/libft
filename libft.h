#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stddef.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
void	*ft_memset(void *s, int c, size_t n);

#endif
