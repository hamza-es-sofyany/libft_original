#include <stdio.h>
#include <string.h>
#include "../libft.h"
#include <bsd/string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  len_src;

    i = 0;
    len_src = ft_strlen(src);
    if (size == 0)
        return (len_src);
    
    while (i < size - 1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len_src);
}

int main(void)
{
    char    a[8];
    char    b[8];
    size_t  r1;
    size_t  r2;

    /* 1: size 0 */
    memset(a, 'x', 8); memset(b, 'x', 8);
    r1 = ft_strlcpy(a, "hello", 0); r2 = strlcpy(b, "hello", 0);
    printf("1 ret ft/real: %zu/%zu\n", r1, r2);
    printf("ft  : %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
    printf("real: %d %d %d %d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]);

    /* 2: size 1 */
    memset(a, 'x', 8); memset(b, 'x', 8);
    r1 = ft_strlcpy(a, "hello", 1); r2 = strlcpy(b, "hello", 1);
    printf("2 ret ft/real: %zu/%zu\n", r1, r2);
    printf("ft  : %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
    printf("real: %d %d %d %d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]);

    /* 3: size 2 */
    memset(a, 'x', 8); memset(b, 'x', 8);
    r1 = ft_strlcpy(a, "hello", 2); r2 = strlcpy(b, "hello", 2);
    printf("3 ret ft/real: %zu/%zu\n", r1, r2);
    printf("ft  : %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
    printf("real: %d %d %d %d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]);

    /* 4: size smaller than the string (truncation) */
    memset(a, 'x', 8); memset(b, 'x', 8);
    r1 = ft_strlcpy(a, "abcdefghij", 4); r2 = strlcpy(b, "abcdefghij", 4);
    printf("4 ret ft/real: %zu/%zu\n", r1, r2);
    printf("ft  : %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
    printf("real: %d %d %d %d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]);

    /* 5: size == strlen */
    memset(a, 'x', 8); memset(b, 'x', 8);
    r1 = ft_strlcpy(a, "hello", 5); r2 = strlcpy(b, "hello", 5);
    printf("5 ret ft/real: %zu/%zu\n", r1, r2);
    printf("ft  : %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
    printf("real: %d %d %d %d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]);

    /* 6: size == strlen + 1 */
    memset(a, 'x', 8); memset(b, 'x', 8);
    r1 = ft_strlcpy(a, "hello", 6); r2 = strlcpy(b, "hello", 6);
    printf("6 ret ft/real: %zu/%zu\n", r1, r2);
    printf("ft  : %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
    printf("real: %d %d %d %d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]);

    /* 7: size bigger than the string */
    memset(a, 'x', 8); memset(b, 'x', 8);
    r1 = ft_strlcpy(a, "hello", 7); r2 = strlcpy(b, "hello", 7);
    printf("7 ret ft/real: %zu/%zu\n", r1, r2);
    printf("ft  : %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
    printf("real: %d %d %d %d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]);

    /* 8: empty src, size 5 */
    memset(a, 'x', 8); memset(b, 'x', 8);
    r1 = ft_strlcpy(a, "", 5); r2 = strlcpy(b, "", 5);
    printf("8 ret ft/real: %zu/%zu\n", r1, r2);
    printf("ft  : %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
    printf("real: %d %d %d %d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]);

    /* 9: empty src, size 0 */
    memset(a, 'x', 8); memset(b, 'x', 8);
    r1 = ft_strlcpy(a, "", 0); r2 = strlcpy(b, "", 0);
    printf("9 ret ft/real: %zu/%zu\n", r1, r2);
    printf("ft  : %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
    printf("real: %d %d %d %d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]);

    /* 10: empty src, size 1 */
    memset(a, 'x', 8); memset(b, 'x', 8);
    r1 = ft_strlcpy(a, "", 1); r2 = strlcpy(b, "", 1);
    printf("10 ret ft/real: %zu/%zu\n", r1, r2);
    printf("ft  : %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
    printf("real: %d %d %d %d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]);

    return (0);
}