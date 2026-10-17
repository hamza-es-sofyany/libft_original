#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	unsigned char	*ptr;
	ptr = s;

	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

int main(void)
{
    int             cases[5] = {65, 257, -1, 0x1AB, 256};
    size_t          n = 2;
    int             k;
    int             i;
    unsigned char   a[8];
    unsigned char   b[8];

    k = 0;
    while (k < 3)
    {
        i = 0;
        while (i < 8)
        {
            a[i] = i + 1;
            b[i] = i + 1;
            i++;
        }
        memset(a, cases[k], n);
        ft_memset(b, cases[k], n);
        printf("c = %d\n", cases[k]);
        i = 0;
        while (i < 8)
            printf("%d ", a[i++]);
        printf(" <- memset\n");
        i = 0;
        while (i < 8)
            printf("%d ", b[i++]);
        printf(" <- ft_memset\n");
        k++;
    }
    return (0);
}
