#include "test.h"
#include "libft.h"

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

void	ft_lstadd_back_test(void)
{
	test_headline("ft_lstadd_back.c");

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
	tmp = ft_lstnew("Three");
	lst_test = tmp;
	tmp = ft_lstnew("Two");
	tmp->next = lst_test;
	lst_test = tmp;
	tmp = ft_lstnew("One");
	tmp->next = lst_test;
	lst_test = tmp;

    // Test 1
	ft_lstadd_back(&lst_test, ft_lstnew("Four"));
    if (ft_compare_linked_lists(lst_check, lst_test) == true)
        test_successful(test);
    else
        test_failed(test);
    free(lst_check);
    free(lst_test);
}

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

// void	ft_lstadd_back_test(void)
// {
// 	test_headline("ft_lstadd_back.c");

// 	t_list *lst;
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

//     // Test 1
// 	ft_lstadd_back(&lst, ft_lstnew("Four"));
//     printf("\033[0;36mThe modified linked list:\033[0m\n");
// 	ft_print_nodes(lst);
//     free(lst);
// }
