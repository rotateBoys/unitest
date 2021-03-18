/*
** EPITECH PROJECT, 2020
** sprite
** File description:
** sprite
*/

#include "../../include/rpg.h"

void set_combat(adventure *adv, button *ptr)
{
    adv->clock = sfClock_create();
    adv->back_t[6] = sfTexture_createFromFile("images/map3.jpg", NULL);
    adv->back_s[6] = sfSprite_create();
    sfSprite_setTexture(adv->back_s[6], adv->back_t[6], sfTrue);
    sfSprite_setScale(adv->back_s[6], (sfVector2f){1, 0.9});
}
