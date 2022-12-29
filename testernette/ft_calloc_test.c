/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:24:01 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 08:24:02 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libft.h"

void	ft_calloc_test(void)
{
    test_headline("ft_calloc.c");

    int     test = 1;

    int     *array1;
    int     *array2;
    size_t	count = 3; // count of objects
	size_t	size_char = 1; // size of each object (sizeof(char)
    size_t	size_int = 4; // size of each object (sizeof(int)

    // Test 1
    array1 = calloc(count, size_char);
    array2 = ft_calloc(count, size_char);
	if (memcmp(array1, array2, count * size_char) == 0)
		test_successful(test);
	else
		test_failed(test);
    free(array1);
    free(array2);
    test++;

    // Test 2
    array1 = calloc(count, size_int);
    array2 = ft_calloc(count, size_int);
	if (memcmp(array1, array2, count * size_int) == 0)
		test_successful(test);
	else
		test_failed(test);
    free(array1);
    free(array2);
}
