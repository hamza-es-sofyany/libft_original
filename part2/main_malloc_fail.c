#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char    *ft_strtrim(char const *s1, char const *set);

void    *__real_malloc(size_t size);

static int  fail_next_malloc = 1;

void    *__wrap_malloc(size_t size)
{
    if (fail_next_malloc)
    {
        fail_next_malloc = 0;
        return (NULL);
    }
    return (__real_malloc(size));
}

int main(void)
{
    char    *result;

    result = ft_strtrim("xxhelloxx", "x");
    if (result == NULL)
        printf("PASS: ft_strtrim returned NULL when malloc failed\n");
    else
    {
        printf("FAIL: Expected NULL, but got \"%s\"\n", result);
        free(result);
    }
    return (0);
}
