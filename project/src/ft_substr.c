#include <stdlib.h>

#include "../include/libft.h"

char *ft_substr(const char *str, unsigned int start, size_t len)
{
    if (!str) {
        return NULL;
    }

    size_t str_len = ft_strlen(str);
    if (start >= str_len) {
        return ft_strdup("");
    }

    if (len > str_len - start) {
        len = str_len - start;
    }

    char *substr = malloc(len + 1);
    if (!substr) {
        return NULL;
    }

    ft_strlcpy(substr, str + start, len + 1);
    
    return substr;
}
