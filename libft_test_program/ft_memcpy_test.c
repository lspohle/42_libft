#include "test.h"
#include "libft.h"

void	ft_memcpy_test(void)
{
    test_headline("ft_memcpy.c");

    int     test = 1;
    
    int     src[] = {1, 2, 3};
    int     dst1[100];
	int     dst2[100];
    size_t  n = 3 * sizeof (int);

    // Test 1
	if (memcmp(memcpy(dst1, src, n), ft_memcpy(dst2, src, n), n) == 0)
		test_successful(test);
	else
		test_failed(test);
}
