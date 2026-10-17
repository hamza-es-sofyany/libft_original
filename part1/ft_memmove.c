#include <stdio.h>
#include <string.h>
#include "../libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char   *ds;
    const char *sr;
    size_t  i;

    ds = dest;
    sr = src;
    i = 0;
    if (ds > sr)
    {
        while (n > 0)
        {
            n--;
            ds[n] = sr[n];
        }
    }
    else
        while (i < n)
        {
            ds[i] = sr[i];
            i++;
        }
    return (ds);
}