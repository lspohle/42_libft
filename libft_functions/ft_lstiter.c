// Note
//  Prototyped as void ft_lstiter(t_list *lst, void (*f)(void*))
//  -> lst: the address of a pointer to a node
//  -> del: the address of the function used to iterate on the list
//  -> deletes and frees the given node and every successor of that node, 
//     using the function ’del’ and free(3)
//  -> iterates the list 'lst' and applies the function 'f' on the content of each node
//  -> the memory of ’next’ must not be freed
//  -> external functs: none
//  -> return: none

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void*))
{
    while (lst != NULL)
    {
        f(lst->content);
        lst = lst->next;
    }
}