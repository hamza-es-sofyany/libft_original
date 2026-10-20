#include "../libft.h"

size_t ft_count_words(char const *s, char c)
{
    size_t  i;
    size_t  count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
            count++;
        i++;
    }
    return (count);
}