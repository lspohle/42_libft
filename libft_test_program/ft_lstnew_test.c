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

void    ft_lstnew_test(void)
{
    test_headline("ft_lstnew.c");

    t_list *lst = ft_lstnew("One");

    printf("\033[0;36mThe new node:\033[0m\n");
    ft_print_nodes(lst);
	free (lst);
}