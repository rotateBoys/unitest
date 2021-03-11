/*
** EPITECH PROJECT, 2020
** sprite
** File description:
** sprite
*/

#include "../../include/rpg.h"

void set_option(adventure *adv, button *ptr)
{
    adv->back_t[2] = sfTexture_createFromFile("images/opti.jpg", NULL);
    adv->back_s[2] = sfSprite_create();
    sfSprite_setTexture(adv->back_s[2], adv->back_t[2], sfTrue);
    sfSprite_setScale(adv->back_s[2], (sfVector2f){1.1, 1});
    adv->volo_t[0] = sfTexture_createFromFile("images/song_h.png", NULL);
    adv->volo_s[0] = sfSprite_create();
    sfSprite_setTexture(adv->volo_s[0], adv->volo_t[0], sfTrue);
    sfSprite_setScale(adv->volo_s[0], (sfVector2f){0.1, 0.1});
    sfSprite_setPosition(adv->volo_s[0], (sfVector2f){25, 330});
    adv->volo_t[1] = sfTexture_createFromFile("images/song_b.png", NULL);
    adv->volo_s[1] = sfSprite_create();
    sfSprite_setTexture(adv->volo_s[1], adv->volo_t[1], sfTrue);
    sfSprite_setScale(adv->volo_s[1], (sfVector2f){0.1, 0.1});
    sfSprite_setPosition(adv->volo_s[1], (sfVector2f){145, 330});
}