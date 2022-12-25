#include "test.h"
#include "libft.h"

void	ft_tolower_test(void)
{
    int test = 1;

	printf("\n\033[1;33mft_tolower.c\033[0m\n");

    // Test 1
    if (tolower('A') == tolower('A'))
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (tolower('a') == tolower('a'))
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 3
    if (tolower('Z') == tolower('Z'))
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 4
    if (tolower('z') == tolower('z'))
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 5
    if (tolower('1') == tolower('1'))
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 6
    if (tolower(128) == tolower(128))
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 7
    if (tolower(0) == tolower(0))
    	test_successful(test);
	else
		test_failed(test);
}

// #include "libft.h"
// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     int c = 'D';

//     printf("Original: %c\n", tolower(c));
//     printf("Reproduction: %c\n", ft_tolower(c));
// }
