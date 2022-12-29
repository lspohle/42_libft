// Note
//  Prototyped as void ft_lstclear(t_list **lst, void (*del)(void*))
//  -> lst: the address of a pointer to a node
//  -> del: the address of the function used to delete the content
//  -> deletes and frees the given node and every successor of that node, 
//     using the function ’del’ and free(3)
//  -> finally, the pointer to the list must be set to NULL
//  -> the memory of ’next’ must not be freed
//  -> external functs: free
//  -> return: none

#include "libft.h"

// void ft_free_content(void *content)
// {
//     free(content);
// }

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;

    while (*lst != NULL)
    {
        del((*lst)->content);
        tmp = *lst;
        *lst = tmp->next;
        free(tmp);
    }
    *lst = NULL;
}
