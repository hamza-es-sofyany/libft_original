#include "../libft.h"
size_t	ft_trim_start(char const *s1, char const *set);


size_t ft_trim_end(char const *s1, char const *set, size_t start)
{
    size_t  i, j, fon;

    i = ft_strlen(s1);
    while (i > start)
    {
        j = 0;
        fon = 0;
        while (set[j])
        {
            if (s1[i - 1] == set[j])
                fon = 1;
            j++;
        }
        if (fon == 0)
            break;
        i--;
    }
    return (i);
}