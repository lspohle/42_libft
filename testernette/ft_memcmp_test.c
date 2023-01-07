/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:24:53 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:52:36 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_memcmp_test(int *value)
{
    test_headline("ft_memcmp.c");

    int     test = 1;

    int     s1[] = {1, 2, 0};
    int     s2[] = {1, 2, 4};
    size_t  n = 3 * sizeof (int);
	char    *str1 = "";
	char    *str2 = "test";
	size_t  m = 4 * sizeof (char);

    // Test 1
	if (memcmp(s1, s2, n) == ft_memcmp(s1, s2, n))
		test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 2
	if (memcmp(str1, str2, m) == ft_memcmp(str1, str2, m))
		test_successful(test);
	else
		test_failed(test, value);
}
