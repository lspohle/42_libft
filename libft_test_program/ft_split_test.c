#include "test.h"
#include "libft.h"

void	ft_split_test(void)
{
    test_headline("ft_split.c");

    int     test = 1;

    char    *check1[3] = {"Hello", "World", NULL};
    char    *check2[2] = {"", NULL};
    char    *check3[2] = {"###Hello###World###", NULL};
    char    **result;
    int     difference_string_by_string;

    // Test 1
    result = ft_split("###Hello###World###", '#'); // character in the beginning and in the end
    for (int i = 0; check1[i] != NULL; i++)
		difference_string_by_string = strncmp(check1[i], result[i], strlen(check1[i]));
    if (difference_string_by_string == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(result);
    test++;

    // Test 2
    result = ft_split("Hello###World###", '#'); // character only in the end
    for (int i = 0; check1[i] != NULL; i++)
		difference_string_by_string = strncmp(check1[i], result[i], strlen(check1[i]));
    if (difference_string_by_string == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(result);
    test++;

    // Test 3
    result = ft_split("###Hello###World", '#'); // character only in the beginning
    for (int i = 0; check1[i] != NULL; i++)
		difference_string_by_string = strncmp(check1[i], result[i], strlen(check1[i]));
    if (difference_string_by_string == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(result);
    test++;

    // Test 4
    result = ft_split("", '#'); // empty string
    for (int i = 0; check2[i] != NULL; i++)
		difference_string_by_string = strncmp(check2[i], result[i], strlen(check2[i]));
    if (difference_string_by_string == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(result);
    test++;

    // Test 5
    result = ft_split("###Hello###World###", 0); // empty character
    for (int i = 0; check3[i] != NULL; i++)
		difference_string_by_string = strncmp(check3[i], result[i], strlen(check3[i]));
    if (difference_string_by_string == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(result);
}
