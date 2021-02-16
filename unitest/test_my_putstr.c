/*
** EPITECH PROJECT, 2021
** test
** File description:
** my_putstr
*/

#include <unistd.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void my_putstr(char *str);

void  redirect_all_std(void)
{
    cr_redirect_stdout ();
    cr_redirect_stderr ();
}

Test(my_putstr , simple_string , .init = redirect_all_std)
{
    my_putstr("hello  world");
    cr_assert_stdout_eq_str("hello  world");
}

Test(my_putstr1 , simple_string , .init = redirect_all_std)
{
    my_putstr("hicham a un GPA 3.00");
    cr_assert_stdout_eq_str("hicham a un GPA 3.00");
}
