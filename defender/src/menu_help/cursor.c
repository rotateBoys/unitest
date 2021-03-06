/*
** EPITECH PROJECT, 2020
** cursor
** File description:
** cursor
*/

#include "../../include/rpg.h"

void help_cursor(float x, float y, adventure *adv, button *ptr)
{
    if (mouse_on_sprite(adv->bouton_s[4], adv->window)) {
        sfSprite_setScale(adv->bouton_s[4], (sfVector2f){1.1, 1.1});
    }
    else
        sfSprite_setScale(adv->bouton_s[4], (sfVector2f){1, 1});
    if (mouse_on_sprite(adv->bouton_s[4], adv->window) &&
        sfMouse_isButtonPressed(sfMouseLeft)) {
        sfMusic_destroy(adv->music_m);
        set_music_a2(adv);
        menu_body(adv, ptr);
    }
}