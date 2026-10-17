#include <stdio.h>
#include <string.h>
#include "../libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    if (little[0] == '\0')
        return ((char *)big);
    
    i = 0;
    
    while (i < len && big[i])
    {
        j = 0;
        while ((i + j) < len && little[j] && big[i + j] == little[j])
            j++;
        if (little[j] == '\0')
            return ((char *)&big[i]);
        i++;
    }
    return (NULL);
}

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	*result;

	printf("Test 1: ");
	result = ft_strnstr("Hello World", "World", 11);
	printf("%s\n", result ? result : "NULL");

	printf("Test 2: ");
	result = ft_strnstr("Hello World", "xyz", 11);
	printf("%s\n", result ? result : "NULL");

	printf("Test 3: ");
	result = ft_strnstr("Hello World", "World", 5);
	printf("%s\n", result ? result : "NULL");

	printf("Test 4: ");
	result = ft_strnstr("abcdef", "", 6);
	printf("%s\n", result ? result : "NULL");

	printf("Test 5: ");
	result = ft_strnstr("abcdef", "a", 6);
	printf("%s\n", result ? result : "NULL");

	printf("Test 6: ");
	result = ft_strnstr("abcdef", "f", 6);
	printf("%s\n", result ? result : "NULL");

	printf("Test 7: ");
	result = ft_strnstr("abcdef", "abc", 0);
	printf("%s\n", result ? result : "NULL");

	printf("Test 8: ");
	result = ft_strnstr("abcdef", "abc", 3);
	printf("%s\n", result ? result : "NULL");

	printf("Test 9: ");
	result = ft_strnstr("abcdef", "abcd", 3);
	printf("%s\n", result ? result : "NULL");

	printf("Test 10: ");
	result = ft_strnstr("abcdef", "de", 5);
	printf("%s\n", result ? result : "NULL");

	printf("Test 11: ");
	result = ft_strnstr("abcabc", "cab", 6);
	printf("%s\n", result ? result : "NULL");

	printf("Test 12: ");
	result = ft_strnstr("aaaaab", "aaab", 6);
	printf("%s\n", result ? result : "NULL");

	printf("Test 13: ");
	result = ft_strnstr("abababab", "abab", 8);
	printf("%s\n", result ? result : "NULL");

	printf("Test 14: ");
	result = ft_strnstr("abcde", "cd", 4);
	printf("%s\n", result ? result : "NULL");

	printf("Test 15: ");
	result = ft_strnstr("abcde", "cd", 3);
	printf("%s\n", result ? result : "NULL");

	printf("Test 16: ");
	result = ft_strnstr("abc", "abcd", 10);
	printf("%s\n", result ? result : "NULL");

	printf("Test 17: ");
	result = ft_strnstr("", "a", 5);
	printf("%s\n", result ? result : "NULL");

	printf("Test 18: ");
	result = ft_strnstr("", "", 0);
	printf("%s\n", result ? result : "NULL");

	printf("Test 19: ");
	result = ft_strnstr("abcabc", "abc", 3);
	printf("%s\n", result ? result : "NULL");

	printf("Test 20: ");
	result = ft_strnstr("mississippi", "issip", 11);
	printf("%s\n", result ? result : "NULL");

	return (0);
}
