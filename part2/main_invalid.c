#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strtrim(char const *s1, char const *set);

int main(int argc, char **argv)
{
    char    *result;

    if (argc != 2)
    {
        printf("Usage: ./test_invalid 1|2|3|4\n");
        return (1);
    }
    if (strcmp(argv[1], "1") == 0)
        result = ft_strtrim(NULL, "x");
    else if (strcmp(argv[1], "2") == 0)
        result = ft_strtrim("hello", NULL);
    else if (strcmp(argv[1], "3") == 0)
        result = ft_strtrim(NULL, NULL);
    else if (strcmp(argv[1], "4") == 0)
        result = ft_strtrim(NULL, "");
    else
    {
        printf("Invalid test number\n");
        return (1);
    }
    printf("Returned: %s\n", result ? result : "NULL");
    free(result);
    return (0);
}