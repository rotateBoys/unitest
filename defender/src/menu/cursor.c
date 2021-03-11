/*
** EPITECH PROJECT, 2020
** cursor
** File description:
** cursor
*/

#include "../../include/rpg.h"

void menu_cursor2(adventure *adv, button *ptr)
{
    if (mouse_on_sprite(adv->bouton_s[0], adv->window) &&
        sfMouse_isButtonPressed(sfMouseLeft)) {
                sfMusic_destroy(adv->music_m);
                set_music_a2(adv);
                parametre_body(adv, ptr); }
    if (mouse_on_sprite(adv->bouton_s[1], adv->window) &&
        sfMouse_isButtonPressed(sfMouseLeft)) {
                set_music_a2(adv);
                option_body(adv, ptr); }
    if (mouse_on_sprite(adv->bouton_s[2], adv->window) &&
        sfMouse_isButtonPressed(sfMouseLeft)) {
                set_music_a2(adv);
                sfMusic_destroy(adv->music_a2);
                sfMusic_destroy(adv->music_m);
                exit(0); }
    if (mouse_on_sprite(adv->bouton_s[3], adv->window) &&
        sfMouse_isButtonPressed(sfMouseLeft)) {
                set_music_a2(adv);
                sfMusic_destroy(adv->music_a2);
                help_body(adv, ptr); }
}

void menu_cursor(float x, float y, adventure *adv, button *ptr)
{
        if (mouse_on_sprite(adv->bouton_s[0], adv->window)) {
                sfSprite_setScale (adv->bouton_s[0], (sfVector2f){0.8, 0.8});
        } else
                sfSprite_setScale (adv->bouton_s[0], (sfVector2f){0.7, 0.7});
        if (mouse_on_sprite(adv->bouton_s[1], adv->window)) {
                sfSprite_setScale (adv->bouton_s[1], (sfVector2f){0.8, 0.8});
        } else
                sfSprite_setScale (adv->bouton_s[1], (sfVector2f){0.7, 0.7});
        if (mouse_on_sprite(adv->bouton_s[2], adv->window)) {
                sfSprite_setScale (adv->bouton_s[2], (sfVector2f){0.8, 0.8});
        } else
                sfSprite_setScale (adv->bouton_s[2], (sfVector2f){0.7, 0.7});
        if (mouse_on_sprite(adv->bouton_s[3], adv->window)) {
                sfSprite_setScale (adv->bouton_s[3], (sfVector2f){0.8, 0.8});
        } else
                sfSprite_setScale (adv->bouton_s[3], (sfVector2f){0.7, 0.7});
        menu_cursor2(adv, ptr);
}