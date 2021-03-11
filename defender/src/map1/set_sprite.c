/*
** EPITECH PROJECT, 2020
** sprite
** File description:
** sprite
*/

#include "../../include/rpg.h"

void set_mission(adventure *adv, button *ptr)
{
    adv->back_t[7] = sfTexture_createFromFile("images/map1.jpg", NULL);
    adv->back_s[7] = sfSprite_create();
    sfSprite_setTexture(adv->back_s[7], adv->back_t[7], sfTrue);
    sfSprite_setScale(adv->back_s[7], (sfVector2f){1, 0.9});
}