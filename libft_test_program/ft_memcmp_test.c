#include "test.h"
#include "libft.h"

void	ft_memcmp_test(void)
{
    test_headline("ft_memcmp.c");

    int     test = 1;
    
    int     s1[] = {1, 2, 0};
    int     s2[] = {1, 2, 4};
    size_t  n = 3 * sizeof (int);
	char    *str1 = "";
	char    *str2 = "test";
	size_t  m = 4 * sizeof (char);

    // Test 1
	if (memcmp(s1, s2, n) == ft_memcmp(s1, s2, n))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
	if (memcmp(str1, str2, m) == ft_memcmp(str1, str2, m))
		test_successful(test);
	else
		test_failed(test);
}
