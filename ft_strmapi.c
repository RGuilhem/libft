#include "libft.h"
#include <stdlib.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *f_str;
    int     i;

    f_str = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
    if (f_str == NULL)
        return (NULL);
    i = 0;
    while (s[i])
    {
        f_str[i] = f(i, s[i]);
        i++;
    }
    f_str[i] = '\0';
    return (f_str);
}
