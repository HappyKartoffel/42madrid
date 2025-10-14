#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
    // ft_atoi
    printf("ft_atoi(\"42\") = %d\n", ft_atoi("42"));

    // bzero
    char b[10] = "abcdef";
    bzero(b, 3);
    printf("bzero: [%c%c%c%c%c%c]\n", b[0], b[1], b[2], b[3], b[4], b[5]);

    // ft_calloc
    int *c = ft_calloc(5, sizeof(int));
    printf("ft_calloc: ");
    for (int i = 0; i < 5; i++) printf("%d ", c[i]);
    free(c);
    printf("\n");

    // ft_isalnum
    printf("ft_isalnum('a') = %d\n", ft_isalnum('a'));
    printf("ft_isalnum('1') = %d\n", ft_isalnum('1'));
    printf("ft_isalnum('!') = %d\n", ft_isalnum('!'));

    // ft_isalpha
    printf("ft_isalpha('a') = %d\n", ft_isalpha('a'));

    // ft_isascii
    printf("ft_isascii(127) = %d\n", ft_isascii(127));

    // ft_isdigit
    printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));

    // ft_isprint
    printf("ft_isprint(' ') = %d\n", ft_isprint(' '));
    printf("ft_isprint(31) = %d\n", ft_isprint(31));

    // ft_memchr
    char mem[] = "hello world";
    printf("ft_memchr = %s\n", (char *)ft_memchr(mem, 'w', 11));

    // memcmp
    printf("memcmp(\"abc\", \"abd\", 2) = %d\n", memcmp("abc", "abd", 2));

    // memcpy
    char src1[] = "123456";
    char dest1[10];
    memcpy(dest1, src1, 6);
    printf("memcpy: %s\n", dest1);

    // memmove
    char src2[] = "123456";
    memmove(src2 + 2, src2, 4);
    printf("memmove: %s\n", src2);

    // memset
    char mem2[10] = "abcdef";
    memset(mem2, 'x', 3);
    printf("memset: %s\n", mem2);

    // ft_strchr
    printf("ft_strchr(\"hello\", 'e') = %s\n", ft_strchr("hello", 'e'));

    // ft_strdup
    char *dup = ft_strdup("hola");
    printf("ft_strdup: %s\n", dup);
    free(dup);

    // ft_strlcat
    char dst1[20] = "Hola ";
    char src3[] = "Mundo";
    printf("ft_strlcat: %zu | Result: %s\n", *ft_strlcat(dst1, src3, 20), dst1);

    // strlcpy
    char dst2[10];
    size_t len = strlcpy(dst2, "prueba", 10);
    printf("strlcpy: %s | Length: %zu\n", dst2, len);

    // ft_strlen
    printf("ft_strlen(\"hola\") = %d\n", ft_strlen("hola"));

    // ft_strncmp
    printf("ft_strncmp(\"abc\", \"abd\", 3) = %d\n", ft_strncmp("abc", "abd", 3));

    // strnstr
    printf("strnstr(\"hello world\", \"world\", 11) = %s\n", strnstr("hello world", "world", 11));

    // ft_strrchr
    printf("ft_strrchr(\"banana\", 'a') = %s\n", ft_strrchr("banana", 'a'));

    // ft_tolower / ft_toupper
    printf("ft_tolower('A') = %c\n", ft_tolower('A'));
    printf("ft_toupper('a') = %c\n", ft_toupper('a'));

    return 0;
}
