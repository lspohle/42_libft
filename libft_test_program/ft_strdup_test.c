#include "test.h"
#include "libft.h"

void	ft_strdup_test(void)
{
    test_headline("ft_strdup.c");

    int     test = 1;

	char    *copy;

    // Test 1
    copy = ft_strdup("Copy this"); // basic input -> "Copy this"
    if (strncmp(copy, "Copy this", strlen("Copy this")) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(copy);
    test++;

    // Test 2
    copy = ft_strdup(""); // empty string -> ""
    if (strncmp(copy, "", strlen("")) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(copy);
    test++;

    // Test 3
    copy = ft_strdup(""); // NULL parameter -> segmentation fault
    if (strncmp(copy, NULL, strlen(copy)) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(copy);
}
