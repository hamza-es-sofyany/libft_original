#include "../libft.h"

size_t ft_trim_start(char const *s1, char const *set)
{
    size_t  i, j, fon;

    i = 0;
    while (s1[i])
    {
        j = 0;
        fon = 0;
        while (set[j])
        {
            if (s1[i] == set[j])
                fon = 1;
            j++;
        }
        if (fon == 0)
            break;
        i++;
    }
    return (i);
}