#include "test.h"
#include "libft.h"

void	ft_isprint_test(void)
{
    test_headline("ft_isprint.c");

    int test = 1;
    
    // Test 1
	if (isprint('a') == ft_isprint('a'))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
	if (isprint('\e') == ft_isprint('\e'))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 3
	if (isprint('\t') == ft_isprint('\t'))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 4
	if (isprint(128) == ft_isprint(128))
		test_successful(test);
	else
		test_failed(test);
}