/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-jehovany.affagnon
** File description:
** test.c
*/

#include "../include/sokoban.h"

Test(test , my_getnbr , .init = redirect_all_std)
{
    cr_assert_eq(my_getnbr("1500"), 1500);
}

Test(main2 , my_getnbr , .init = redirect_all_std)
{
cr_assert_eq(my_getnbr("-1500"), -1500);
}

Test(main3 , my_getnbr , .init = redirect_all_std)
{
    cr_assert_eq(my_getnbr("54ab"), 54);
}

Test(main4 , my_getnbr , .init = redirect_all_std)
{
    cr_assert_eq(my_getnbr("ab45"), 0);
}

Test(main5 , my_getnbr , .init = redirect_all_std)
{
    cr_assert_eq(my_getnbr("+150"), 150);
}