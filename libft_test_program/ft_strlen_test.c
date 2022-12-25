#include "test.h"
#include "libft.h"

void	ft_strlen_test(void)
{
    int test = 1;
    
	printf("\n\033[1;33mft_strlen.c\033[0m\n");

    // Test 1
    if (strlen("42 Wolfsburg") == ft_strlen("42 Wolfsburg")) // basic input
   	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (strlen("") == ft_strlen("")) // empty str
    	test_successful(test);
	else
		test_failed(test);
}

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str[] = "Hello World";
//     printf("Original: %lu\n", strlen(str));
//     printf("Reproduction: %lu\n", ft_strlen(str));
// }
