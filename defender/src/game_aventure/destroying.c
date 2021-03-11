/*
** EPITECH PROJECT, 2020
** destroy
** File description:
** destroy
*/

#include "../../include/rpg.h"

void destroying_g1(adventure *adv, button *ptr)
{
    sfSprite_destroy(adv->back_s[5]);
    sfTexture_destroy(adv->back_t[5]);
    sfSprite_destroy(adv->point_s);
    sfTexture_destroy(adv->point_t);
    sfRenderWindow_destroy(adv->window);
}