#include "../libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned int    i;
    char            *dest_cpy;
    char            *src_cpy;

    i = 0;
    dest_cpy = (char *) dest;
    src_cpy = (char *) src;
    while (i < n)
    {
        dest_cpy[i] = src_cpy[i];
        i++;
    }
    return (dest);
}
