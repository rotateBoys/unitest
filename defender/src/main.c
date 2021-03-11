/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "../include/rpg.h"

void usage(void)
{
    my_putchar('\n');
    my_putstr("Finite rpg created with CSFML.\n");
    my_putstr("USAGE\n");
    my_putstr("  ./my_rpg");
}

int main(int ac, char **av)
{
    adventure adv;
    button ptr;

    if (ac != 1 && ac != 2)
        return (84);
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        usage();
        return (0);
    }
    else if (ac == 2 && my_strcmp(av[1], "-h") != 0)
        return (84);
    accueil_body(&adv, &ptr);
    return (0);
}