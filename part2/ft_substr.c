#include "libft.h"

char *ft_substr(char const *s, unsigned int start,
size_t len)
{
    size_t  i;
    size_t  len_s1;
    size_t  len_s2;
    char    *str;

    len_s2 = ft_strlen(s);
    if (len_s2 < start)
        return (NULL);
    
    len_s1 = ft_strlen(&s[start]) + 1;
    str = malloc(len_s1);
    if (!str)
        return (NULL);
    
    i = 0;
    while (s[start + i] && i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}