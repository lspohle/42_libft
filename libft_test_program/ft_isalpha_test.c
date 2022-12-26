#include "test.h"
#include "libft.h"

void	ft_isalpha_test(void)
{
    test_headline("ft_isalpha.c");

    int test = 1;

    // Test 1
	if (isalpha('a') == ft_isalpha('a'))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
	if (isalpha('Z') == ft_isalpha('Z'))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 3
	if (isalpha('0') == ft_isalpha('0'))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 4
	if (isalpha('-') == ft_isalpha('-'))
		test_successful(test);
	else
		test_failed(test);
}
