#include <stdlib.h>

#include "../include/libft.h"

char *ft_strtrim(const char *s1, const char *set)
{
    if (!s1 || !set) {
        return NULL;
    }

    size_t start = 0;
    while (s1[start] && ft_strchr(set, s1[start])) {
        start++;
    }

    size_t end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1])) {
        end--;
    }

    char *trimmed = malloc(end - start + 1);
    if (!trimmed) {
        return NULL;
    }

    ft_strlcpy(trimmed, s1 + start, end - start + 1);

    return trimmed;
}
