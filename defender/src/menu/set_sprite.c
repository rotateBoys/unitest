/*
** EPITECH PROJECT, 2020
** sprite
** File description:
** sprite
*/

#include "../../include/rpg.h"

void set_menu(adventure *adv, button *ptr)
{
    adv->back_t[1] = sfTexture_createFromFile("images/menu.jpg", NULL);
    adv->back_s[1] = sfSprite_create();
    adv->bouton_t[0] = sfTexture_createFromFile("images/play.png", NULL);
    adv->bouton_s[0] = sfSprite_create();
    adv->bouton_t[1] = sfTexture_createFromFile("images/option.png", NULL);
    adv->bouton_s[1] = sfSprite_create();
    adv->bouton_t[2] = sfTexture_createFromFile("images/quit.png", NULL);
    adv->bouton_s[2] = sfSprite_create();
    adv->bouton_t[3] = sfTexture_createFromFile("images/how.png", NULL);
    adv->bouton_s[3] = sfSprite_create();
    sfSprite_setTexture(adv->back_s[1], adv->back_t[1], sfTrue);
    for (int a = 0; a != 4; a++)
        sfSprite_setTexture(adv->bouton_s[a], adv->bouton_t[a], sfTrue);
    for (int i = 0; i != 4; i++)
        sfSprite_setScale (adv->bouton_s[i], (sfVector2f){0.7, 0.7});
    sfSprite_setPosition(adv->bouton_s[0], (sfVector2f) {340, 300});
    sfSprite_setPosition(adv->bouton_s[1], (sfVector2f) {480, 300});
    sfSprite_setPosition(adv->bouton_s[2], (sfVector2f) {620, 300});
    sfSprite_setPosition(adv->bouton_s[3], (sfVector2f) {890, 530});
}