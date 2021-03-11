/*
** EPITECH PROJECT, 2020
** sprite
** File description:
** sprite
*/

#include "../../include/rpg.h"

void set_accueil(adventure *adv, button *ptr)
{
    adv->back_t[0] = sfTexture_createFromFile("images/game.jpg", NULL);
    adv->back_s[0] = sfSprite_create();
    sfSprite_setTexture(adv->back_s[0], adv->back_t[0], sfTrue);
    sfSprite_setScale(adv->back_s[0], (sfVector2f){0.6, 0.65});

    adv->point_t = sfTexture_createFromFile("images/cursor.png", NULL);
    adv->point_s = sfSprite_create();
    sfSprite_setTexture(adv->point_s, adv->point_t, sfTrue);
    sfSprite_setScale(adv->point_s, (sfVector2f){0.7, 0.7});
}