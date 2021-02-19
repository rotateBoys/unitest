/*
** EPITECH PROJECT, 2021
** unit
** File description:
** test
*/

#include <criterion/criterion.h>

int my_strlen(char const *str);

Test(my_strlen, string_length)
{
    cr_assert_eq(my_strlen("papa\n"), 5);
}
