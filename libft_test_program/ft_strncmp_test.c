#include "test.h"
#include "libft.h"

void	ft_strncmp_test(void)
{
    int test = 1;

	printf("\n\033[1;33mft_strncmp.c\033[0m\n");

    // Test 1
    if (ft_strncmp("Hello World", "HelloWorld", 6) == -55) // basic input (s1 < s2)
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (ft_strncmp("HelloWorld", "Hello World", 6) == 55) // basic input (s1 > s2)
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 3
    if (strncmp("abcdef", "abcdefghijklmnop", 6) == ft_strncmp("abcdef", "abcdefghijklmnop", 6)) // str1 included in str2 -> 0
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 4
    if (strncmp("abcdef", "abcdefghijklmnop", 0) == ft_strncmp("abcdef", "abcdefghijklmnop", 0)) // len == 0
    	test_successful(test);
	else
		test_failed(test);
}

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
//     char s1[] = "Hello World";
//     char s2[] = "HelloWorld";
//     size_t n1 = 6;

// 	char s3[] = "abcdef";
// 	char s4[] = "abcdefghijklmnop";
// 	size_t n2 = 6;

//     printf("Original: %d\n", strncmp(s1, s2, n1));
//     printf("Reproduction: %d\n", ft_strncmp(s1, s2, n1));
// 	printf("Original: %d\n", strncmp(s3, s4, n2));
//     printf("Reproduction: %d\n", ft_strncmp(s3, s4, n2));
// }
