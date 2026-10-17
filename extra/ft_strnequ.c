#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n && s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (0);
        
        i++;
    }
    if (s1[i] == '\0' || s2[i] == '\0')
        return (1);
    
    if (s1[i - 1] != s2[i- 1])
        return (0);
    return (1);
    
    
}
int main(void)
{
    printf("1  abc/abd n=2        : %d/%d\n", ft_strnequ("abc", "abd", 2), strncmp("abc", "abd", 2) == 0);
    printf("2  abc/abd n=3        : %d/%d\n", ft_strnequ("abc", "abd", 3), strncmp("abc", "abd", 3) == 0);
    printf("3  abc/ab n=2         : %d/%d\n", ft_strnequ("abc", "ab", 2), strncmp("abc", "ab", 2) == 0);
    printf("4  abc/ab n=3         : %d/%d\n", ft_strnequ("abc", "ab", 3), strncmp("abc", "ab", 3) == 0);
    printf("5  abc/abc n=10       : %d/%d\n", ft_strnequ("abc", "abc", 10), strncmp("abc", "abc", 10) == 0);
    printf("6  abc/xyz n=0        : %d/%d\n", ft_strnequ("abc", "xyz", 0), strncmp("abc", "xyz", 0) == 0);
    printf("7  empty/empty n=5    : %d/%d\n", ft_strnequ("", "", 5), strncmp("", "", 5) == 0);
    printf("8  empty/a n=1        : %d/%d\n", ft_strnequ("", "a", 1), strncmp("", "a", 1) == 0);
    printf("9  last differs n=10  : %d/%d\n", ft_strnequ("hello world", "hello worle", 10), strncmp("hello world", "hello worle", 10) == 0);
    printf("10 last differs n=11  : %d/%d\n", ft_strnequ("hello world", "hello worle", 11), strncmp("hello world", "hello worle", 11) == 0);
    return (0);
}