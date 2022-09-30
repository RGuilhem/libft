#include <stdlib.h>
#include <time.h>
#include <string.h>

char    *ft_random_string(int length)
{
    char    *string;
    int     i;

    string = malloc(sizeof(char) * length + 1);
    i = 0;
    while (i < length)
    {
        string[i] = (char) rand() % 128;
        i++;
    }
    string[i] = '\0';
    return string;
}

char    *ft_random_alphanum_string(int length)
{
    char    *string;
    const char  *keys = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.-#'?!";
    int     i;

    string = malloc(sizeof(char) * length + 1);
    i = 0;
    while (i < length)
    {
        string[i] = keys[rand() % strlen(keys)];
        i++;
    }
    string[i] = '\0';
    return string;
}
