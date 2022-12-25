#include "test.h"
#include "libft.h"

void	ft_strlcat_test(void)
{
    int test = 1;

    char src[] = "Wolfsburg";
    char dst1[12] = "42";
    char dst2[12] = "42";
    size_t dstsize12 = 12;
    char dst3[7] = "42";
    char dst4[7] = "42";
    size_t dstsize34 = 7;
    char dst5[] = "42";
    char dst6[] = "42";
    size_t dstsize56 = 1;

	printf("\n\033[1;33mft_strlcat.c\033[0m\n");

    // Test 1
    if (strlcat(dst1, src, dstsize12) == ft_strlcat(dst2, src, dstsize12)) // dstsize >= ft_strlen(dst) + ft_strlen(src)
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (strlcat(dst3, src, dstsize34) == ft_strlcat(dst4, src, dstsize34)) // dstsize < ft_strlen(dst) + ft_strlen(src)
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 3
    if (strlcat(dst5, src, dstsize56) == ft_strlcat(dst6, src, dstsize56)) // dstsize < ft_strlen(dst)
    	test_successful(test);
	else
		test_failed(test);
}

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
//     char src[] = "Wolfsburg";
//     char dst1[12] = "42";
//     char dst2[12] = "42";
//     size_t dstsize12 = 12;

//     char dst3[7] = "42";
//     char dst4[7] = "42";
//     size_t dstsize34 = 7;

//     char dst5[] = "42";
//     char dst6[] = "42";
//     size_t dstsize56 = 1;

// 	printf("\nOriginal12: %lu\nCopied %s into %s\n", strlcat(dst1, src, dstsize12), src, dst1); // dstsize >= ft_strlen(dst) + ft_strlen(src)
//     printf("Reproduction12: %lu\nCopied %s into %s\n\n", ft_strlcat(dst2, src, dstsize12), src, dst2);
// 	printf("Original34: %lu\nCopied %s into %s\n", strlcat(dst3, src, dstsize34), src, dst3); // dstsize < ft_strlen(dst) + ft_strlen(src)
//     printf("Reproduction34: %lu\nCopied %s into %s\n\n", ft_strlcat(dst4, src, dstsize34), src, dst4);
// 	printf("Original56: %lu\nCopied %s into %s\n", strlcat(dst5, src, dstsize56), src, dst5); // dstsize < ft_strlen(dst)
// 	printf("Reproduction56: %lu\nCopied %s into %s\n\n", ft_strlcat(dst6, src, dstsize56), src, dst6);
// 	printf("Original78: %lu\n", strlcat(dst1, NULL, dstsize12)); // null parameter (at least one) --> segmentation fault
//     printf("Reproductio78n: %lu\n", ft_strlcat(dst2, NULL, dstsize12));
// }
