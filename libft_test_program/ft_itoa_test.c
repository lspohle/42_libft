#include "test.h"
#include "libft.h"

void	ft_itoa_test(void)
{
    int test = 1;

    char *str;

	printf("\n\033[1;33mft_isitoa.c\033[0m\n");

    // Test 1
	str = ft_itoa(0); // basic input
	if (strncmp(str, "0", sizeof(*str)) == 0)
		test_successful(test);
	else
		test_failed(test);
	free(str);
    test++;

    // Test 2
	str = ft_itoa(-5430); // negative input
	if (strncmp(str, "-5430", sizeof(*str)) == 0)
		test_successful(test);
	else
		test_failed(test);
	free(str);
    test++;

    // Test 3
	str = ft_itoa(-2147483648); // min int
	if (strncmp(str, "-2147483648", sizeof(*str)) == 0)
		test_successful(test);
	else
		test_failed(test);
	free(str);
    test++;

    // Test 4
	str = ft_itoa(2147483647); // max int
	if (strncmp(str, "2147483647", sizeof(*str)) == 0)
		test_successful(test);
	else
		test_failed(test);
	free(str);
}


// #include "libft.h"
// #include <stdio.h>

// int main(void)
// {
// 	int		n1 = 0; // basic input -> "0"
// 	char	*str1;
// 	int		n2 = -5430; // negativ int as input -> "-5430"
// 	char	*str2;
// 	int		n3 = -2147483648; // min int as input -> "-2147483648"
// 	char	*str3;
// 	int		n4 = 2147483647; // max int as input -> "2147483647"
// 	char	*str4;

// 	str1 = ft_itoa(n1);
// 	printf("Integer1: %d\nString1: %s\n", n1, str1);
// 	free (str1);
// 	str2 = ft_itoa(n2);
// 	printf("Integer2: %d\nString2: %s\n", n2, str2);
// 	free (str2);
// 	str3 = ft_itoa(n3);
// 	printf("Integer3: %d\nString3: %s\n", n3, str3);
// 	free (str3);
// 	str4 = ft_itoa(n4);
// 	printf("Integer4: %d\nString4: %s\n", n4, str4);
// 	free (str4);
// }
