#include <stdlib.h>

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**free_array(char **arr, int i)
{
	while (i > 0)
		free(arr[--i]);
	free(arr);
	return (NULL);
}

static char	**fill(char **result, const char *s, char c)
{
	int	i;
	int	len;
	int	word_idx;

	i = 0;
	word_idx = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			len = 0;
			while (s[i + len] && s[i + len] != c)
				len++;
			result[word_idx] = ft_substr(s, i, len);
			if (!result[word_idx])
				return (free_array(result, word_idx));
			word_idx++;
			i += len;
		}
	}
	result[word_idx] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	return (fill(result, s, c));
}
