#include "test.h"
#include "libft.h"

void	ft_strlcpy_test(void)
{
    int test = 1;

    char src[] = "42 Wolfsburg";
    char dst1[30];
    char dst2[30];
    size_t dstsize12 = 5;
    char dst3[5];
    char dst4[5];
    size_t dstsize34 = 0;

	printf("\n\033[1;33mft_strlcpy.c\033[0m\n");

    // Test 1
    if (strlcpy(dst1, src, dstsize12) == ft_strlcpy(dst2, src, dstsize12)) // size < strlen(src) --> "42 Wo"
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (strlcpy(dst3, src, dstsize34) == ft_strlcpy(dst4, src, dstsize34)) // dstsize = zero --> no copy
    	test_successful(test);
	else
		test_failed(test);
    test++;
}

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
//     char src[] = "42 Wolfsburg";
//     char dst1[30];
//     char dst2[30];
//     size_t dstsize12 = 5;
//     char dst3[10];
//     char dst4[10];
//     size_t dstsize34 = 20;
//     char dst5[5];
//     char dst6[5];
//     size_t dstsize56 = 0;

//     printf("\nOriginal: %lu\nCopied %s into %s\n", strlcpy(dst5, src, dstsize56), src, dst5); // dstsize = zero --> no copy
// 	printf("Reproduction: %lu\nCopied %s into %s\n", ft_strlcpy(dst6, src, dstsize56), src, dst6);
//     printf("Original: %lu\nCopied %s into %s\n", strlcpy(dst1, src, dstsize12), src, dst1); // size < strlen(src) --> copies till dstsize - 1
//     printf("Reproduction: %lu\nCopied %s into %s\n", ft_strlcpy(dst2, src, dstsize12), src, dst2);
//     printf("Original: %lu\nCopied %s into %s\n", strlcpy(dst3, src, dstsize34), src, dst3); // size > strlen(src) --> zsh
//     printf("Reproduction: %lu\nCopied %s into %s\n", ft_strlcpy(dst4, src, dstsize34), src, dst4);
//     printf("Original: %lu\n", strlcpy(NULL, NULL, dstsize12)); // null parameter --> segmentation fault
//     printf("Reproduction: %lu\n", ft_strlcpy(NULL, NULL, dstsize12));
// }
