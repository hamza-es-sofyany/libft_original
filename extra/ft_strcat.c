#include <stdio.h>
#include <string.h>
size_t  ft_strlen(char *str)
{
    size_t  i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strcat(char *dest, const char *src)
{
    size_t  i;
    size_t  len;

    len = ft_strlen(dest);
    i = 0;
    while (src[i])
    {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
}

int main(void)
{
    char a[16];
    char r[16];
    int  i;

    memset(a, 'x', 16); memset(r, 'x', 16);
    strcpy(a, "ab"); strcpy(r, "ab");
    ft_strcat(a, "cd"); strcat(r, "cd");
    printf("1:  ");
    i = 0;
    while (i < 16) { printf("%d/%d ", (unsigned char)a[i], (unsigned char)r[i]); i++; }
    printf("\n");

    memset(a, 'x', 16); memset(r, 'x', 16);
    strcpy(a, ""); strcpy(r, "");
    ft_strcat(a, "cd"); strcat(r, "cd");
    printf("2:  ");
    i = 0;
    while (i < 16) { printf("%d/%d ", (unsigned char)a[i], (unsigned char)r[i]); i++; }
    printf("\n");

    memset(a, 'x', 16); memset(r, 'x', 16);
    strcpy(a, "ab"); strcpy(r, "ab");
    ft_strcat(a, ""); strcat(r, "");
    printf("3:  ");
    i = 0;
    while (i < 16) { printf("%d/%d ", (unsigned char)a[i], (unsigned char)r[i]); i++; }
    printf("\n");

    memset(a, 'x', 16); memset(r, 'x', 16);
    strcpy(a, ""); strcpy(r, "");
    ft_strcat(a, ""); strcat(r, "");
    printf("4:  ");
    i = 0;
    while (i < 16) { printf("%d/%d ", (unsigned char)a[i], (unsigned char)r[i]); i++; }
    printf("\n");

    return (0);
}