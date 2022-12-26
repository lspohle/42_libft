#include "test.h"
#include "libft.h"

void	ft_strlcat_test(void)
{
    test_headline("ft_strlcat.c");

    int     test = 1;

    char    src[] = "Wolfsburg";
    char    dst1[12] = "42";
    char    dst2[12] = "42";
    size_t  dstsize12 = 12;
    char    dst3[7] = "42";
    char    dst4[7] = "42";
    size_t  dstsize34 = 7;
    char    dst5[] = "42";
    char    dst6[] = "42";
    size_t  dstsize56 = 1;
    
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
