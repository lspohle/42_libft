/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:24:40 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:52:54 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

// Function which is applied to the list
static void	*ft_iterate_on_the_list(void *content)
{
	char *s = content;

	for (int i = 0; s[i] != 0; i++)
	{
		s[i] = '9';
	}
	return (s);
}

// Function which frees the content if necessary
static void ft_free_content(void *content)
{
    free(content);
}

// Function which compares lst_check and lst_test
static bool    ft_compare_linked_lists(t_list *lst_check, t_list *lst_test)
{
    while (lst_check != NULL && lst_test != NULL)
    {
        if (lst_check->content != lst_test->content)
            return (false);
        lst_check = lst_check->next;
        lst_test = lst_test->next;
    }
    return (true);
}

// The test function
void	ft_lstmap_test(int *value)
{
	test_headline("ft_lstmap.c");

    int     test = 1;

	// Test 1
    t_list  *tmp;
    t_list  *lst_check;
    t_list  *lst_test;

    // Initialising lst_test
    // The linked list to iterate on so that it looks like lst_check
	tmp = ft_lstnew(strdup("Four"));
	lst_test = tmp;
	tmp = ft_lstnew(strdup("Three"));
	tmp->next = lst_test;
	lst_test = tmp;
	tmp = ft_lstnew(strdup("Two"));
	tmp->next = lst_test;
	lst_test = tmp;
    tmp = ft_lstnew(strdup("One"));
    tmp->next = lst_test;
    lst_test = tmp;

	// Initialising lst_check
    // The linked list which is created by ft_lstmap
	lst_check = ft_lstmap(lst_test, ft_iterate_on_the_list, ft_free_content);

    if (ft_compare_linked_lists(lst_check, lst_test) == true)
        test_successful(test);
    else
        test_failed(test, value);
    free(lst_check);
    free(lst_test);
}

// // Function that prints the list
// void ft_print_nodes(t_list *lst)
// {
// 	for (int i = 1; lst != NULL; i++)
// 	{
// 		printf("Node[%d]: %s\n", i, (char *) lst->content);
// 		lst = lst->next;
// 	}
// }

// // Main function - the heart of the program
// void	ft_lstmap_test(void) //int main(void)
// {
// 	t_list *lst;
// 	t_list *tmp;
// 	t_list *result;

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

// 	printf("\033[1;35mThe linked list:\033[0m\n");
// 	ft_print_nodes(lst);
// 	result = ft_lstmap(lst, ft_iterate_on_the_list, ft_free_content);
// 	printf("\033[1;35mThe new linked list:\033[0m\n");
// 	ft_print_nodes(result);
// }
