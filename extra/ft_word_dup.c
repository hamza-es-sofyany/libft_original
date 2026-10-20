#include "../libft.h"

char *ft_word_dup(char const *s, size_t len)
{
    size_t  i;
    char    *str;

    str = malloc(len + 1);
    if (!str)
        return (NULL);
    
    i = 0;
    while (i < len && s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}