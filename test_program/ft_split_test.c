#include "test.h"
#include "libft.h"

void	ft_split_test(void)
{
    int test = 1;

    char *check1[3] = {"Hello", "World", NULL};
    char *check2[2] = {"", NULL};
    char *check3[2] = {"###Hello###World###", NULL};
    char **result;
    int difference;

	printf("\n\033[1;33mft_split.c\033[0m\n");

    // Test 1
    result = ft_split("###Hello###World###", '#'); // character in the beginning and in the end
    for (int i = 0; check1[i] != NULL; i++)
		difference = strncmp(check1[i], result[i], strlen(check1[i]));
    if (difference == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(result);
    test++;

    // Test 2
    result = ft_split("Hello###World###", '#'); // character only in the end
    for (int i = 0; check1[i] != NULL; i++)
		difference = strncmp(check1[i], result[i], strlen(check1[i]));
    if (difference == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(result);
    test++;

    // Test 3
    result = ft_split("###Hello###World", '#'); // character only in the beginning
    for (int i = 0; check1[i] != NULL; i++)
		difference = strncmp(check1[i], result[i], strlen(check1[i]));
    if (difference == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(result);
    test++;

    // Test 4
    result = ft_split("", '#'); // empty string
    for (int i = 0; check2[i] != NULL; i++)
		difference = strncmp(check2[i], result[i], strlen(check2[i]));
    if (difference == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(result);
    test++;

    // Test 5
    result = ft_split("###Hello###World###", 0); // empty character
    for (int i = 0; check3[i] != NULL; i++)
		difference = strncmp(check3[i], result[i], strlen(check3[i]));
    if (difference == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(result);
}

// #include "libft.h"
// #include <stdio.h>

// int main(void)
// {
// 	const char *s1 = "###Hello###World###"; // character in the beginning and in the end
// 	const char *s2 = "Hello###World###"; // character only in the end
// 	const char *s3 = "###Hello###World"; // character only in the beginning
// 	const char *s4 = ""; // empty string
// 	char c1 = '#'; // basic character
// 	char c2 = 0; // empty character
// 	int i;
// 	char **result1;
// 	char **result2;
// 	char **result3;
// 	char **result4;
// 	char **result5;

// 	result1 = ft_split(s1, c1); // character in the beginning and in the end
// 	i = -1;
// 	while (result1[++i] != NULL)
// 		printf("Strings:%s\n", result1[i]);
// 	free(result1);
// 	printf("\n");

// 	result2 = ft_split(s2, c1); // character only in the end
// 	i = -1;
// 	while (result2[++i] != NULL)
// 		printf("Strings:%s\n", result2[i]);
// 	free(result2);
// 	printf("\n");

// 	result3 = ft_split(s3, c1); // character only in the beginning
// 	i = -1;
// 	while (result3[++i] != NULL)
// 		printf("Strings:%s\n", result3[i]);
// 	free(result3);
// 	printf("\n");

// 	result4 = ft_split(s4, c1); // empty string
// 	i = -1;
// 	while (result4[++i] != NULL)
// 		printf("Strings:%s\n", result4[i]);
// 	free(result4);
// 	printf("\n");

// 	result5 = ft_split(s1, c2); // empty character
// 	i = -1;
// 	while (result5[++i] != NULL)
// 		printf("Strings:%s\n", result5[i]);
// 	free(result5);
// 	printf("\n");
// }
