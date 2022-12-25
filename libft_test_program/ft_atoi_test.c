#include "test.h"
#include "libft.h"


void	ft_atoi_test(void)
{
    int test =  1;

    char *str1 = "\t\v\f\r\n- 06050";
	char *str2 = "\e06050";

	printf("\n\033[1;33mft_atoi.c\033[0m\n");

    // Test 1
	if (atoi(str1) == ft_atoi(str1))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
	if (atoi(str2) == ft_atoi(str2))
		test_successful(test);
	else
		test_failed(test);
}

// #include "libft.h"
// #include <stdio.h>

// int main(void)
// {
//     char *str1;
// 	char *str2;

//     str1 = "\t\v\f\r\n- 06050";
// 	str2 = "\e06050";
//     printf("Str1 value = %s\nInt1 value = %d\n", str1, atoi(str1));
//     printf("Str1 value = %s\nInt1 value = %d\n", str1, ft_atoi(str1));
// 	printf("Str2 value = %s\nInt2 value = %d\n", str1, atoi(str1));
//     printf("Str2 value = %s\nInt2 value = %d\n", str1, ft_atoi(str1));
// }
