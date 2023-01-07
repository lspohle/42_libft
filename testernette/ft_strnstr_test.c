/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:25:41 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:48:16 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_strnstr_test(int *value)
{
    test_headline("ft_strnstr.c");

    int test = 1;

    // Test 1
    if (strnstr("42Wolfsburg", "Wolf", ft_strlen("42Wolfsburg")) == ft_strnstr("42Wolfsburg", "Wolf", ft_strlen("42Wolfsburg"))) // basic input (first occurrence)
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 2
    if (strnstr("42WobWolfsburg", "Wolf", ft_strlen("42WobWolfsburg")) == ft_strnstr("42WobWolfsburg", "Wolf", ft_strlen("42WobWolfsburg"))) // basic input (second occurrence)
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 3
    if (strnstr("42WobWolfsburg", "Wolf", 0) == ft_strnstr("42WobWolfsburg", "Wolf", 0)) // len == 0
    	test_successful(test);
	else
		test_failed(test, value);
}
