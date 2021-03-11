/*
** EPITECH PROJECT, 2020
** sprite
** File description:
** sprite
*/

#include "../../include/rpg.h"

void set_parametre(adventure *adv, button *ptr)
{
    adv->back_t[3] = sfTexture_createFromFile("images/menu.jpg", NULL);
    adv->back_s[3] = sfSprite_create();
    sfSprite_setTexture(adv->back_s[3], adv->back_t[3], sfTrue);
    sfSprite_setScale(adv->back_s[3], (sfVector2f){1, 1});
}