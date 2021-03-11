/*
** EPITECH PROJECT, 2020
** sprite
** File description:
** sprite
*/

#include "../../include/rpg.h"

void set_help(adventure *adv, button *ptr)
{
    adv->back_t[4] = sfTexture_createFromFile("images/mission.jpg", NULL);
    adv->back_s[4] = sfSprite_create();
    sfSprite_setTexture(adv->back_s[4], adv->back_t[4], sfTrue);
    sfSprite_setScale(adv->back_s[4], (sfVector2f){0.9, 0.9});
}