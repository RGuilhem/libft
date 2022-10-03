#include "../libft.h"
/*
size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    int count;
    int i;

    count = 0;
    i = 0;
    while (dst[i] && i < (int) size)
        i++;
    while (count < (int) size - i - 1 && src[count])
    {
        dst[i + count] = src[count];
        count++;
    }
    if (count <= (int) size - i)
        dst[i + count] = '\0';
    return (i + ft_strlen(src));
}
*/

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  len;
    size_t  src_len;

    len = 0;
    src_len = ft_strlen(src);
    while (*dst && size > 0)
    {
        dst++;
        len++;
        size--;
    }
    while (*src && size-- > 1)
        *dst++ = *src++;
    if (size == 0 || *src == 0)
        *dst = '\0';
    return (src_len + len);
}
