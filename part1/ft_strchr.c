#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
    size_t  i;
    unsigned char   bt;
    const unsigned char *ptr;

    i = 0;
    bt = c;
    ptr = (const unsigned char *)s;
    while (ptr[i])
    {
        if (ptr[i] == bt)
            return ((char *)&ptr[i]);
        i++;
    }
    if (bt == '\0')
        return ((char *)&ptr[i]);
    return (NULL);
}

int main(void)
{
    const char *s = "hello 42 world";

    printf("ft = %p   real = %p\n", (void *)ft_strchr(s, 'h'), (void *)strchr(s, 'h'));
    printf("ft = %p   real = %p\n", (void *)ft_strchr(s, 'e'), (void *)strchr(s, 'e'));
    printf("ft = %p   real = %p\n", (void *)ft_strchr(s, 'l'), (void *)strchr(s, 'l'));
    printf("ft = %p   real = %p\n", (void *)ft_strchr(s, '4'), (void *)strchr(s, '4'));
    printf("ft = %p   real = %p\n", (void *)ft_strchr(s, '2'), (void *)strchr(s, '2'));
    printf("ft = %p   real = %p\n", (void *)ft_strchr(s, 'd'), (void *)strchr(s, 'd'));
    printf("ft = %p   real = %p\n", (void *)ft_strchr(s, 'z'), (void *)strchr(s, 'z'));
    printf("ft = %p   real = %p\n", (void *)ft_strchr(s, '\0'), (void *)strchr(s, '\0'));
    return (0);
}