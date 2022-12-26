#include "test.h"
#include "libft.h"

void	ft_memchr_test(void)
{
    test_headline("ft_memchr.c");

    int     test = 1;

    int     s[] = {1, 2, 3, 4, 3};
    int     c = 3;
    size_t  n = 5 * sizeof(int);
	char    *str = "bonjourno";
	int     d = 'n';
	size_t  m = 2;

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
