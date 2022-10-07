#include "libft.h"

int     ft_atoi(const char *s)
{
    int result;
    int sign;
    char *s_cpy;

    result = 0;
    sign = 1;
    s_cpy = (char *) s;
    while (ft_strchr("\t\n\r\v\f ", *s_cpy))
        s_cpy++;
    if (*s_cpy == '+')
        s_cpy++;
    if (*s_cpy == '-')
    {
        sign = -1;
        s_cpy++;
    }
    while (*s_cpy && ft_isdigit(*s_cpy))
        result = result * 10 + *s_cpy++ - '0';
    return (result * sign);
}
