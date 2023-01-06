/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:25:52 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:47:36 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_tolower_test(int *value)
{
    test_headline("ft_tolower.c");

    int test = 1;

    // Test 1
    if (tolower('A') == tolower('A'))
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 2
    if (tolower('a') == tolower('a'))
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 3
    if (tolower('Z') == tolower('Z'))
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 4
    if (tolower('z') == tolower('z'))
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 5
    if (tolower('1') == tolower('1'))
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 6
    if (tolower(128) == tolower(128))
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 7
    if (tolower(0) == tolower(0))
    	test_successful(test);
	else
		test_failed(test, value);
}
