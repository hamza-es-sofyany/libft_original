#include "../libft.h"

void ft_free_all(char **arr, size_t count)
{
    size_t  i;
    i = 0;
    while (i < count)
    {
        free(arr[i]);
        i++;
    }
    free(arr);
}