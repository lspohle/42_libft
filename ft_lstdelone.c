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
//  -> lst: the node to free.
//  -> del: the address of the function used to delete the content
//  -> takes as a parameter a node and frees the memory of the node’s content
//     using the function ’del’ given as a parameter and free the node
//  -> the memory of ’next’ must not be freed
//  -> external functs: free
//  -> return: none

#include "libft.h"
#include <stdio.h>

void ft_delete(void *content)
{
	printf("Content: %s\n", content);
	free(content);
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
}

#include "libft.h"
#include <stdio.h>

static void	ft_print_names(t_list *lst)
{
	t_list *tmp = lst;

	while (tmp != NULL)
	{
		printf("Name: %s\n", tmp->content);
		tmp = tmp->next;
	}
}

// int	main(void)
// {
// 	void (*del)(void*);
// 	del = ft_delete;

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
// 	ft_lstdelone(&name1, del);
// 	ft_print_names(lst);
// }

int main(void)
{
	t_list *lst;
	//t_list *tmp;

	lst = ft_lstnew("Mama");
	// lst = tmp;
	// tmp = ft_lstnew("Papa");
	// tmp->next = lst;
	// lst = tmp;
	// tmp = ft_lstnew("Nils");
	// tmp->next = lst;
	// lst = tmp;

	void (*del)(void*);
	del = ft_delete;

	ft_print_names(lst);
	ft_lstdelone(lst, del);
	ft_print_names(lst);
}



// int    main(void)
// {
//     void (*del)(void *);
//     del = ft_delete;
//     char    *test; // (const) char    *test = "heLlo this is me in a new world!";
//     test = ft_strdup("heLlo this is me in a new world!");
//     printf("Before:%s\n", test);
//     ft_striteri(test, f);
//     printf("After :%s\n", test);
// }
