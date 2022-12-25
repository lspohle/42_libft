#include "test.h"
#include "libft.h"

void	ft_isprint_test(void)
{
    int test = 1;
    
	printf("\n\033[1;33mft_isprint.c\033[0m\n");

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

// #include "libft.h"
// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int	c;

// 	c = '\t';
// 	printf("Original: %d\n", isprint(c));
// 	printf("Reproduction: %d\n", ft_isprint(c));
// }
