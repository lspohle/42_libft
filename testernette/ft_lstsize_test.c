/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:24:45 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 08:24:46 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libft.h"

void	ft_lstsize_test(void)
{
	test_headline("ft_lstsize.c");

    int     test = 1;

	t_list  *lst;
	t_list  *tmp;

	tmp = ft_lstnew("Three");
	lst = tmp;
	tmp = ft_lstnew("Two");
	tmp->next = lst;
	lst = tmp;
	tmp = ft_lstnew("One");
	tmp->next = lst;
	lst = tmp;

    // Test 1
    if (ft_lstsize(lst) == 3)
        test_successful(test);
	else
		test_failed(test);
    test++;

    // Test 2
    if (ft_lstsize(NULL) == 0)
        test_successful(test);
	else
		test_failed(test);
    free(lst);
}
