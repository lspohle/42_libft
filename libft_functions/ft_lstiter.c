/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:29:19 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 13:30:32 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//  Prototyped as void ft_lstiter(t_list *lst, void (*f)(void*))
//  -> lst: the address of a pointer to a node
//  -> f: the address of the function used to iterate on the list
//  -> iterates the list 'lst' and applies the function 'f' on the content of
//     each node
//  -> the memory of ’next’ must not be freed
//  -> external functs: none
//  -> return: none

#include "libft.h"
#include <stdio.h>
#include <string.h>

// Function that iterates
// void	f_iterate_on_the_list(void *content)
// {
// 	char *s = content;

// 	for (int i = 0; s[i] != 0; i++)
// 	{
// 		s[i] = '9';
// 	}
// }

// Function which iterates through the list
void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// Function that prints the list
// void ft_print_nodes(t_list *lst)
// {
// 	for (int i = 1; lst != NULL; i++)
// 	{
// 		printf("Node[%d]: %s\n", i, (char *) lst->content);
// 		lst = lst->next;
// 	}
// }

// // Main function - the heart of the program
// int main(void)
// {
// 	t_list *lst;
// 	t_list *tmp;

// 	tmp = ft_lstnew(strdup("Four"));
// 	lst = tmp;
// 	tmp = ft_lstnew(strdup("Three"));
// 	tmp->next = lst;
// 	lst = tmp;
// 	tmp = ft_lstnew(strdup("Two"));
// 	tmp->next = lst;
// 	lst = tmp;
//     tmp = ft_lstnew(strdup("One"));
//     tmp->next = lst;
//     lst = tmp;

// 	printf("\033[1;35mThe linked list on which to iterate:\033[0m\n");
// 	ft_print_nodes(lst);
// 	ft_lstiter(lst, f_iterate_on_the_list);
// 	printf("\033[1;35mThe linked list on which was iterated:\033[0m\n");
// 	ft_print_nodes(lst);
// }
