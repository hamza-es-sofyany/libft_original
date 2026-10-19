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

char *ft_strtrim(char const *s1, char const *set)
{
    size_t  start, end;
    char    *str;

    if (!s1 || !set)
        return (NULL);

    start = ft_trim_start(s1, set);
    end = ft_trim_end(s1, set, start);

    str = ft_copy_range(s1, start, end);
    return(str);
}