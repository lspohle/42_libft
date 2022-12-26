#include "test.h"
#include "libft.h"

void	ft_bzero_test(void)
{
    test_headline("ft_bzero.c");

    int     test = 1;

	char    s1[] = "Hello World";
	char    s2[] = "Hello World";
	size_t	n = 5 * sizeof(char);

    // Test 1
    bzero(s1, n);
	ft_bzero(s2, n);
	if (memcmp(s1, s2, n) == 0)
		test_successful(test);
	else
		test_failed(test);
}
