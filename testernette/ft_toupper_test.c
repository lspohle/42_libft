/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:25:54 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:47:13 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_toupper_test(int *value)
{
    test_headline("ft_toupper.c");

    int test = 1;

    // Test 1
    if (toupper('A') == toupper('A'))
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 2
    if (toupper('a') == toupper('a'))
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 3
    if (toupper('Z') == toupper('Z'))
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 4
    if (toupper('z') == toupper('z'))
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 5
    if (toupper('1') == toupper('1'))
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 6
    if (toupper(128) == toupper(128))
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 7
    if (toupper(0) == toupper(0))
    	test_successful(test);
	else
		test_failed(test, value);
}
