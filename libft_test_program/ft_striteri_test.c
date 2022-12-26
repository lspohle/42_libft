#include "test.h"
#include "libft.h"

static void ft_to_uppercase(unsigned int i, char *c)
{
    i++;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

void	ft_striteri_test(void)
{
    test_headline("ft_striteri.c");

    int     test = 1;

	char    *str;

    // Test 1
    str = strdup("Hello World"); // in order to be able to iterate on a string, the string needs to be allocated on the heap (not const on the stack)
    ft_striteri(str, ft_to_uppercase);
    if (strncmp(str, "HELLO WORLD", strlen("HELLO WORLD")) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(str);
    test++;

    // Test 2
    str = strdup("\t\n42 Wolfsburg\r");
    ft_striteri(str, ft_to_uppercase);
    if (strncmp(str, "\t\n42 WOLFSBURG\r", strlen("\t\n42 WOLFSBURG\r")) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(str);
    test++;

    // Test 3
    str = strdup("\t\n\0\r");
    ft_striteri(str, ft_to_uppercase);
    if (strncmp(str, "\t\n", strlen("\t\n")) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(str);
}
