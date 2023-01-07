/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:25:44 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:48:08 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_strrchr_test(int *value)
{
    test_headline("ft_strrchr.c");

    int     test = 1;

    char    * s = "Hello\0World";
    int     c = '\0';
    int     d = 'A';

    // Test 1
    if (strncmp(strrchr(s, c), ft_strrchr(s, c), strlen(s)) == 0)
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 2
    if (strrchr(s, d) == ft_strrchr(s, d))
    	test_successful(test);
	else
		test_failed(test, value);
}
