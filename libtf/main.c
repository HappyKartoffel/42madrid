#include <stdio.h>
#include <stdlib.h>
#include "libtf.h"  // Tu cabecera con los prototipos

int main(void)
{
    char buffer[50];

    // ft_atoi
    printf("ft_atoi(\"42\") = %d\n", ft_atoi("42"));

    // ft_bzero
    char bzero_test[] = "Hello";
    ft_bzero(bzero_test, 3);
    printf("ft_bzero(\"Hello\", 3) = \"%s\" (ver bytes: %x %x %x)\n", bzero_test, bzero_test[0], bzero_test[1], bzero_test[2]);

    // ft_calloc
    int *calloc_test = ft_calloc(5, sizeof(int));
    printf("ft_calloc(5, sizeof(int)) = ");
    for (int i = 0; i < 5; i++) printf("%d ", calloc_test[i]);
    printf("\n");
    free(calloc_test);

    // Caracteres
    printf("ft_isalnum('A') = %d\n", ft_isalnum('A'));
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
    printf("ft_isascii(127) = %d\n", ft_isascii(127));
    printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));
    printf("ft_isprint(' ') = %d\n", ft_isprint(' '));

    // ft_memchr
    char mem_test[] = "abcdef";
    printf("ft_memchr(\"abcdef\", 'd', 6) = %s\n", (char *)ft_memchr(mem_test, 'd', 6));

    // ft_memcmp
    printf("ft_memcmp(\"abc\", \"abd\", 2) = %d\n", ft_memcmp("abc", "abd", 2));
    printf("ft_memcmp(\"abc\", \"abd\", 3) = %d\n", ft_memcmp("abc", "abd", 3));

    // ft_memcpy
    char dest1[10];
    ft_memcpy(dest1, "12345", 6);
    printf("ft_memcpy(dest, \"12345\", 6) = %s\n", dest1);

    // ft_memmove (overlapping)
    char overlap[] = "123456789";
    ft_memmove(overlap + 2, overlap, 5);
    printf("ft_memmove(overlap+2, overlap, 5) = %s\n", overlap);

    // ft_memset
    char memset_test[10] = "abcdefghi";
    ft_memset(memset_test, '*', 4);
    printf("ft_memset(memset_test, '*', 4) = %s\n", memset_test);

    // ft_strchr
    printf("ft_strchr(\"hello\", 'l') = %s\n", ft_strchr("hello", 'l'));

    // ft_strdup
    char *dup = ft_strdup("duplicate");
    printf("ft_strdup(\"duplicate\") = %s\n", dup);
    free(dup);

    // ft_strlcat
    char str1[20] = "Hello ";
    char str2[] = "World";
    printf("ft_strlcat(\"Hello \", \"World\") = %lu, result: %s\n", ft_strlcat(str1, str2, sizeof(str1)), str1);

    // ft_strlcpy
    char str3[10];
    printf("ft_strlcpy(str3, \"copy\", 10) = %lu, result: %s\n", ft_strlcpy(str3, "copy", 10), str3);

    // ft_strlen
    printf("ft_strlen(\"length\") = %lu\n", ft_strlen("length"));

    // ft_strncmp
    printf("ft_strncmp(\"abc\", \"abd\", 2) = %d\n", ft_strncmp("abc", "abd", 2));
    printf("ft_strncmp(\"abc\", \"abd\", 3) = %d\n", ft_strncmp("abc", "abd", 3));

    // ft_strnstr
    printf("ft_strnstr(\"Hello World\", \"World\", 11) = %s\n", ft_strnstr("Hello World", "World", 11));

    // ft_strrchr
    printf("ft_strrchr(\"hello\", 'l') = %s\n", ft_strrchr("hello", 'l'));

    // ft_tolower / ft_toupper
    printf("ft_tolower('A') = %c\n", ft_tolower('A'));
    printf("ft_toupper('a') = %c\n", ft_toupper('a'));

    return 0;
}
