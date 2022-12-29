/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:23:55 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 08:23:56 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libft.h"

void	ft_bzero_test(void)
{
    test_headline("ft_bzero.c");

    int     test = 1;

	char    s1[] = "Hello World";
	char    s2[] = "Hello World";
	size_t	n = 5 * sizeof(char);

    // Test 1
    bzero(s1, n);
	ft_bzero(s2, n);
	if (memcmp(s1, s2, n) == 0)
		test_successful(test);
	else
		test_failed(test);
}
