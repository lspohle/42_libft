#include "test.h"
#include "libft.h"

void	ft_isascii_test(void)
{
    test_headline("ft_isascii.c");

    int test = 1;
    
    // Test 1
	if (isascii('a') == ft_isascii('a'))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
	if (isascii('5') == ft_isascii('5'))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 3
	if (isascii('\0') == ft_isascii('\0'))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 4
	if (isascii(128) == ft_isascii(128))
		test_successful(test);
	else
		test_failed(test);
}
