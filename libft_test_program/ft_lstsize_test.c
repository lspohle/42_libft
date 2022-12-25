#include "test.h"
#include "libft.h"

void	ft_lstsize_test(void)
{
	printf("\n\033[1;33mft_lstsize.c\033[0m\n");

	t_list *lst;
	t_list *tmp;

	tmp = ft_lstnew("Three");
	lst = tmp;
	tmp = ft_lstnew("Two");
	tmp->next = lst;
	lst = tmp;
	tmp = ft_lstnew("One");
	tmp->next = lst;
	lst = tmp;

    // Test 1
    if (ft_lstsize(lst) == 3)
        printf("	\033[0;32mTest 1: OK\033[0m\n");
	else
		printf("	\033[0;31mTest 1: KO\033[0m\n");
    
    // Test 2
    if (ft_lstsize(NULL) == 0)
        printf("	\033[0;32mTest 2: OK\033[0m\n");
	else
		printf("	\033[0;31mTest 2: KO\033[0m\n");
        
    free(lst);
}
