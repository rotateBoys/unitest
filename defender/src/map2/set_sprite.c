/*
** EPITECH PROJECT, 2020
** sprite
** File description:
** sprite
*/

#include "../../include/rpg.h"

void set_map2(adventure *adv, button *ptr)
{
    adv->clock = sfClock_create();
    adv->back_t[8] = sfTexture_createFromFile("images/map2.jpg", NULL);
    adv->back_s[8] = sfSprite_create();
    sfSprite_setTexture(adv->back_s[8], adv->back_t[8], sfTrue);
    sfSprite_setScale(adv->back_s[8], (sfVector2f){1, 0.9});
}
