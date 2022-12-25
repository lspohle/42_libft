#include "test.h"
#include "libft.h"

void	ft_strrchr_test(void)
{
    int test = 1;
    
    char* s = "Hello\0World";
    int c = '\0';
    int d = 'A';

	printf("\n\033[1;33mft_strrchr.c\033[0m\n");

    // Test 1
    if (strncmp(strrchr(s, c), ft_strrchr(s, c), strlen(s)) == 0)
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (strrchr(s, d) == ft_strrchr(s, d))
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

//     c = 'l';
//     printf("Original: %p\n", strrchr(s, c));
//     printf("Original: %s\n", strrchr(s, c));
//     printf("Reproduction: %p\n", ft_strrchr(s, c));
//     printf("Reproduction: %s\n", ft_strrchr(s, c));
// }
