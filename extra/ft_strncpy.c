#include <stdio.h>
#include <string.h>
int ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
char *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t  i;
    size_t  len_src;

    len_src = ft_strlen(src);

    if (len_src < n)
    {
        i = 0;
        while (src[i] && i < n)
        {
            dest[i] = src[i];
            i++;
        }

        dest[i] = '\0';
    }
    else
    {
        i = 0;
        while (i < n && src[i])
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
int main(void)
{
    char a[16];
    char r[16];
    int  i;

    memset(a, 'x', 16); memset(r, 'x', 16);
    ft_strncpy(a, "hello", 3); strncpy(r, "hello", 3);
    printf("1:  ");
    i = 0;
    while (i < 16) { printf("%d/%d ", (unsigned char)a[i], (unsigned char)r[i]); i++; }
    printf("\n");

    memset(a, 'x', 16); memset(r, 'x', 16);
    ft_strncpy(a, "hello", 5); strncpy(r, "hello", 5);
    printf("2:  ");
    i = 0;
    while (i < 16) { printf("%d/%d ", (unsigned char)a[i], (unsigned char)r[i]); i++; }
    printf("\n");

    memset(a, 'x', 16); memset(r, 'x', 16);
    ft_strncpy(a, "hello", 6); strncpy(r, "hello", 6);
    printf("3:  ");
    i = 0;
    while (i < 16) { printf("%d/%d ", (unsigned char)a[i], (unsigned char)r[i]); i++; }
    printf("\n");

    memset(a, 'x', 16); memset(r, 'x', 16);
    ft_strncpy(a, "hello", 10); strncpy(r, "hello", 10);
    printf("4:  ");
    i = 0;
    while (i < 16) { printf("%d/%d ", (unsigned char)a[i], (unsigned char)r[i]); i++; }
    printf("\n");

    memset(a, 'x', 16); memset(r, 'x', 16);
    ft_strncpy(a, "", 4); strncpy(r, "", 4);
    printf("5:  ");
    i = 0;
    while (i < 16) { printf("%d/%d ", (unsigned char)a[i], (unsigned char)r[i]); i++; }
    printf("\n");

    memset(a, 'x', 16); memset(r, 'x', 16);
    ft_strncpy(a, "abc", 0); strncpy(r, "abc", 0);
    printf("6:  ");
    i = 0;
    while (i < 16) { printf("%d/%d ", (unsigned char)a[i], (unsigned char)r[i]); i++; }
    printf("\n");

    memset(a, 'x', 16); memset(r, 'x', 16);
    ft_strncpy(a, "a", 2); strncpy(r, "a", 2);
    printf("7:  ");
    i = 0;
    while (i < 16) { printf("%d/%d ", (unsigned char)a[i], (unsigned char)r[i]); i++; }
    printf("\n");

    memset(a, 'x', 16); memset(r, 'x', 16);
    ft_strncpy(a, "ab\0cd", 5); strncpy(r, "ab\0cd", 5);
    printf("8:  ");
    i = 0;
    while (i < 16) { printf("%d/%d ", (unsigned char)a[i], (unsigned char)r[i]); i++; }
    printf("\n");

    memset(a, 'x', 16); memset(r, 'x', 16);
    ft_strncpy(a, "\xff\xfe", 4); strncpy(r, "\xff\xfe", 4);
    printf("9:  ");
    i = 0;
    while (i < 16) { printf("%d/%d ", (unsigned char)a[i], (unsigned char)r[i]); i++; }
    printf("\n");

    memset(a, 'x', 16); memset(r, 'x', 16);
    ft_strncpy(a, "abc", 12); strncpy(r, "abc", 12);
    printf("10: ");
    i = 0;
    while (i < 16) { printf("%d/%d ", (unsigned char)a[i], (unsigned char)r[i]); i++; }
    printf("\n");

    return (0);
}