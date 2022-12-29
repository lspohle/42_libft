/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:25:32 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 08:25:33 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libft.h"

void	ft_strlen_test(void)
{
    test_headline("ft_strlen.c");

    int test = 1;

    // Test 1
    if (strlen("42 Wolfsburg") == ft_strlen("42 Wolfsburg")) // basic input
   	test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (strlen("") == ft_strlen("")) // empty str
    	test_successful(test);
	else
		test_failed(test);
}
