#include "test.h"
#include "libft.h"

void	ft_memcpy_test(void)
{
    int test = 1;
    
    int src[] = {1, 2, 3};
    int dst1[100];
	int dst2[100];
    size_t n = 3 * sizeof (int);

	printf("\n\033[1;33mft_memcpy.c\033[0m\n");

    // Test 1
	if (memcmp(memcpy(dst1, src, n), ft_memcpy(dst2, src, n), n) == 0)
		test_successful(test);
	else
		test_failed(test);
}

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// void	ft_memcpy_test(void)
// {
//     int src[] = {1, 2, 3};
//     int dst1[100];
// 	int dst2[100];
//     size_t n = 3 * sizeof (int);

//     memcpy(dst1, src, n);
//     printf("Original: %d, %d, %d\n", dst1[0], dst1[1], dst1[2]);
//     ft_memcpy(dst2, src, n);
//     printf("Reproduction: %d, %d, %d\n", dst2[0], dst2[1], dst2[2]);
// }
