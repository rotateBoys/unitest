/*
** EPITECH PROJECT, 2021
** test_my_strcpy.c
** File description:
** test
*/

#include <criterion/criterion.h>
#include "../my_strcpy.c"

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

Test(my_strcpy, test_my_strcpy)
{
    char *str = "Murielle";
    char *dest;

    cr_assert_str_eq(my_strcpy(dest, str), "Murielle");
}

Test(my_strcpy, test_mystrcpy)
{
    char *str = "Hello Murielle";
    char *dest;

    cr_assert_str_neq(my_strcpy(dest, str), "Murielle");
}

Test(my_strcpy, test3_mystrcpy)
{
    char *str = "GPA 4";
    char *dest;

    cr_assert_str_eq(my_strcpy(dest, str), "GPA 4");
}
