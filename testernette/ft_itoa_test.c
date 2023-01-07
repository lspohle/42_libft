/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:24:22 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:53:19 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_itoa_test(int *value)
{
    test_headline("ft_itoa.c");

    int     test = 1;

    char    *str;

    // Test 1
	str = ft_itoa(0); // basic input
	if (strncmp(str, "0", sizeof(*str)) == 0)
		test_successful(test);
	else
		test_failed(test, value);
	free(str);
    test++;

    // Test 2
	str = ft_itoa(-5430); // negative input
	if (strncmp(str, "-5430", sizeof(*str)) == 0)
		test_successful(test);
	else
		test_failed(test, value);
	free(str);
    test++;

    // Test 3
	str = ft_itoa(-2147483648); // min int
	if (strncmp(str, "-2147483648", sizeof(*str)) == 0)
		test_successful(test);
	else
		test_failed(test, value);
	free(str);
    test++;

    // Test 4
	str = ft_itoa(2147483647); // max int
	if (strncmp(str, "2147483647", sizeof(*str)) == 0)
		test_successful(test);
	else
		test_failed(test, value);
	free(str);
}
