/*
** EPITECH PROJECT, 2021
** unitest
** File description:
** unitest
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdout ();
    cr_redirect_stderr ();
}

Test(my_put_nbr, positive_number, .init = redirect_all_std)
{
    my_put_nbr(45);
    cr_assert_stdout_eq_str("45");
}

Test(my_put_nbr, negative, .init = redirect_all_std)
{
    my_put_nbr(-5487);
    cr_assert_stdout_eq_str("-5487");
}

Test(my_put_nbr, null_number, .init = redirect_all_std)
{
    my_put_nbr(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_nbr, limit_of_int, .init = redirect_all_std)
{
    my_put_nbr(-2147483648);
    cr_assert_stdout_eq_str("-2147483648");
}
