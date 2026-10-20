#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

char	**ft_split(char const *s, char c);

void	*__real_malloc(size_t size);

static int	g_count = 0;
static int	g_fail_at = 0;

void	*__wrap_malloc(size_t size)
{
	g_count++;
	if (g_fail_at != 0 && g_count == g_fail_at)
		return (NULL);
	return (__real_malloc(size));
}

int	main(void)
{
	char	**res;
	char	buf[512];
	size_t	i;

	g_fail_at = 0;

	g_count = 0;
	res = ft_split("hello world", ' ');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("01 | ft/expected: %s/[hello][world] | %s\n", buf,
		strcmp(buf, "[hello][world]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split("  hello  world  ", ' ');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("02 | ft/expected: %s/[hello][world] | %s\n", buf,
		strcmp(buf, "[hello][world]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split("hello", ' ');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("03 | ft/expected: %s/[hello] | %s\n", buf,
		strcmp(buf, "[hello]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split("", ' ');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("04 | ft/expected: %s/ (empty) | %s\n", res ? buf : "RETURNED NULL",
		res && i == 0 ? "OK" : "KO");
	free(res);

	g_count = 0;
	res = ft_split("     ", ' ');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("05 | ft/expected: %s/ (empty) | %s\n", res ? buf : "RETURNED NULL",
		res && i == 0 ? "OK" : "KO");
	free(res);

	g_count = 0;
	res = ft_split("a,b,,c,", ',');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("06 | ft/expected: %s/[a][b][c] | %s\n", buf,
		strcmp(buf, "[a][b][c]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split("hello world", 'x');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("07 | ft/expected: %s/[hello world] | %s\n", buf,
		strcmp(buf, "[hello world]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split("a", ' ');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("08 | ft/expected: %s/[a] | %s\n", buf,
		strcmp(buf, "[a]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split(" ", ' ');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("09 | ft/expected: %s/ (empty) | %s\n", res ? buf : "RETURNED NULL",
		res && i == 0 ? "OK" : "KO");
	free(res);

	g_count = 0;
	res = ft_split("a b", ' ');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("10 | ft/expected: %s/[a][b] | %s\n", buf,
		strcmp(buf, "[a][b]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split(" a b ", ' ');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("11 | ft/expected: %s/[a][b] | %s\n", buf,
		strcmp(buf, "[a][b]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split("   hello", ' ');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("12 | ft/expected: %s/[hello] | %s\n", buf,
		strcmp(buf, "[hello]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split("hello   ", ' ');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("13 | ft/expected: %s/[hello] | %s\n", buf,
		strcmp(buf, "[hello]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split("one two three four five", ' ');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("14 | ft/expected: %s/[one][two][three][four][five] | %s\n", buf,
		strcmp(buf, "[one][two][three][four][five]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split("a,b,c,d,e,f,g", ',');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("15 | ft/expected: %s/[a][b][c][d][e][f][g] | %s\n", buf,
		strcmp(buf, "[a][b][c][d][e][f][g]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split(",,,a,,,b,,,", ',');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("16 | ft/expected: %s/[a][b] | %s\n", buf,
		strcmp(buf, "[a][b]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split("\t\nhello\n\tworld\t", '\t');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("17 | ft/expected: %zu words/2 words | %s\n", i,
		i == 2 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split("abcabcabc", 'b');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("18 | ft/expected: %s/[a][ca][ca][c] | %s\n", buf,
		strcmp(buf, "[a][ca][ca][c]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split("aaaa", 'a');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("19 | ft/expected: %s/ (empty) | %s\n", res ? buf : "RETURNED NULL",
		res && i == 0 ? "OK" : "KO");
	free(res);

	g_count = 0;
	res = ft_split("xhellox", 'x');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("20 | ft/expected: %s/[hello] | %s\n", buf,
		strcmp(buf, "[hello]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split("a  b   c    d", ' ');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("21 | ft/expected: %s/[a][b][c][d] | %s\n", buf,
		strcmp(buf, "[a][b][c][d]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split("hello world", 'o');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("22 | ft/expected: %s/[hell][ w][rld] | %s\n", buf,
		strcmp(buf, "[hell][ w][rld]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split("a-b_c d", '-');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("23 | ft/expected: %s/[a][b_c d] | %s\n", buf,
		strcmp(buf, "[a][b_c d]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	res = ft_split("hello world", '\0');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("24 | c='\\0' | ft/expected: %s/[hello world] | %s\n", buf,
		strcmp(buf, "[hello world]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);

	g_count = 0;
	g_fail_at = 1;
	res = ft_split("hello world", ' ');
	printf("25 | malloc #1 fails (array) | ft/expected: %s/NULL | %s\n",
		res ? "ARRAY" : "NULL", res == NULL ? "OK" : "KO");

	g_count = 0;
	g_fail_at = 2;
	res = ft_split("hello world", ' ');
	printf("26 | malloc #2 fails (word 1) | ft/expected: %s/NULL | %s\n",
		res ? "ARRAY" : "NULL", res == NULL ? "OK" : "KO");

	g_count = 0;
	g_fail_at = 3;
	res = ft_split("hello world", ' ');
	printf("27 | malloc #3 fails (word 2) | ft/expected: %s/NULL | %s\n",
		res ? "ARRAY" : "NULL", res == NULL ? "OK" : "KO");

	g_count = 0;
	g_fail_at = 4;
	res = ft_split("one two three", ' ');
	printf("28 | malloc #4 fails (word 3) | ft/expected: %s/NULL | %s\n",
		res ? "ARRAY" : "NULL", res == NULL ? "OK" : "KO");

	g_count = 0;
	g_fail_at = 5;
	res = ft_split("a b c d", ' ');
	printf("29 | malloc #5 fails (word 4) | ft/expected: %s/NULL | %s\n",
		res ? "ARRAY" : "NULL", res == NULL ? "OK" : "KO");

	g_count = 0;
	g_fail_at = 99;
	res = ft_split("a b", ' ');
	buf[0] = '\0';
	i = 0;
	while (res && res[i])
	{
		strcat(buf, "["); strcat(buf, res[i]); strcat(buf, "]");
		i++;
	}
	printf("30 | malloc never fails | ft/expected: %s/[a][b] | %s\n", buf,
		strcmp(buf, "[a][b]") == 0 ? "OK" : "KO");
	while (i > 0)
		free(res[--i]);
	free(res);
	return (0);
}