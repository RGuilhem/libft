#include "../includes/libft.h"

int ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}

int ft_isalpha(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int ft_isprint(int c)
{
    return (c >= 32 && c < 128);
}

int ft_isascii(int c)
{
    return (c >= 0 && c < 128);
}