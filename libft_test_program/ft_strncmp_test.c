#include "test.h"
#include "libft.h"

void	ft_strncmp_test(void)
{
    test_headline("ft_strncmp.c");

    int test = 1;

    // Test 1
    if (ft_strncmp("Hello World", "HelloWorld", 6) == -55) // basic input (s1 < s2)
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (ft_strncmp("HelloWorld", "Hello World", 6) == 55) // basic input (s1 > s2)
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 3
    if (strncmp("abcdef", "abcdefghijklmnop", 6) == ft_strncmp("abcdef", "abcdefghijklmnop", 6)) // str1 included in str2 -> 0
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 4
    if (strncmp("abcdef", "abcdefghijklmnop", 0) == ft_strncmp("abcdef", "abcdefghijklmnop", 0)) // len == 0
    	test_successful(test);
	else
		test_failed(test);
}
