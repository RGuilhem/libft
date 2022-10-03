#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t size;

    size = 0;
    while (s[size])
        size++;
    return (size);
}

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t count;

    count = 0;
    while (count < size && src[count])
    {
        dst[count] = src[count];
        count++;
    }
    if (size != 0)
        dst[count] = '\0';
    return (ft_strlen(src));
}

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t count;
    int i;

    count = 0;
    i = 0;
    while (dst[i])
        i++;
    while (count < size - i)
    {
        dst[i + count] = src[count];
        count++;
    }
    //TODO terminate the string correctly
    return (ft_strlen(dst) + ft_strlen(src));
}

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - ('a' - 'A'));
    else
        return c;
}

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + ('a' - 'A'));
    else
        return c;
}
