#include "../libft.h"
#include <stdio.h>


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

void print_words(char const *s, char c)
{
    size_t  i, len, j;

    i = 0;
    len = 0;
    
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (!s[i])
            break;
        len = ft_word_len(&s[i], c);
        j = 0;
        while (j < len)
        {
            printf("%c", s[i + j]);
            j++;
        }
        i += len;
        printf("\n");
    }
}