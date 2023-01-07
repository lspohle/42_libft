/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:26:24 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 20:24:57 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H
# include "../libft/libft.h"
# include <stdio.h> // e.g. printf(), scanf(), getc(), fopen()
# include <stdlib.h> // e.g. malloc(), calloc(), free()
# include <string.h> // e.g. strlen(), strncmp(), memcmp()
# include <unistd.h> // e.g. write(), close()
# include <ctype.h> // e.g. isalpha(), isdigit(), isalnum()
# include <fcntl.h> // e.g. open()
# include <stdbool.h> // e.g. true, false
# define RED "\e[38;5;160m"
# define GREEN "\e[38;5;41m"
# define BRED "\e[38;5;160;1m"
# define BGREEN "\e[38;5;41;1m"
# define PURPLE "\e[38;5;141;1m"
# define MINT "\e[38;5;43m"
# define PINK "\e[38;5;212m"
# define CYAN "\033[1;36m"
# define ESCAPE "\033[0m"

void			test_headline(char *function_name);
void			testernette(void);
void			test_successful(int test);
void			test_failed(int test, int *value);
void			test_congratulations(void);
void			test_error(void);
void	        ft_isalpha_test(int *value);
void	        ft_isdigit_test(int *value);
void	        ft_isalnum_test(int *value);
void	        ft_isascii_test(int *value);
void	        ft_isprint_test(int *value);
void	        ft_strlen_test(int *value);
void	        ft_memset_test(int *value);
void	        ft_bzero_test(int *value);
void	        ft_memcpy_test(int *value);
void	        ft_memmove_test(int *value);
void	        ft_strlcpy_test(int *value);
void	        ft_strlcat_test(int *value);
void	        ft_toupper_test(int *value);
void	        ft_tolower_test(int *value);
void	        ft_strchr_test(int *value);
void	        ft_strrchr_test(int *value);
void	        ft_strncmp_test(int *value);
void	        ft_memchr_test(int *value);
void	        ft_memcmp_test(int *value);
void	        ft_strnstr_test(int *value);
void	        ft_atoi_test(int *value);
void	        ft_calloc_test(int *value);
void	        ft_strdup_test(int *value);
void	        ft_substr_test(int *value);
void	        ft_strjoin_test(int *value);
void	        ft_strtrim_test(int *value);
void	        ft_split_test(int *value);
void	        ft_itoa_test(int *value);
void            ft_strmapi_test(int *value);
void        	ft_striteri_test(int *value);
// Declaring struct and creating alias (in order to creat a linked list)
typedef struct  test_result
{
    int         test1;
    int         test2;
    int         test3;
    int         test4;
}               test_results;
void	        ft_putchar_fd_test(int *value);
void	        ft_putstr_fd_test(int *value);
void	        ft_putendl_fd_test(int *value);
void	        ft_putnbr_fd_test(int *value);
void	        ft_lstnew_test(int *value);
void	        ft_lstadd_front_test(int *value);
void	        ft_lstsize_test(int *value);
// // // void	ft_lstlast_test(int *value);
void	        ft_lstadd_back_test(int *value);
void			ft_lstmap_test(int *value);

#endif
