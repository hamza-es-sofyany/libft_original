#include "../libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list  *next;
    while (lst)
    {
        next = lst->next;
        f(lst->content);
        lst = next;
    }
}