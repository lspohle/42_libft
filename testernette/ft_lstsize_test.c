/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:24:45 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:52:45 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_lstsize_test(int *value)
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
		test_failed(test, value);
    test++;

    // Test 2
    if (ft_lstsize(NULL) == 0)
        test_successful(test);
	else
		test_failed(test, value);
    free(lst);
}

// #include "libft.h"
// #include <stdio.h>

// static void ft_print_names(t_list *lst)
// {
// 	t_list *tmp = lst;

// 	while (tmp != NULL)
// 	{
// 		printf("Name: %s\n", tmp->content);
// 		tmp = tmp->next;
// 	}
// }

// int	main(void)
// {
// 	t_list name1;
// 	t_list name2;
// 	t_list name3;
// 	t_list name4;

// 	t_list *lst;

// 	name1.content = "Mama";
// 	name2.content = "Papa";
// 	name3.content = "Nils";
// 	name4.content = "Lea";

// 	lst = &name1;
// 	name1.next = &name2;
// 	name2.next = &name3;
// 	name3.next = NULL;

// 	ft_print_names(lst);
// 	printf("\n");
// 	ft_lstadd_front(&lst, &name4);
// 	ft_print_names(lst);
// 	printf("\n");
// 	printf("Length of list: %d\n", ft_lstsize(lst));
// }
