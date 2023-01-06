/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:24:27 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:53:01 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

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

void	ft_lstadd_front_test(int *value)
{
	test_headline("ft_lstadd_front.c");

    int     test = 1;

    t_list  *tmp;
    t_list  *lst_check;
    t_list  *lst_test;

    // Initialising lst_check
    // The modified linked list lst_test shall look the same
    tmp = ft_lstnew("Four");
	lst_check = tmp;
	tmp = ft_lstnew("Three");
	tmp->next = lst_check;
	lst_check = tmp;
	tmp = ft_lstnew("Two");
	tmp->next = lst_check;
	lst_check = tmp;
    tmp = ft_lstnew("One");
    tmp->next = lst_check;
    lst_check = tmp;

    // Initialising lst_test
    // The linked list to modify so that it looks like lst_check
	tmp = ft_lstnew("Four");
	lst_test = tmp;
	tmp = ft_lstnew("Three");
	tmp->next = lst_test;
	lst_test = tmp;
	tmp = ft_lstnew("Two");
	tmp->next = lst_test;
	lst_test = tmp;

    // Test 1
	ft_lstadd_front(&lst_test, ft_lstnew("One"));
    if (ft_compare_linked_lists(lst_check, lst_test) == true)
        test_successful(test);
    else
        test_failed(test, value);
    free(lst_check);
    free(lst_test);
}


// Heap

// #include "test.h"
// #include "libft.h"

// static void ft_print_nodes(t_list *lst)
// {
// 	for (int i = 1; lst != NULL; i++)
// 	{
// 		printf("Node[%d]: %s\n", i, (char *) lst->content);
// 		lst = lst->next;
// 	}
// }

// void	ft_lstadd_front_test(void)
// {
// 	test_headline("ft_lstadd_front.c");

// 	t_list *lst;
// 	t_list *tmp;

// 	tmp = ft_lstnew("Four");
// 	lst = tmp;
// 	tmp = ft_lstnew("Three");
// 	tmp->next = lst;
// 	lst = tmp;
// 	tmp = ft_lstnew("Two");
// 	tmp->next = lst;
// 	lst = tmp;

//     printf("\033[0;36mThe linked list to modify:\033[0m\n");
// 	ft_print_nodes(lst);
// 	printf("\n");

//     // Test 1
// 	ft_lstadd_front(&lst, ft_lstnew("One"));
//     printf("\033[0;36mThe modified linked list:\033[0m\n");
// 	ft_print_nodes(lst);
//     free(lst);
// }

// Stack

// #include "test.h"
// #include "libft.h"


// static void ft_print_digits(t_list *lst)
// {
// 	t_list *tmp = lst;

// 	while (tmp != NULL)
// 	{
// 		printf("digit: %s\n", tmp->content);
// 		tmp = tmp->next;
// 	}
// }

// int	main(void)
// {
// 	t_list digit1;
// 	t_list digit2;
// 	t_list digit3;
// 	t_list digit4;

// 	t_list *lst;

// 	digit1.content = "One";
// 	digit2.content = "Two";
// 	digit3.content = "Three";
// 	digit4.content = "Four";

// 	lst = &digit1;
// 	digit1.next = &digit2;
// 	digit2.next = &digit3;
// 	digit3.next = NULL;

// 	ft_print_digits(lst);
// 	printf("\n");
// 	ft_lstadd_front(&lst, &digit4);
// 	ft_print_digits(lst);
// }
