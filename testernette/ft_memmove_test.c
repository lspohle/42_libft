/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:25:01 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:52:28 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_memmove_test(int *value)
{
    test_headline("ft_memmove.c");

    int     test = 1;

    char    src1[] = "Hello World";
	char    src2[] = "Hello World";
	size_t  n = 5 * sizeof (char);
    int     src3[] = {1, 2, 3};
	int     src4[] = {1, 2, 3};
    size_t  m = 2 * sizeof (int);

    // Test 1
	if (memcmp(memmove(&src1[5], &src1[6], n), ft_memmove(&src2[5], &src2[6], n), n) == 0)
		test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 2
	if (memcmp(memmove(&src3[1], src3, m), ft_memmove(&src4[1], src4, m), n) == 0)
		test_successful(test);
	else
		test_failed(test, value);
}
