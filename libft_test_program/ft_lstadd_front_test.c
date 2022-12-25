// Heap

#include "test.h"
#include "libft.h"

static void ft_print_nodes(t_list *lst)
{
	for (int i = 1; lst != NULL; i++)
	{
		printf("Node[%d]: %s\n", i, (char *) lst->content);
		lst = lst->next;
	}
}

void	ft_lstadd_front_test(void)
{
	printf("\n\033[1;33mft_lstadd_front.c\033[0m\n");

	t_list *lst;
	t_list *tmp;

    // Test 1
	tmp = ft_lstnew("Four");
	lst = tmp;
	tmp = ft_lstnew("Three");
	tmp->next = lst;
	lst = tmp;
	tmp = ft_lstnew("Two");
	tmp->next = lst;
	lst = tmp;

    printf("\033[0;36mThe linked list to modify:\033[0m\n");
	ft_print_nodes(lst);
	printf("\n");
	ft_lstadd_front(&lst, ft_lstnew("One"));
    printf("\033[0;36mThe modified linked list:\033[0m\n");
	ft_print_nodes(lst);
    free(lst);
}

// Stack

// #include "libft.h"
// #include <stdio.h>

// static void ft_print_names(t_list *lst)
// {
// 	t_list *tmp = lst;

// 	while (tmp != NULL)
// 	{
// 		printf("Name: %s\n", tmp->content);
// 		tmp = tmp->next;
// 	}
// }

// int	main(void)
// {
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
// 	ft_lstadd_front(&lst, &name4);
// 	ft_print_names(lst);
// }
