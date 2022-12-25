#include "test.h"
#include "libft.h"

void	ft_isdigit_test(void)
{
    int test = 1;
    
	printf("\n\033[1;33mft_isdigit.c\033[0m\n");

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

// #include "libft.h"
// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int	c;

// 	c = '0';
// 	printf("Original: %d\n", isdigit(c));
// 	printf("Reproduction: %d\n", ft_isdigit(c));
// }
