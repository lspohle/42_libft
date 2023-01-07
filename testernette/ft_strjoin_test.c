/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:25:25 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:54:51 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_strjoin_test(int *value)
{
    test_headline("ft_strjoin.c");

    int     test = 1;

	char    *output;

    // Test 1
    output = ft_strjoin("Hello ", "World"); // basic input
    if (strncmp(output, "Hello World", strlen("Hello World")) == 0)
    	test_successful(test);
	else
		test_failed(test, value);
    free(output);
    test++;

    // Test 2
    output = ft_strjoin("42 Wolfsburg", &"42 Wolfsburg"[5]); // overlapping input
    if (strncmp(output, "42 Wolfsburglfsburg", strlen("42 Wolfsburglfsburg")) == 0)
    	test_successful(test);
	else
		test_failed(test, value);
    free(output);
    test++;

    // // Test 3
    // output = ft_strjoin(NULL, NULL); // st1 == NULL and st2 == NULL -> segmentation fault
    // if (output == NULL)
    // 	test_successful(test);
	// else
	// 	test_failed(test);
    // free(output);
}
