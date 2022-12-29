/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:28:51 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 13:30:53 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//  Prototyped as void ft_lstclear(t_list **lst, void (*del)(void*))
//  -> lst: the address of a pointer to a node
//  -> del: the address of the function used to delete the content
//  -> deletes and frees the given node and every successor of that node,
//     using the function ’del’ and free(3)
//  -> finally, the pointer to the list must be set to NULL
//  -> the memory of ’next’ must not be freed
//  -> external functs: free
//  -> return: none

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while (*lst != NULL)
	{
		del((*lst)->content);
		tmp = *lst;
		*lst = tmp->next;
		free(tmp);
	}
	*lst = NULL;
}

// void ft_free_content(void *content)
// {
//     free(content);
// }

// static void ft_print_nodes(t_list *lst)
// {
// 	for (int i = 1; lst != NULL; i++)
// 	{
// 		printf("Node[%d]: %s\n", i, (char *) lst->content);
// 		lst = lst->next;
// 	}
// }

// int main(void)
// {
//     t_list *result = ft_lstnew(strdup("One"));
//     ft_print_nodes(result);
//     ft_lstclear(&result, ft_free_content);
//     ft_print_nodes(result);
// }
