/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:26:24 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 16:10:19 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H
# include <stdio.h> // e.g. printf(), scanf(), getc(), fopen()
# include <stdlib.h> // e.g. malloc(), calloc(), free()
# include <string.h> // e.g. strlen(), strncmp(), memcmp()
# include <unistd.h> // e.g. write(), close()
# include <ctype.h> // e.g. isalpha(), isdigit(), isalnum()
# include <fcntl.h> // e.g. open()
# include <stdbool.h> // e.g. true, false
# define BUFF_SIZE 1000

// Function for headline
void            test_headline(char *function_name);
// Functions for failure and success
void            test_failed(int test);
void            test_successful(int test);
// Functions for testing libft
void	        ft_isalpha_test(void);
void	        ft_isdigit_test(void);
void	        ft_isalnum_test(void);
void	        ft_isascii_test(void);
void	        ft_isprint_test(void);
void	        ft_strlen_test(void);
void	        ft_memset_test(void);
void	        ft_bzero_test(void);
void	        ft_memcpy_test(void);
void	        ft_memmove_test(void);
void	        ft_strlcpy_test(void);
void	        ft_strlcat_test(void);
void	        ft_toupper_test(void);
void	        ft_tolower_test(void);
void	        ft_strchr_test(void);
void	        ft_strrchr_test(void);
void	        ft_strncmp_test(void);
void	        ft_memchr_test(void);
void	        ft_memcmp_test(void);
void	        ft_strnstr_test(void);
void	        ft_atoi_test(void);
void	        ft_calloc_test(void);
void	        ft_strdup_test(void);
void	        ft_substr_test(void);
void	        ft_strjoin_test(void);
void	        ft_strtrim_test(void);
void	        ft_split_test(void);
void	        ft_itoa_test(void);
void            ft_strmapi_test(void);
void        	ft_striteri_test(void);
// Declaring struct and creating alias (in order to creat a linked list)
typedef struct  test_result
{
    int         test1;
    int         test2;
    int         test3;
    int         test4;
}               test_results;
void	        ft_putchar_fd_test(void);
void	        ft_putstr_fd_test(void);
void	        ft_putendl_fd_test(void);
void	        ft_putnbr_fd_test(void);
void	        ft_lstnew_test(void);
void	        ft_lstadd_front_test(void);
void	        ft_lstsize_test(void);
// // // void	ft_lstlast_test(void);
void	        ft_lstadd_back_test(void);
void			ft_lstmap_test(void);

#endif
