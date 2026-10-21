#include "../libft.h"

unsigned int ft_lstsize(t_list *lst)
{
    unsigned int  i;

    i = 0;
    while (lst)
    {
        i++;
        lst = lst->next;
    }
    return (i);
}