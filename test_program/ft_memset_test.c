#include "test.h"
#include "libft.h"

void	ft_memset_test(void)
{
    int test = 1;

    int	b1[] = {1, 2, 3};
	int	b2[] = {1, 2, 3};
	int	c = 0;
	size_t	n = 3 * sizeof(int);

	int	b3[] = {1, 2, 3};
	int	b4[] = {1, 2, 3};
    int d = 1;
    size_t m = 2 * sizeof (int);

	printf("\n\033[1;33mft_memset.c\033[0m\n");

    // Test 1
	if (memcmp(memset(b1, c, n), ft_memset(b2, c, n), n) == 0)
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
	if (memcmp(memset(b3, d, m), ft_memset(b4, d, m), m) == 0)
		test_successful(test);
	else
		test_failed(test);
}

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	int	b[] = {1, 2, 3};
// 	int	c = 0; // int c = 1;
// 	size_t	len = 3 * sizeof(int);

// 	//memset(b, c, len);
// 	//printf("Original: %d, %d, %d\n", b[0], b[1], b[2]);
// 	ft_memset(b, c, len);
// 	printf("Reproduction: %d, %d, %d\n", b[0], b[1], b[2]);
// }
