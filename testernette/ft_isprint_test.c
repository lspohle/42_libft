/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:24:20 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:53:28 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_isprint_test(int *value)
{
    test_headline("ft_isprint.c");

    int test = 1;

    // Test 1
	if (isprint('a') == ft_isprint('a'))
		test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 2
	if (isprint('\e') == ft_isprint('\e'))
		test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 3
	if (isprint('\t') == ft_isprint('\t'))
		test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 4
	if (isprint(128) == ft_isprint(128))
		test_successful(test);
	else
		test_failed(test, value);
}
