/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:57:55 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/21 15:47:30 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//  Prototyped as int ft_lstsize(t_list *lst)
//  -> lst: the beginning of the list
//  -> counts the number of nodes in a list
//  -> external functs: none
//  -> return: the length of the list

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		len++;
	}
	return (len);
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
