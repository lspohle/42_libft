/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:24:59 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 08:25:00 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libft.h"

void	ft_memset_test(void)
{
    test_headline("ft_memset.c");

    int     test = 1;

    int	    b1[] = {1, 2, 3};
	int	    b2[] = {1, 2, 3};
	int	    c = 0;
	size_t	n = 3 * sizeof(int);
	int	    b3[] = {1, 2, 3};
	int	    b4[] = {1, 2, 3};
    int     d = 1;
    size_t  m = 2 * sizeof (int);

    // Test 1
	if (memcmp(memset(b1, c, n), ft_memset(b2, c, n), n) == 0)
		test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
	if (memcmp(memset(b3, d, m), ft_memset(b4, d, m), m) == 0)
		test_successful(test);
	else
		test_failed(test);
}
