#include "test.h"
#include "libft.h"

void	ft_strlen_test(void)
{
    test_headline("ft_strlen.c");

    int test = 1;

    // Test 1
    if (strlen("42 Wolfsburg") == ft_strlen("42 Wolfsburg")) // basic input
   	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (strlen("") == ft_strlen("")) // empty str
    	test_successful(test);
	else
		test_failed(test);
}
