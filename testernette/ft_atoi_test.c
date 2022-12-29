/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:23:47 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 08:23:48 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libft.h"

void	ft_atoi_test(void)
{
    test_headline("ft_atoi.c");

    int     test =  1;

    char    *str1 = "\t\v\f\r\n- 06050";
	char    *str2 = "\e06050";

    // Test 1
	if (atoi(str1) == ft_atoi(str1))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
	if (atoi(str2) == ft_atoi(str2))
		test_successful(test);
	else
		test_failed(test);
}
