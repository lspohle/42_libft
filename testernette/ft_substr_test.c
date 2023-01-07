/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:25:49 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:47:49 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_substr_test(int *value)
{
    test_headline("ft_substr.c");

    int             test = 1;

    const char      *src = "42 Wolfsburg";
    char            *sub;

    // Test 1
    sub = ft_substr(src, 3, 9); // basic input
    if (strncmp(sub, "Wolfsburg", strlen(sub)) == 0)
    	test_successful(test);
	else
		test_failed(test, value);
    free(sub);
    test++;

    // Test 2
    sub = ft_substr(src, 20, 9); // start is greater than src
    if (strncmp(sub, "", strlen(sub)) == 0)
    	test_successful(test);
	else
		test_failed(test, value);
    free(sub);
    test++;

    // Test 3
    sub = ft_substr("", 0, 1); // empty str
    if (strncmp(sub, "", strlen(sub)) == 0)
    	test_successful(test);
	else
		test_failed(test, value);
    free(sub);
    test++;

    // Test 4
    sub = ft_substr(src, 3, 20); // len is greater than &src[start]
    if (strncmp(sub, "Wolfsburg", strlen(sub)) == 0)
    	test_successful(test);
	else
		test_failed(test, value);
    free(sub);
}
