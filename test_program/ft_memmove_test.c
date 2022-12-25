#include "test.h"
#include "libft.h"

void	ft_memmove_test(void)
{
    int test = 1;
    
    char src1[] = "Hello World";
	char src2[] = "Hello World";
	size_t n = 5 * sizeof (char);

    int src3[] = {1, 2, 3};
	int src4[] = {1, 2, 3};
    size_t m = 2 * sizeof (int);

	printf("\n\033[1;33mft_memmove.c\033[0m\n");

    // Test 1
	if (memcmp(memmove(&src1[5], &src1[6], n), ft_memmove(&src2[5], &src2[6], n), n) == 0)
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
	if (memcmp(memmove(&src3[1], src3, m), ft_memmove(&src4[1], src4, m), n) == 0)
		test_successful(test);
	else
		test_failed(test);
}

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char src_oc[] = "Hello World";
// 	size_t len_oc = 5 * sizeof (char);
// 	char src_rc[] = "Hello World";
// 	size_t len_rc = 5 * sizeof (char);

//     int src_o[] = {1, 2, 3};
//     size_t len_o = 2 * sizeof (int);
// 	int src_r[] = {1, 2, 3};
//     size_t len_r = 2 * sizeof (int);

// 	memmove(&src_oc[5], &src_oc[6], len_oc);
// 	printf("Original: %s\n", src_oc);
// 	ft_memmove(&src_rc[5], &src_rc[6], len_rc);
// 	printf("Reproduction: %s\n", src_rc);

// 	memmove(&src_o[1], src_o, len_o);
// 	printf("Original: %d, %d, %d\n", src_o[0], src_o[1], src_o[2]);
//     ft_memmove(&src_r[1], src_r, len_r);
//     printf("Reproduction: %d, %d, %d\n", src_r[0], src_r[1], src_r[2]);
// }
