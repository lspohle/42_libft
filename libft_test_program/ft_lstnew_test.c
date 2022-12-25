#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *str = "Hello";
	t_list *tmp;
	tmp = ft_lstnew(str);
	while (tmp != NULL)
	{
		printf("Element: %s\n", tmp->content);
		tmp = tmp->next;
	}
	free (tmp);
}

#include "libft.h"
#include <stdio.h>

void ft_print_names(person *head)
{
	person *tmp = head;

	while (tmp != NULL)
	{
		printf("Name: %s\n", tmp->name);
		tmp = tmp->next;
	}
}

int	main(void)
{
	person name1;
	person name2;
	person name3;

	person *head;

	name1.name = "Mama";
	name2.name = "Papa";
	name3.name = "Nils";

	// head = &name1;
	// name1.next = &name2;
	// name2.next = &name3;
	// name3.next = NULL;

	head = &name2;
	name2.next = &name1;
	name1.next = &name3;
	name3.next = NULL;

	ft_print_names(head);
}
