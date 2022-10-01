#include <unistd.h>
#include "../includes/libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void    ft_putstr_fd(char *s, int fd)
{
    while (*s)
        write(fd, s++, 1);
}

void    ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s, fd);
    write(fd, "\n", 1);
}

static void ft_putnbr_fd_rec(long n, int fd)
{
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        ft_putnbr_fd_rec(-n, fd);
    }
    else if (n >= 10)
    {
        ft_putnbr_fd_rec(n/10, fd);
        ft_putnbr_fd_rec(n%10, fd);
    }
    else
        ft_putchar_fd(n + '0', fd);
}

void    ft_putnbr_fd(int n, int fd)
{
    ft_putnbr_fd_rec(n, fd);
}
