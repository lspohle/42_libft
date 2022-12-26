#include "test.h"
#include "libft.h"

void	ft_strnstr_test(void)
{
    test_headline("ft_strnstr.c");

    int test = 1;
    
    // Test 1
    if (strnstr("42Wolfsburg", "Wolf", ft_strlen("42Wolfsburg")) == ft_strnstr("42Wolfsburg", "Wolf", ft_strlen("42Wolfsburg"))) // basic input (first occurrence)
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (strnstr("42WobWolfsburg", "Wolf", ft_strlen("42WobWolfsburg")) == ft_strnstr("42WobWolfsburg", "Wolf", ft_strlen("42WobWolfsburg"))) // basic input (second occurrence)
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 3
    if (strnstr("42WobWolfsburg", "Wolf", 0) == ft_strnstr("42WobWolfsburg", "Wolf", 0)) // len == 0
    	test_successful(test);
	else
		test_failed(test);
}
