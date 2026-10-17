#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_strclr(char *s)
{
    size_t  i;

    i = 0;
    while (s[i])
    {
        s[i] = 0;
        i++;
    }
    
}
int main(void)
{
    char s[4] = "abc";

    ft_strclr(s);
    printf("%d %d %d %d\n", s[0], s[1], s[2], s[3]);
    return (0);
}