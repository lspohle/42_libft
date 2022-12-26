#include "test.h"
#include "libft.h"

void	ft_isalnum_test(void)
{
    test_headline("ft_isalnum.c");

    int test = 1;

    // Test 1
	if (isalnum('a') == ft_isalnum('a'))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
	if (isalnum('Z') == ft_isalnum('Z'))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 3
	if (isalnum('0') == ft_isalnum('0'))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 4
	if (isalnum('-') == ft_isalnum('-'))
		test_successful(test);
	else
		test_failed(test);
}
