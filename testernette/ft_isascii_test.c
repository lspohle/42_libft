/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:24:12 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:53:44 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_isascii_test(int *value)
{
    test_headline("ft_isascii.c");

    int test = 1;

    // Test 1
	if (isascii('a') == ft_isascii('a'))
		test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 2
	if (isascii('5') == ft_isascii('5'))
		test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 3
	if (isascii('\0') == ft_isascii('\0'))
		test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 4
	if (isascii(128) == ft_isascii(128))
		test_successful(test);
	else
		test_failed(test, value);
}
