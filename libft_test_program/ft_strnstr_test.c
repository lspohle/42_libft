#include "test.h"
#include "libft.h"

void	ft_strnstr_test(void)
{
    int test = 1;
    
	printf("\n\033[1;33mft_strnstr.c\033[0m\n");

    // Test 1
    if (strnstr("42Wolfsburg", "Wolf", ft_strlen("42Wolfsburg")) == ft_strnstr("42Wolfsburg", "Wolf", ft_strlen("42Wolfsburg"))) // basic input (first occurrence)
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (strnstr("42WobWolfsburg", "Wolf", ft_strlen("42WobWolfsburg")) == ft_strnstr("42WobWolfsburg", "Wolf", ft_strlen("42WobWolfsburg"))) // basic input (second occurrence)
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 3
    if (strnstr("42WobWolfsburg", "Wolf", 0) == ft_strnstr("42WobWolfsburg", "Wolf", 0)) // len == 0
    	test_successful(test);
	else
		test_failed(test);
}

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char* s1 = "42WobWolfsburg";
//     char* s2 = "Wolf";
//     size_t len;

//     len = ft_strlen(s1);
//     printf("Original: %s\n", strnstr(s1, s2, len));
//     printf("Reproduction: %s\n", ft_strnstr(s1, s2, len));
// 	printf("\nOriginal: %s\n", strnstr(s1, s1, len));
//     printf("Reproduction: %s\n", ft_strnstr(s1, s1, len));
// }
