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

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;

	if (new != NULL && lst != NULL)
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
