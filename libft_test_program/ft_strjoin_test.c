#include "test.h"
#include "libft.h"

void	ft_strjoin_test(void)
{
    test_headline("ft_strjoin.c");

    int     test = 1;
    
	char    *output;

    // Test 1
    output = ft_strjoin("Hello ", "World"); // basic input
    if (strncmp(output, "Hello World", strlen("Hello World")) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(output);
    test++;

    // Test 2
    output = ft_strjoin("42 Wolfsburg", &"42 Wolfsburg"[5]); // overlapping input
    if (strncmp(output, "42 Wolfsburglfsburg", strlen("42 Wolfsburglfsburg")) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(output);
    test++;

    // Test 3
    output = ft_strjoin(NULL, NULL); // st1 == NULL and st2 == NULL -> segmentation fault
    if (output == NULL)
    	test_successful(test);
	else
		test_failed(test);
    free(output);
}
