#include "test.h"
#include "libft.h"

void	ft_isalpha_test(void)
{
    int test = 1;

	printf("\n\033[1;33mft_isalpha.c\033[0m\n");

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

// #include "libft.h"
// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int	c;

// 	c = 'a';
// 	printf("Original: %d\n", isalpha(c));
// 	printf("Reproduction: %d\n", ft_isalpha(c));
// }
