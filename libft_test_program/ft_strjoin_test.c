#include "test.h"
#include "libft.h"

void	ft_strjoin_test(void)
{
    int test = 1;
    
	char *output;

	printf("\n\033[1;33mft_strjoin.c\033[0m\n");

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

// #include "libft.h"
// #include <stdio.h>

// int main(void)
// {
//     const char s1[] = "Hello ";
//     const char s2[] = "World";
// 	char *output12;
// 	const char *s3 = "42 Wolfsburg";
//     const char *s4 = &s3[5];
//     char *output34;
// 	const char *s5 = "42 Wolfsburg";
//     const char *s6 = NULL;
//     char *output56;

// 	output12 = ft_strjoin(s1, s2);
//     printf("String1: %s\nString2: %s\nOutput12: %s\n", s1, s2, output12); // basic input --> Hello World
//     free (output12);
// 	output34 = ft_strjoin(s3, s4);
//     printf("String3: %s\nString4: %s\nOutput34: %s\n", s3, s4, output34); // overlapping input --> 42 Wolfsburglfsburg
//     free (output34);
// 	output56 = ft_strjoin(s5, s6);
//     printf("String5: %s\nString6: %s\nOutput56: %s\n", s5, s6, output56); // NULL parameter --> segmentation fault
//     free (output56);
// }
