#include "test.h"
#include "libft.h"

void	ft_strdup_test(void)
{
    int test = 1;

	char        *copy;

	printf("\n\033[1;33mft_strdup.c\033[0m\n");

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


// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     const char  *src12 = "Copy this"; // basic input -> "Copy this"
// 	char        *copy1 = strdup(src12);
// 	char        *copy2 = ft_strdup(src12);
// 	const char  *src34 = ""; // empty string -> ""
// 	char        *copy3 = strdup(src34);
// 	char        *copy4 = ft_strdup(src34);
// 	// const char  *src56 = NULL; // NULL parameter -> segmentation fault
// 	// char        *copy5 = strdup(src56);
// 	// char        *copy6 = ft_strdup(src56);

//     printf("Original\n");
//     printf("Src: %s\nCopy: %s\n", src12, copy1);
// 	printf("Src: %s\nCopy: %s\n", src34, copy3);
// 	// printf("Src: %s\nCopy: %s\n", src56, copy5);

// 	printf("Reproduction\n");
// 	printf("Src: %s\nCopy: %s\n", src12, copy2);
// 	printf("Src: %s\nCopy: %s\n", src34, copy4);
// 	// printf("Src: %s\nCopy: %s\n", src56, copy6);

//     free(copy1);
// 	free(copy2);
//  	free(copy3);
//  	free(copy4);
// // 	free(copy5);
// // 	free(copy6);
// }
