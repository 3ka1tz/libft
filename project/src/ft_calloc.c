#include <stdint.h>
#include <stdlib.h>

#include "../include/libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    if (size != 0 && nmemb > SIZE_MAX / size)
        return (NULL);

    size_t total_size = nmemb * size;

    void *ptr = malloc(total_size);
    if (!ptr)
        return (NULL);

    ft_bzero(ptr, total_size);

    return (ptr);
}
