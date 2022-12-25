#include "test.h"
#include "libft.h"

void	ft_strtrim_test(void)
{
    int test = 1;

	char *copy;

	printf("\n\033[1;33mft_strtrim.c\033[0m\n");

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

// #include "libft.h"
// #include <stdio.h>

// int main(void)
// {
//     const char	*s1 = "Hello   World";
//     const char	*set1 = " ";
//     char		*output1;
// 	const char	*s2 = "NOPNOPEhElloPEONPE";
//     const char	*set2 = "NOPE";
//     char		*output2;
// 	const char	*s3 = "-------";
//     const char	*set3 = "---";
//     char		*output3;
// 	const char	*s4 = "";
//     const char	*set4 = "123";
//     char		*output4;
// 	const char	*s5 = "42 Wolfsburg";
//     const char	*set5 = "ABC";
//     char		*output5;
// 	char		*output6;

// 	output1 = ft_strtrim(s1, set1);
//     printf("\nBefore: %s\nCharacters to remove: %s\nAfter: %s\n", s1, set1, output1); // basic input -> Hello   World
//     free(output1);
// 	output2 = ft_strtrim(s2, set2);
//     printf("\nBefore: %s\nCharacters to remove: %s\nAfter: %s\n", s2, set2, output2); // basic input -> "hEllo"
//     free(output2);
// 	output3 = ft_strtrim(s3, set3);
//     printf("\nBefore: %s\nCharacters to remove: %s\nAfter: %s\n", s3, set3, output3); // only characters from set as input -> ""
//     free(output3);
// 	output4 = ft_strtrim(s4, set4);
//     printf("\nBefore: %s\nCharacters to remove: %s\nAfter: %s\n", s4, set4, output4); // empty string as input -> (null)
//     free(output4);
// 	output5 = ft_strtrim(s5, set5);
//     printf("\nBefore: %s\nCharacters to remove: %s\nAfter: %s\n", s5, set5, output5); // string without characters from set as input -> "42 Wolfsburg"
//     free(output5);
// 	output6 = ft_strtrim(s5, NULL);
//     printf("\nBefore: %s\nCharacters to remove: %s\nAfter: %s\n", s5, NULL, output6); // nothing as set -> "42 Wolfsburg"
//     free(output6);
// }
