#include "../libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *next2;

    while (*lst)
    {
        next2 = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst =next2;
    }
}