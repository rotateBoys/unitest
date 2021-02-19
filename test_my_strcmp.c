/*
** EPITECH PROJECT, 2021
** first test
** File description:
** assert you test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_strcmp(char const *s1, char const *s2);

Test(compare_str, equal_str) {
    int value = my_strcmp("code", "code");
    cr_assert_eq(value, 0);
}

Test(compare_str, greather_str) {
    int value = my_strcmp("epitech", "EPITECH");
    cr_assert_gt(value, 0);
}

Test(compare_str, less_str) {
    int value = my_strcmp("Style", "style");
    cr_assert_lt(value, 0);
}
