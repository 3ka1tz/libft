#include "../include/libft.h"

void ft_lstadd_back(t_list **lst, t_list *new_node)
{
    if (!lst || !new_node)
        return;

    if (*lst == NULL)
    {
        *lst = new_node;
        return;
    }

    t_list *last = ft_lstlast(*lst);
    last->next = new_node;
}
