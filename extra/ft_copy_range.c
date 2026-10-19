#include "../libft.h"

char *ft_copy_range(char const *s, size_t from, size_t to)
{
    size_t  i,len,len_s;
    char    *str;

    len_s = ft_strlen(s);
    if (to > len_s || from > to || from > len_s)
        return (NULL);
    
    len = to - from + 1;
    str = malloc(len);
    if (!str)
        return (NULL);
    
    i = 0;
    while (from < to)
    {
        
        str[i] = s[from];
        i++;
        from++;
    }
    str[i] = '\0';
    return (str);

}