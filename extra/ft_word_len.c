#include "../libft.h"

size_t ft_word_len(char const *s, char c)
{
    size_t  i;
    size_t  count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            count = i;
            break;
        }
        i++;
    }
    if (count != 0)
        return (count);
    
    return (i);
}