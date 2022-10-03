#include "../libft.h"
#include <stdlib.h>

static int ft_min(unsigned int a, unsigned int b)
{
    if (a <= b)
        return (a);
    else
        return (b);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char            *substr;
    size_t          slen;
    unsigned int    i;

    slen = ft_strlen(s);
    substr = malloc((ft_min(len, slen) + 1) * sizeof(char));
    if (substr == NULL)
        return (NULL);
    i = 0;
    while (i < len && start + i < slen)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}
