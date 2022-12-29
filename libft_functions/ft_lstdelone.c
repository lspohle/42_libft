/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:50:14 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/21 15:39:03 by lspohle          ###   ########.fr       */
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

// void ft_free_content(void *content)
// {
//     free(content);
// }

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
    free(lst);
}

// int main(void)
// {
//     t_list *result = lstnew("One"); 
//     ft_print_nodes(result);
//     ft_lstdelone(result, ft_free_content);
//     ft_print_nodes(result);
// }
