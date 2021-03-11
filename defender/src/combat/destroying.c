/*
** EPITECH PROJECT, 2020
** destroy
** File description:
** destroy
*/

#include "../../include/rpg.h"

void destroying_c(adventure *adv, button *ptr)
{
    sfSprite_destroy(adv->back_s[6]);
    sfTexture_destroy(adv->back_t[6]);
    sfSprite_destroy(adv->point_s);
    sfTexture_destroy(adv->point_t);
    sfRenderWindow_destroy(adv->window);
}