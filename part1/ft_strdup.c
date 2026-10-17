#include <stdio.h>
#include <string.h>
#include "../libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
    size_t  i;
    size_t  len;
    char    *st;
    char    *str;
    
    st = (char *)s;
    len = ft_strlen(st);
    str = malloc(len + 1);
    if (!str)
        return (NULL);
    
    i = 0;
    while (s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main(void)
{
    char    a[30] = "mutable";
    char    b[30] = "";
    char    c[30] = "abc\0def";
    char    *e1;
    char    *e2;
    char    *e3;

    printf("1  \"%%s %%d\"            real: [%s]  ft: [%s]\n", strdup("%s %d"), ft_strdup("%s %d"));
    printf("2  \"\\\\\"               real: [%s]  ft: [%s]\n", strdup("\\"), ft_strdup("\\"));
    printf("3  \"\\\"quoted\\\"\"        real: [%s]  ft: [%s]\n", strdup("\"quoted\""), ft_strdup("\"quoted\""));
    printf("4  \"'single'\"         real: [%s]  ft: [%s]\n", strdup("'single'"), ft_strdup("'single'"));
    printf("5  \"abc\\0def\" (c)     real: [%s]  ft: [%s]\n", strdup(c), ft_strdup(c));
    printf("6  \"\" (b)             real: [%s]  ft: [%s]\n", strdup(b), ft_strdup(b));
    printf("7  \"\\x41\\x42\\x43\"       real: [%s]  ft: [%s]\n", strdup("\x41\x42\x43"), ft_strdup("\x41\x42\x43"));
    printf("8  \"\\a\\b\"             real len: %zu  ft len: %zu\n", strlen(strdup("\a\b")), strlen(ft_strdup("\a\b")));
    printf("9  \"                    \" (20 spaces) real: [%s]  ft: [%s]\n", strdup("                    "), ft_strdup("                    "));
    printf("10 \"----------\"       real: [%s]  ft: [%s]\n", strdup("----------"), ft_strdup("----------"));
    printf("11 \"éàü\" (UTF-8)      real: [%s]  ft: [%s]\n", strdup("éàü"), ft_strdup("éàü"));
    printf("12 \"日本語\" (UTF-8)    real: [%s]  ft: [%s]\n", strdup("日本語"), ft_strdup("日本語"));
    printf("13 \"\\200\\201\\202\"      real len: %zu  ft len: %zu\n", strlen(strdup("\200\201\202")), strlen(ft_strdup("\200\201\202")));
    printf("14 \"a\" x 100         real len: %zu  ft len: %zu\n",
        strlen(strdup("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa")),
        strlen(ft_strdup("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa")));
    printf("15 \"\\n\\n\\n\"           real len: %zu  ft len: %zu\n", strlen(strdup("\n\n\n")), strlen(ft_strdup("\n\n\n")));
    printf("16 \"0123456789\"       real: [%s]  ft: [%s]\n", strdup("0123456789"), ft_strdup("0123456789"));
    printf("17 \"NULL\"             real: [%s]  ft: [%s]\n", strdup("NULL"), ft_strdup("NULL"));
    printf("18 \"a\\tb\\tc\"          real: [%s]  ft: [%s]\n", strdup("a\tb\tc"), ft_strdup("a\tb\tc"));
    printf("19 \"[]{}()<>\"         real: [%s]  ft: [%s]\n", strdup("[]{}()<>"), ft_strdup("[]{}()<>"));

    e1 = ft_strdup(a);
    e2 = ft_strdup(a);
    e3 = ft_strdup(e1);
    a[0] = 'X';
    e1[1] = 'Y';
    printf("20 independence: a [%s]  e1 [%s]  e2 [%s]  e3 [%s]\n", a, e1, e2, e3);
    printf("   expected:     a [Xutable]  e1 [mYtable]  e2 [mutable]  e3 [mutable]\n");
    printf("   addresses differ: e1!=e2 %s  e2!=e3 %s  e1!=a %s\n",
        e1 != e2 ? "YES" : "NO", e2 != e3 ? "YES" : "NO", e1 != a ? "YES" : "NO");
    return (0);
}