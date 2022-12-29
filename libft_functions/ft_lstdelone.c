/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:50:14 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 13:30:43 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//  Prototyped as void ft_lstdelone(t_list *lst, void (*del)(void*))
//  -> lst: the node to free
//  -> del: the address of the function used to delete the content
//  -> takes as a parameter a node and frees the memory of the node’s content
//     using the function ’del’ given as a parameter and free the node
//  -> the memory of ’next’ must not be freed
//  -> external functs: free
//  -> return: none

#include "libft.h"
#include <stdio.h>
#include <string.h>

// void ft_free_content(void *content)
// {
//     free(content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

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
//     ft_lstdelone(result, ft_free_content);
//     ft_print_nodes(result);
// }
