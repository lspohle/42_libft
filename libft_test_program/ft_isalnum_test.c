#include "test.h"
#include "libft.h"

void	ft_isalnum_test(void)
{
    int test = 1;

	printf("\n\033[1;33mft_isalnum.c\033[0m\n");

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

// #include "libft.h"
// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int	c;

// 	c = 'd';
// 	printf("Original: %d\n", isalnum(c));
// 	printf("Reproduction: %d\n", ft_isalnum(c));
// }
