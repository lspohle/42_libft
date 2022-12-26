#include "test.h"
#include "libft.h"

void	ft_strchr_test(void)
{
    test_headline("ft_strchr.c");

    int     test = 1;

    char    *s = "Hello\0World";
    int     c = '\0';
    int     d = 'A';

    // Test 1
    if (strncmp(strchr(s, c), ft_strchr(s, c), strlen(s)) == 0)
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (strchr(s, d) == ft_strchr(s, d))
    	test_successful(test);
	else
		test_failed(test);
}
