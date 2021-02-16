/*
** EPITECH PROJECT, 2021
** test_my_strdup
** File description:
** my_strdup
*/

#include <stdlib.h>
#include  <criterion/criterion.h>

void my_strlen(char *str);

char *my_strdup(char  const *src);

void my_putstr(char *str);

Test(my_strdup, simple_string)
{
    char *str = my_strdup("hello  world");

    cr_assert_str_eq("hello  world", str);
}

Test(my_strdup1, simple_string)
{
    char *str = my_strdup("hicham a un GPA 3.00");

    cr_assert_str_eq("hicham a un GPA 3.00", str);
}
