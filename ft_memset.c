#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    char *s_copy;

    s_copy = s;
    while (n--)
        *s_copy++ = (unsigned char) c;
    return (s);
}
