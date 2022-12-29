/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:26:04 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 16:47:45 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

// The recursive function ft_test_libft is the heart of the test program
void ft_test_libft(void)
{
	//char	*input_function = "all";
	char	input_function[13];
	char	input_continue[2];

	printf("	\033[1;35mTesternette\033[0m\n\n\n");

	// Presenting the user the opportunity to choose one or multiple functions to test
	printf("\033[1;37mPlease refer to one or multiple functions you would like to test: \033[0m");
	scanf("%12s", input_function);

	// Calling one or multiple functions depending on the user's input
	if (strncmp(input_function, "atoi", strlen(input_function)) == 0)
		ft_atoi_test();
	else if (strncmp(input_function, "bzero", strlen(input_function)) == 0)
		ft_bzero_test();
	else if (strncmp(input_function, "calloc", strlen(input_function)) == 0)
		ft_calloc_test();
	else if (strncmp(input_function, "isalnum", strlen(input_function)) == 0)
		ft_isalnum_test();
	else if (strncmp(input_function, "isalpha", strlen(input_function)) == 0)
		ft_isalpha_test();
	else if (strncmp(input_function, "isascii", strlen(input_function)) == 0)
		ft_isascii_test();
	else if (strncmp(input_function, "isdigit", strlen(input_function)) == 0)
		ft_isdigit_test();
	else if (strncmp(input_function, "isprint", strlen(input_function)) == 0)
		ft_isprint_test();
	else if (strncmp(input_function, "itoa", strlen(input_function)) == 0)
		ft_itoa_test();
	else if (strncmp(input_function, "lstadd_back", strlen(input_function)) == 0)
		ft_lstadd_back_test();
	else if (strncmp(input_function, "lstadd_front", strlen(input_function)) == 0)
		ft_lstadd_front_test();
	// // // else if (strncmp(input_function, "lstclear", strlen(input_function)) == 0)
	// // // 	ft_lstclear_test();
	// // // else if (strncmp(input_function, "lstdelone", strlen(input_function)) == 0)
	// // // 	ft_lstdelone_test();
	// // // else if (strncmp(input_function, "lstiter", strlen(input_function)) == 0)
	// // // 	ft_lstiter_test();
	// // // else if (strncmp(input_function, "lstlast", strlen(input_function)) == 0)
	// // // 	ft_lstlast_test();
	 else if (strncmp(input_function, "lstmap", strlen(input_function)) == 0)
		ft_lstmap_test();
	// // // else if (strncmp(input_function, "lstnew", strlen(input_function)) == 0)
	// // // 	ft_lstnew_test();
	else if (strncmp(input_function, "lstsize", strlen(input_function)) == 0)
		ft_lstsize_test();
	else if (strncmp(input_function, "memchr", strlen(input_function)) == 0)
		ft_memchr_test();
	else if (strncmp(input_function, "memcmp", strlen(input_function)) == 0)
		ft_memcmp_test();
	else if (strncmp(input_function, "memcpy", strlen(input_function)) == 0)
		ft_memcpy_test();
	else if (strncmp(input_function, "memmove", strlen(input_function)) == 0)
		ft_memmove_test();
	else if (strncmp(input_function, "memset", strlen(input_function)) == 0)
		ft_memset_test();
	else if (strncmp(input_function, "putchar_fd", strlen(input_function)) == 0)
		ft_putchar_fd_test();
	else if (strncmp(input_function, "putendl_fd", strlen(input_function)) == 0)
		ft_putendl_fd_test();
	else if (strncmp(input_function, "putnbr_fd", strlen(input_function)) == 0)
		ft_putnbr_fd_test();
	else if (strncmp(input_function, "putstr_fd", strlen(input_function)) == 0)
		ft_putstr_fd_test();
	else if (strncmp(input_function, "split", strlen(input_function)) == 0)
		ft_split_test();
	else if (strncmp(input_function, "strchr", strlen(input_function)) == 0)
		ft_strchr_test();
	else if (strncmp(input_function, "strdup", strlen(input_function)) == 0)
		ft_strdup_test();
	else if (strncmp(input_function, "striteri", strlen(input_function)) == 0)
		ft_striteri_test();
	else if (strncmp(input_function, "strjoin", strlen(input_function)) == 0)
		ft_strjoin_test();
	else if (strncmp(input_function, "strlcat", strlen(input_function)) == 0)
		ft_strlcat_test();
	else if (strncmp(input_function, "strlcpy", strlen(input_function)) == 0)
		ft_strlcpy_test();
	else if (strncmp(input_function, "strlen", strlen(input_function)) == 0)
		ft_strlen_test();
	else if (strncmp(input_function, "strmapi", strlen(input_function)) == 0)
		ft_strmapi_test();
	else if (strncmp(input_function, "strncmp", strlen(input_function)) == 0)
		ft_strncmp_test();
	else if (strncmp(input_function, "strnstr", strlen(input_function)) == 0)
		ft_strnstr_test();
	else if (strncmp(input_function, "strrchr", strlen(input_function)) == 0)
		ft_strrchr_test();
	else if (strncmp(input_function, "strtrim", strlen(input_function)) == 0)
		ft_strtrim_test();
	else if (strncmp(input_function, "substr", strlen(input_function)) == 0)
		ft_substr_test();
	else if (strncmp(input_function, "tolower", strlen(input_function)) == 0)
		ft_tolower_test();
	else if (strncmp(input_function, "toupper", strlen(input_function)) == 0)
		ft_toupper_test();
    // Part 1 of the project (mandatory): libc functions
    else if (strncmp(input_function, "libc", strlen(input_function)) == 0)
    {
        ft_atoi_test();
		ft_bzero_test();
		ft_calloc_test();
		ft_isalnum_test();
		ft_isalpha_test();
		ft_isascii_test();
		ft_isdigit_test();
		ft_isprint_test();
        ft_memchr_test();
		ft_memcmp_test();
		ft_memcpy_test();
		ft_memmove_test();
		ft_memset_test();
        ft_strchr_test();
		ft_strdup_test();
        ft_strlcat_test();
		ft_strlcpy_test();
        ft_strlen_test();
        ft_strncmp_test();
		ft_strnstr_test();
		ft_strrchr_test();
        ft_tolower_test();
		ft_toupper_test();
    }
    // Part 2 of the project (mandatory): additional functions
    else if (strncmp(input_function, "additional", strlen(input_function)) == 0)
    {
		ft_itoa_test();
		ft_split_test();
		ft_striteri_test();
		ft_strjoin_test();
		ft_strmapi_test();
		ft_strtrim_test();
		ft_substr_test();
        ft_putchar_fd_test();
		ft_putendl_fd_test();
		ft_putnbr_fd_test();
		ft_putstr_fd_test();
    }
    // Part 3 of the project (voluntary): bonus functions
    else if (strncmp(input_function, "bonus", strlen(input_function)) == 0)
    {
        ft_lstadd_back_test();
		ft_lstadd_front_test();
		// // //ft_lstclear_test();
		// // //ft_lstdelone_test();
		// // //ft_lstiter_test();
		// // //ft_lstlast_test();
		ft_lstmap_test();
		// // //ft_lstnew_test();
		ft_lstsize_test();
    }
    // All parts of the project combined
	else if (strncmp(input_function, "all", strlen(input_function)) == 0)
	{
		ft_atoi_test();
		ft_bzero_test();
		ft_calloc_test();
		ft_isalnum_test();
		ft_isalpha_test();
		ft_isascii_test();
		ft_isdigit_test();
		ft_isprint_test();
		ft_itoa_test();
		ft_memchr_test();
		ft_memcmp_test();
		ft_memcpy_test();
		ft_memmove_test();
		ft_memset_test();
		ft_split_test();
		ft_strchr_test();
		ft_strdup_test();
		ft_striteri_test();
		ft_strjoin_test();
		ft_strlcat_test();
		ft_strlcpy_test();
		ft_strlen_test();
		ft_strmapi_test();
		ft_strncmp_test();
		ft_strnstr_test();
		ft_strrchr_test();
		ft_strtrim_test();
		ft_substr_test();
		ft_tolower_test();
		ft_toupper_test();
        ft_putchar_fd_test();
		ft_putendl_fd_test();
		ft_putnbr_fd_test();
		ft_putstr_fd_test();
        ft_lstadd_back_test();
		ft_lstadd_front_test();
		// // //ft_lstclear_test();
		// // //ft_lstdelone_test();
		// // //ft_lstiter_test();
		// // //ft_lstlast_test();
		ft_lstmap_test();
		// // //ft_lstnew_test();
		ft_lstsize_test();
	}
	else
		printf("\nFunction '%s' not found!\n", input_function);
	printf("\n");

	// Presenting the user the opportunity to continue testing his*her functions
	printf("Do you wish to continue(y/n): ");
	scanf("%1s", input_continue);

    // Recursive approach: ft_test_libft calls itself
	if (strncmp(input_continue, "y", strlen(input_continue)) == 0)
		ft_test_libft();
}

// Main fucntion which calls the recursive function ft_test_libft
int	main(void)
{
	ft_test_libft();
}
