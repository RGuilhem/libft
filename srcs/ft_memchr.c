#include "../libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    char    *s_cpy;

    s_cpy = (char *) s;
    while (n--)
    {
        if (*s_cpy++ == (char) c)
            return (--s_cpy);
    }
    return (NULL);
}
