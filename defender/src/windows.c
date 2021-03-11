/*
** EPITECH PROJECT, 2020
** windows
** File description:
** windows
*/

#include "../include/rpg.h"

void the_window(adventure *adv)
{
    sfVideoMode mode = {1100, 650, 32};

    adv->window = sfRenderWindow_create(mode, "window", sfResize
    | sfClose, NULL);
}