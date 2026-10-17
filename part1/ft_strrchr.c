#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    size_t  i;
    size_t  j;
    size_t  last;
    unsigned char   bt;
    const unsigned char *ptr;

    i = 0;
    bt = c;
    j = 0;
    ptr = (const unsigned char *)s;
    while (ptr[i])
    {
        if (ptr[i] == bt)
        {
            last = i;
            j++;
        }
        i++;
    }
    if (bt == '\0')
        return ((char *)&ptr[i]);
    else if (j > 0)
    {
        return ((char *)&ptr[last]);
    }
    return (NULL);
}


int main(void)
{
    char buf[301];

    memset(buf, 'a', 300);
    buf[300] = '\0';
    buf[280] = 'z';
    printf("ft = %ld   real = %ld\n",
        (long)(ft_strrchr(buf, 'z') - buf),
        (long)(strrchr(buf, 'z') - buf));
    return (0);
}