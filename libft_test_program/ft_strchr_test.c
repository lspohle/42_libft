#include "test.h"
#include "libft.h"

void	ft_strchr_test(void)
{
    int test = 1;

    char* s = "Hello\0World";
    int c = '\0';
    int d = 'A';

	printf("\n\033[1;33mft_strchr.c\033[0m\n");

    // Test 1
    if (strncmp(strchr(s, c), ft_strchr(s, c), strlen(s)) == 0)
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (strchr(s, d) == ft_strchr(s, d))
    	test_successful(test);
	else
		test_failed(test);
}


// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char* s = "Hello\0World";
//     int c;

//     c = '\0';
//     printf("Original: %p\n", strchr(s, c));
//     printf("Original: %s\n", strchr(s, c));
//     printf("Reproduction: %p\n", ft_strchr(s, c));
//     printf("Reproduction: %s\n", ft_strchr(s, c));
// }
