#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *allocated;
    size_t  total;

    if (nmemb == 0 || size == 0)
        return (NULL);
    total = nmemb * size;
    if (total / nmemb != size || total / size != nmemb)
        return (NULL);
    allocated = malloc(total);
    if (allocated == NULL)
        return (NULL);
    ft_bzero(allocated, total);
    return (allocated);
}
