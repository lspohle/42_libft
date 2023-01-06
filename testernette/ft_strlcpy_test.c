/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:25:29 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:46:46 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_strlcpy_test(int *value)
{
    test_headline("ft_strlcpy.c");

    int     test = 1;

    char    src[] = "42 Wolfsburg";
    char    dst1[30];
    char    dst2[30];
    size_t  dstsize12 = 5;
    char    dst3[5];
    char    dst4[5];
    size_t  dstsize34 = 0;

    // Test 1
    if (strlcpy(dst1, src, dstsize12) == ft_strlcpy(dst2, src, dstsize12)) // size < strlen(src) --> "42 Wo"
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 2
    if (strlcpy(dst3, src, dstsize34) == ft_strlcpy(dst4, src, dstsize34)) // dstsize = zero --> no copy
    	test_successful(test);
	else
		test_failed(test, value);
    test++;
}
