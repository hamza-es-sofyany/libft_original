#include <stdio.h>
#include <string.h>


int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while ((i < n) && (s1[i] || s2[i]))
    {
        if (s1[i] > s2[i])
            return (1);
        else if (s1[i] < s2[i])
        {
            return (-1);
        }
        i++;
    }
    return (0);
}
int main(void)
{
    printf("%d %d\n", ft_strncmp("abc", "xyz", 0), strncmp("abc", "xyz", 0));
    return (0);
}