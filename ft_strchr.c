#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char    *s_cpy;

    s_cpy = (char *) s;
    while (*s_cpy)
    {
        if (*s_cpy == (char) c)
            return (s_cpy);
        s_cpy++;
    }
    if (*s_cpy == (char) c)
        return (s_cpy);
    return (NULL);
}
