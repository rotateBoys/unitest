/*
** EPITECH PROJECT, 2021
** test_my_strcpy.c
** File description:
** test
*/

#include <criterion/criterion.h>

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}

char *my_strncat(char *dest, char const *src, int n)
{
    char *s = malloc(my_strlen(dest) + n + 1);
    int i = 0, j = 0;

    for (; dest[i] != '\0'; s[i] = dest[i], i++);
    for (; j < n; s[i] = src[j], i++, j++);
    return (s);
}

Test(my_strncat, test_my_strncat)
{
    char *str = "cat ";
    char *dest = "my_strn";
    dest = my_strncat(dest, str, 3);

    cr_assert_str_not_empty(dest);
    cr_assert_str_neq(dest, "");
    cr_assert_str_eq(dest, "my_strncat");
    free(dest);
}

Test(my_strncat, test_mystrncat)
{
    char *str = "World\n";
    char *dest = "Hello ";
    dest = my_strncat(dest, str, 5);

    cr_assert_str_not_empty(dest);
    cr_assert_str_neq(dest, "");
    cr_assert_str_eq(dest, "Hello World");
    free(dest);
}

Test(my_strncat, test3_mystrncat)
{
    char *str = " 4";
    char *dest = "GPA";
    dest = my_strncat(dest, str, 2);

    cr_assert_str_not_empty(dest);
    cr_assert_str_neq(dest, "");
    cr_assert_str_eq(dest, "GPA 4");
    free(dest);
}
