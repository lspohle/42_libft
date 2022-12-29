/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:24:38 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 08:24:39 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_print_names(t_list *lst)
{
	t_list *tmp = lst;

	while (tmp != NULL)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
}

int	main(void)
{
	t_list name1;
	t_list name2;
	t_list name3;

	t_list *lst;

	name1.content = "Mama";
	name2.content = "Papa";
	name3.content = "Nils";

	lst = &name1;
	name1.next = &name2;
	name2.next = &name3;
	name3.next = NULL;

	ft_print_names(lst);
	printf("\nLength of list: %d\n", ft_lstsize(lst));
	printf("\nLastname: ");
	ft_print_names(ft_lstlast(lst));
}
