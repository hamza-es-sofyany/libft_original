#include <stdio.h>
#include <string.h>
char *ft_strcpy(char *dest, const char *src)
{
    size_t  i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char dest[10];
    char src[4] = "abc";

    strcpy(dest, src);
    printf("%s\n", dest);
    printf("%d %d %d %d\n", dest[0], dest[1], dest[2], dest[3]);
}