#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strequ(char const *s1, char const *s2)
{
    size_t  i;

    i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (0);
        i++;
    }
    if (s1[i] != s2[i])
        return (0);
    return (1);
}
int main(void)
{
    char a[] = "hello";
    char b[] = "hello";

    printf("1  abc/abc      : %d/%d\n", ft_strequ("abc", "abc"), strcmp("abc", "abc") == 0);
    printf("2  abc/abd      : %d/%d\n", ft_strequ("abc", "abd"), strcmp("abc", "abd") == 0);
    printf("3  abc/ab       : %d/%d\n", ft_strequ("abc", "ab"), strcmp("abc", "ab") == 0);
    printf("4  ab/abc       : %d/%d\n", ft_strequ("ab", "abc"), strcmp("ab", "abc") == 0);
    printf("5  empty/empty  : %d/%d\n", ft_strequ("", ""), strcmp("", "") == 0);
    printf("6  empty/a      : %d/%d\n", ft_strequ("", "a"), strcmp("", "a") == 0);
    printf("7  a/empty      : %d/%d\n", ft_strequ("a", ""), strcmp("a", "") == 0);
    printf("8  abc/ABC      : %d/%d\n", ft_strequ("abc", "ABC"), strcmp("abc", "ABC") == 0);
    printf("9  same content : %d/%d\n", ft_strequ(a, b), strcmp(a, b) == 0);
    printf("10 last differs : %d/%d\n", ft_strequ("hello world", "hello worle"), strcmp("hello world", "hello worle") == 0);
    return (0);
}