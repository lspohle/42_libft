#include "test.h"
#include "libft.h"

void	ft_isascii_test(void)
{
    int test = 1;
    
	printf("\n\033[1;33mft_isascii.c\033[0m\n");

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

// #include "libft.h"
// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int	c;

// 	c = 128;
// 	printf("Original: %d\n", isascii(c));
// 	printf("Reproduction: %d\n", ft_isascii(c));
// }
