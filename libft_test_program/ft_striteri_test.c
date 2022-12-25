#include "libft.h"
#include <stdio.h>

void ft_do_toupper(unsigned int a, char *c)
{
    a++;
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}

int    main(void)
{
    void (*f)(unsigned int, char *);
    f = ft_do_toupper;
    char    *test; // (const) char    *test = "heLlo this is me in a new world!";
    test = ft_striteri("heLlo this is me in a new world!");
    printf("Before:%s\n", test);
    ft_striteri(test, f);
    printf("After :%s\n", test);
}
