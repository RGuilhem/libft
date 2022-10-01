/*
TESTING TO BE DONE

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
*/
#include "includes/ft_random_tests.h"
#include "../includes/libft.h"
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

const int TEST_NUM = 10;

bool    test_isalnum()
{
    int i;
    int input;
    int expected;
    int actual;
    bool    passed;

    i = 0;
    passed = true;
    printf("###### %s ######\n", __func__);
    while (i < TEST_NUM)
    {
        input = rand() % 128;
        expected = isalnum(input);
        actual = ft_isalnum(input);

        if (expected == actual)   //function test here
            printf("OKAY\n");
        else
        {
            //test failed
            printf("Test failed:\n");
            printf("   Input   > %d\n", input);
            printf("   Expected> %d\n", expected);
            printf("   Actual  > %d\n", actual);
            passed = false;
        }
        i++;
    }
    return passed;
}

bool    test_isalpha()
{
    int i;
    int input;
    int expected;
    int actual;
    bool    passed;

    i = 0;
    passed = true;
    printf("###### %s ######\n", __func__);
    while (i < TEST_NUM)
    {
        input = rand() % 128;
        expected = isalpha(input);
        actual = ft_isalpha(input);

        if (expected == actual)   //function test here
            printf("OKAY\n");
        else
        {
            //test failed
            printf("Test failed:\n");
            printf("   Input   > %d\n", input);
            printf("   Expected> %d\n", expected);
            printf("   Actual  > %d\n", actual);
            passed = false;
        }
        i++;
    }
    return passed;
}

bool    test_isdigit()
{
    int i;
    int input;
    int expected;
    int actual;
    bool    passed;

    i = 0;
    passed = true;
    printf("###### %s ######\n", __func__);
    while (i < TEST_NUM)
    {
        input = rand() % 128;
        expected = isdigit(input);
        actual = ft_isdigit(input);

        if (expected == actual)   //function test here
            printf("OKAY\n");
        else
        {
            //test failed
            printf("Test failed:\n");
            printf("   Input   > %d\n", input);
            printf("   Expected> %d\n", expected);
            printf("   Actual  > %d\n", actual);
            passed = false;
        }
        i++;
    }
    return passed;
}

bool    test_isprint()
{
    int i;
    int input;
    int expected;
    int actual;
    bool    passed;

    i = 0;
    passed = true;
    printf("###### %s ######\n", __func__);
    while (i < TEST_NUM)
    {
        input = rand() % 128;
        expected = isprint(input);
        actual = ft_isprint(input);

        if (expected == actual)   //function test here
            printf("OKAY\n");
        else
        {
            //test failed
            printf("Test failed:\n");
            printf("   Input   > %d\n", input);
            printf("   Expected> %d\n", expected);
            printf("   Actual  > %d\n", actual);
            passed = false;
        }
        i++;
    }
    return passed;
}

bool    test_isascii()
{
    int i;
    int input;
    int expected;
    int actual;
    bool    passed;

    i = 0;
    passed = true;
    printf("###### %s ######\n", __func__);
    while (i < TEST_NUM)
    {
        input = rand() % 128;
        expected = isascii(input);
        actual = ft_isascii(input);

        if (expected == actual)   //function test here
            printf("OKAY\n");
        else
        {
            //test failed
            printf("Test failed:\n");
            printf("   Input   > %d\n", input);
            printf("   Expected> %d\n", expected);
            printf("   Actual  > %d\n", actual);
            passed = false;
        }
        i++;
    }
    return passed;
}

int  main(int argc, char *argv[])
{
    (void) argc;
    (void) argv;

    srand(time(0));
    //Weird retrun value for libc isprint???? 16384
    /*
    test_isalnum();
    test_isalpha();
    test_isdigit();
    test_isprint();
    test_isascii();
    */

    return 0;
}
