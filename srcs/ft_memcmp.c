#include "../libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char            *s1_cpy;
    char            *s2_cpy;
    unsigned int    i;

    s1_cpy = (char *) s1;
    s2_cpy = (char *) s2;
    i = 0;
    while (i < n)
    {
        if ((unsigned char) s1_cpy[i] != (unsigned char) s2_cpy[i])
            return (s1_cpy[i] - s2_cpy[i]);
        i++;
    }
    return (0);
}
