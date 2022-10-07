#include "libft.h"

static int ft_count_splits(char const *s, char c)
{
    int count;
    int i;

    count = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            count++;
        i++;
    }
    i++;
    return (count);
}

static int  ft_len_to(const char *s, char c)
{
    int len;

    len = 0;
    while (s[len] && s[len] != c)
        len++;
    return (len);
}

char    **ft_split(char const *s, char c)
{
    char    **splits;
    int     i;
    int     j;
    int     count;
    int     num_splits;

    num_splits = ft_count_splits(s, c);
    splits = malloc((num_splits + 1) * sizeof(char *));
    if (splits == NULL)
        return (NULL);
    i = 0;
    while (i < num_splits)
    {
        j = 0;
        count = ft_len_to(s, c);
        splits[i] = malloc((count + 1) * sizeof(char));
        if (splits[i] == NULL)
            return (NULL);
        while (s[j] && j < count)
        {
            j++;
        }
        i++;
    }
    splits[i] = NULL;
    return (splits);
}
