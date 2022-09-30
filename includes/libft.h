#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

// Libc functions
int     atoi(const char *s);
int     isalnum(int c);
int     isalpha(int c);
int     isdigit(int c);
int     isprint(int c);
int     isascii(int c);
size_t  strlen(const char *s);
size_t  strlcpy(char *dst, const char *src, size_t size);
size_t  strlcat(char *dst, const char *src, size_t size);
int     toupper(int c);
int     tolower(int c);
char    *strchr(const char *s, int c);
char    *strrchr(const char *s, int c);
char    strnstr(const char *big, const char *little, size_t len);
void    bzero(void *s, size_t n);
void    *memset(void *s, int c, size_t n);
void    *memcpy(void *dest, const void *src, size_t n);
void    *memmove(void *dest, const void *src, size_t n);
void    *memchr(const void *s, int c, size_t n);
int     memcmp(const void *s1, const void *s2, size_t n);
//With malloc:
void    *calloc(size_t nmemb, size_t size);
char    *strdup(const char *s);

// Additional functions (some can be used for the libc funcitons)
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);

#endif