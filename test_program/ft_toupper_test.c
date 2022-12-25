#include "test.h"
#include "libft.h"

void	ft_toupper_test(void)
{
    int test = 1;

	printf("\n\033[1;33mft_toupper.c\033[0m\n");

    // Test 1
    if (toupper('A') == toupper('A'))
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (toupper('a') == toupper('a'))
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 3
    if (toupper('Z') == toupper('Z'))
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 4
    if (toupper('z') == toupper('z'))
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 5
    if (toupper('1') == toupper('1'))
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 6
    if (toupper(128) == toupper(128))
    	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 7
    if (toupper(0) == toupper(0))
    	test_successful(test);
	else
		test_failed(test);
}


// #include "libft.h"
// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     int c = 'd';

//     printf("Original: %c\n", toupper(c));
//     printf("Reproduction: %c\n", ft_toupper(c));
// }
