#include "test.h"
#include "libft.h"

void	ft_bzero_test(void)
{
    int test = 1;

	char s1[] = "Hello World";
	char s2[] = "Hello World";
	size_t	n = 5 * sizeof(char);

	printf("\n\033[1;33mft_bzero.c\033[0m\n");

    // Test 1
    bzero(s1, n);
	ft_bzero(s2, n);
	if (memcmp(s1, s2, n) == 0)
		test_successful(test);
	else
		test_failed(test);
}

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char s1[] = "Hello World";
// 	char s2[] = "Hello World";
// 	size_t	n = 5 * sizeof(char);

// 	bzero(s1, n);
// 	ft_bzero(s2, n);
// }
