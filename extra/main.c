#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strtrim(char const *s1, char const *set);

static void test_trim(int n, char const *s1,
        char const *set, char const *expected)
{
    char    *result;
    int     passed;

    result = ft_strtrim(s1, set);
    passed = (result != NULL && strcmp(result, expected) == 0);

    printf("Test %02d | Expected: \"%s\" | Returned: \"%s\" | %s\n",
        n, expected, result ? result : "NULL",
        passed ? "PASS" : "FAIL");
    free(result);
}

int main(void)
{
    test_trim(1, "xxhelloxx", "x", "hello");
    test_trim(2, "xyhelloyx", "xy", "hello");
    test_trim(3, "  \tHello World\n  ", " \t\n", "Hello World");
    test_trim(4, "hello", "x", "hello");
    test_trim(5, "xxxx", "x", "");
    test_trim(6, "", "x", "");
    test_trim(7, "hello", "", "hello");
    test_trim(8, "xhelloxworldx", "x", "helloxworld");
    test_trim(9, "!!!abc!!!def!!!", "!", "abc!!!def");
    test_trim(10, "ababHelloabab", "ab", "Hello");

    test_trim(11, "abcde", "abcde", "");
    test_trim(12, "0001234000", "0", "1234");
    test_trim(13, "  abcHello cba  ", " abc", "Hello");
    test_trim(14, "###hello##world###", "#", "hello##world");
    test_trim(15, "  -_hello_-  ", " -_", "hello");
    test_trim(16, "aaaabaaaa", "a", "b");
    test_trim(17, "aabcaad", "ad", "bc");
    test_trim(18, "xyzHellozyx", "xyz", "Hello");
    test_trim(19, "aaabbbcccaaa", "a", "bbbccc");
    test_trim(20, "123abc321", "123", "abc");

    test_trim(21, "abXYabZab", "ab", "XYabZ");
    test_trim(22, "___middle___", "_", "middle");
    test_trim(23, "___middle__x", "_", "middle__x");
    test_trim(24, "xxyxx", "x", "y");
    test_trim(25, "  A B  ", " ", "A B");
    test_trim(26, "\t\nhello\n\t", "\t\n ", "hello");
    test_trim(27, "\r\rtext\r\r", "\r ", "text");
    test_trim(28, "abab", "ab", "");
    test_trim(29, "baac", "abc", "");
    test_trim(30, "zzabczz", "z", "abc");

    test_trim(31, "zzabczz", "abz", "c");
    test_trim(32, "   ", " ", "");
    test_trim(33, "a", "a", "");
    test_trim(34, "a", "b", "a");
    test_trim(35, "a", "", "a");
    test_trim(36, "abcdef", "abf", "cde");
    test_trim(37, "0123456789", "09", "12345678");
    test_trim(38, "this is a test", " ", "this is a test");
    test_trim(39, "xxabxx", "x", "ab");
    test_trim(40, "aabbccbb", "ab", "cc");

    return (0);
}