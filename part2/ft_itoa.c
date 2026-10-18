#include "libft.h"

char *ft_itoa(int n)
{
    size_t  len;
    long     nb;
    char    *str;
    
    len = 0;
    nb = n;
    if (nb <= 0)
        len++;
    while (nb != 0)
    {
        nb /= 10;
        len++;
    }
    str = malloc (len + 1);
    if (!str)
        return (NULL);
    
    str[len] = '\0';
    nb = n;
    if (nb < 0)
        nb *= -1;
    
    
    while (0 < len)
    {
        len--;
        str[len] = (nb % 10) + '0';
        nb /= 10;
    }
    if (n < 0)
        str[0] = '-';
    return (str);
    
}