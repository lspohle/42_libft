/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:24:50 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 08:24:51 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libft.h"

void	ft_memchr_test(void)
{
    test_headline("ft_memchr.c");

    int     test = 1;

    int     s[] = {1, 2, 3, 4, 3};
    int     c = 3;
    size_t  n = 5 * sizeof(int);
	char    *str = "bonjourno";
	int     d = 'n';
	size_t  m = 2;

    // Test 1
	if (memchr(s, c, n) == ft_memchr(s, c, n))
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
	if (memchr(str, d, m) == ft_memchr(str, d, m))
		test_successful(test);
	else
		test_failed(test);
}
