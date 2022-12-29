/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:25:49 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/21 14:45:54 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//  Prototyped as void ft_lstadd_back(t_list **lst, t_list *new)
//  -> lst: the address of a pointer to the first link of a list
//  -> new: the address of a pointer to the node to be added to the list
//  -> adds the node ’new’ at the end of the list
//  -> external functs: none
//  -> return: none

#include "libft.h"
#include <stdio.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;

    if (*lst == NULL)
        ft_lstadd_front(lst, new);
	else if (new != NULL)
	{
		tmp = ft_lstlast(*lst);
		while (tmp != NULL && *lst != NULL)
		{
			tmp->next = new;
			new->next = NULL;
			tmp = new->next;
		}
	}
}

// #include "libft.h"
// #include <stdio.h> 

// static void ft_print_nodes(t_list *lst)
// {
// 	for (int i = 1; lst != NULL; i++)
// 	{
// 		printf("Node[%d]: %s\n", i, (char *) lst->content);
// 		lst = lst->next;
// 	}
// }

// int	main(void)
// {
//     // Test 1
// 	t_list *lst; // basic nodes
// 	t_list *tmp;

// 	tmp = ft_lstnew("Three");
// 	lst = tmp;
// 	tmp = ft_lstnew("Two");
// 	tmp->next = lst;
// 	lst = tmp;
// 	tmp = ft_lstnew("One");
// 	tmp->next = lst;
// 	lst = tmp;

//     printf("\033[0;36mThe linked list to modify:\033[0m\n");
// 	ft_print_nodes(lst);
// 	printf("\n");

// 	ft_lstadd_back(&lst, ft_lstnew("Four"));
//     printf("\033[0;36mThe modified linked list:\033[0m\n");
// 	ft_print_nodes(lst);
//     free(lst);

//     // Test 2
//     lst = NULL; // null node

//     printf("\n");
//     printf("\033[0;36mThe linked list to modify:\033[0m\n");
// 	ft_print_nodes(lst);
// 	printf("\n");

//     ft_lstadd_back(&lst, ft_lstnew("One"));
//     ft_lstadd_back(&lst, ft_lstnew("Two"));
//     printf("\033[0;36mThe modified linked list:\033[0m\n");
//     ft_print_nodes(lst);
//     free(lst);
// }