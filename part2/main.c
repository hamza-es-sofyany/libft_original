#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

int main(void)
{
    char    *r;

    r = ft_itoa(0);
    printf("1 zero        expected: [0]            ft: [%s]\n", r ? r : "NULL");
    free(r);

    r = ft_itoa(1234);
    printf("2 positive    expected: [1234]         ft: [%s]\n", r ? r : "NULL");
    free(r);

    r = ft_itoa(-42);
    printf("3 negative    expected: [-42]          ft: [%s]\n", r ? r : "NULL");
    free(r);

    r = ft_itoa(INT_MAX);
    printf("4 INT_MAX     expected: [2147483647]   ft: [%s]\n", r ? r : "NULL");
    free(r);

    r = ft_itoa(INT_MIN);
    printf("5 INT_MIN     expected: [-2147483648]  ft: [%s]\n", r ? r : "NULL");
    free(r);

    return (0);
}