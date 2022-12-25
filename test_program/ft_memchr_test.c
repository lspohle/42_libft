#include "test.h"
#include "libft.h"

void	ft_memchr_test(void)
{
    int test = 1;

    int s[] = {1, 2, 3, 4, 3};
    int c = 3;
    size_t n = 5 * sizeof(int);

	char *str = "bonjourno";
	int d = 'n';
	size_t m = 2;

	printf("\n\033[1;33mft_memchr.c\033[0m\n");

    // Test 1
	if (memchr(s, c, n) == ft_memchr(s, c, n))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
	if (memchr(str, d, m) == ft_memchr(str, d, m))
		test_successful(test);
	else
		test_failed(test);
}

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     int s[] = {1, 2, 3, 4, 3};
//     int c = 3;
//     size_t n = 5 * sizeof(int);

//     printf("Original: %p\n", memchr(s, c, n));
//     printf("Reproduction: %p\n", ft_memchr(s, c, n));

// 	printf("Original: %p\n", memchr("bonjourno", 'n', 2));
//     printf("Reproduction: %p\n", ft_memchr("bonjourno", 'n', 2));
// }
