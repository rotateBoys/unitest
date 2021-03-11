/*
** EPITECH PROJECT, 2020
** sprite
** File description:
** sprite
*/

#include "../../include/rpg.h"

void set_aventure(adventure *adv, button *ptr)
{
    adv->back_t[5] = sfTexture_createFromFile("images/map4.jpg", NULL);
    adv->back_s[5] = sfSprite_create();
    sfSprite_setTexture(adv->back_s[5], adv->back_t[5], sfTrue);
    sfSprite_setScale(adv->back_s[5], (sfVector2f){1, 0.9});
}