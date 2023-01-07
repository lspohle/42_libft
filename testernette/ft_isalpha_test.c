/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:24:10 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:53:54 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_isalpha_test(int *value)
{
    test_headline("ft_isalpha.c");

    int test = 1;

    // Test 1
	if (isalpha('a') == ft_isalpha('a'))
		test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 2
	if (isalpha('Z') == ft_isalpha('Z'))
		test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 3
	if (isalpha('0') == ft_isalpha('0'))
		test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 4
	if (isalpha('-') == ft_isalpha('-'))
		test_successful(test);
	else
		test_failed(test, value);
}
