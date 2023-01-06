/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:24:47 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:41:29 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void ft_print_nodes(t_list *lst)
{
	for (int i = 1; lst != NULL; i++)
	{
		printf("Node[%d]: %s\n", i, (char *) lst->content);
		lst = lst->next;
	}
}

void    ft_lstnew_test(int *value)
{
    test_headline("ft_lstnew.c");

    t_list *lst = ft_lstnew("One");

    printf("\033[0;36mThe new node:\033[0m\n");
    ft_print_nodes(lst);
	free (lst);
}

// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	char *str = "Hello";
// 	t_list *tmp;
// 	tmp = ft_lstnew(str);
// 	while (tmp != NULL)
// 	{
// 		printf("Element: %s\n", tmp->content);
// 		tmp = tmp->next;
// 	}
// 	free (tmp);
// }
