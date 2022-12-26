#include "test.h"
#include "libft.h"

void	ft_strtrim_test(void)
{
    test_headline("ft_strtrim.c");

    int     test = 1;

	char    *copy;

    // Test 1
    copy = ft_strtrim("Hello   World", " "); // basic input
    if (strncmp(copy, "Hello   World", strlen(copy)) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(copy);
    test++;

    // Test 2
    copy = ft_strtrim("NOPNOPEhElloPEONPE", "NOPE"); // basic input
    if (strncmp(copy, "hEllo", strlen(copy)) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(copy);
    test++;

    // Test 3
    copy = ft_strtrim("-------", "---"); // string only with characters from set
    if (strncmp(copy, "", strlen(copy)) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(copy);
    test++;

    // Test 4
    copy = ft_strtrim("42 Wolfsburg", "ABC"); // string without characters from set
    if (strncmp(copy, "42 Wolfsburg", strlen(copy)) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(copy);
    test++;

    // Test 5
    copy = ft_strtrim("", "123"); // empty string
    if (strncmp(copy, NULL, strlen(copy)) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(copy);
    test++;

    // Test 5
    copy = ft_strtrim("42 Wolfsburg", NULL); // set == NULL
    if (strncmp(copy, "42 Wolfsburg", strlen(copy)) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(copy);
}
