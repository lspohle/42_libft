/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:25:18 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:51:26 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_strchr_test(int *value)
{
    test_headline("ft_strchr.c");

    int     test = 1;

    char    *s = "Hello\0World";
    int     c = '\0';
    int     d = 'A';

    // Test 1
    if (strncmp(strchr(s, c), ft_strchr(s, c), strlen(s)) == 0)
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 2
    if (strchr(s, d) == ft_strchr(s, d))
    	test_successful(test);
	else
		test_failed(test, value);
}
