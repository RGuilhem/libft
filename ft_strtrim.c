#include "libft.h"
#include <stdlib.h>

static int  ft_num_trimed_up(char const *s, char const *set)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while (s[i] && ft_strchr(set, s[i]) != NULL)
    {
        count++;
        i++;
    }
    return (count);
}

static int  ft_num_trimed_down(char const *s, char const *set)
{
    int count;
    int len;

    count = 0;
    len = ft_strlen(s) - 1;
    while (len >= 0 && ft_strchr(set, s[len]) != NULL)
    {
        count++;
        len--;
    }
    return (count);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *trimed;
    int     before;
    int     after;
    int     i;

    before = ft_num_trimed_up(s1, set);
    after = ft_num_trimed_down(s1, set);
    trimed = malloc((ft_strlen(s1) - before - after + 1) * sizeof(char));
    if (trimed == NULL)
        return (NULL);
    i = 0;
    while (i < (int) ft_strlen(s1) - before - after)
    {
        trimed[i] = s1[before + i];
        i++;
    }
    trimed[i] = '\0';
    return (trimed);
}
