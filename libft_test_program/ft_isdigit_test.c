#include "test.h"
#include "libft.h"

void	ft_isdigit_test(void)
{
    test_headline("ft_isdigit.c");

    int test = 1;

    // Test 1
	if (isdigit('a') == ft_isdigit('a'))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
	if (isdigit('Z') == ft_isdigit('Z'))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 3
	if (isdigit('0') == ft_isdigit('0'))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 4
	if (isdigit('-') == ft_isdigit('-'))
		test_successful(test);
	else
		test_failed(test);
}
