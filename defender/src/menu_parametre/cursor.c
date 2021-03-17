/*
** EPITECH PROJECT, 2020
** cursor
** File description:
** cursor
*/

#include "../../include/rpg.h"

void parametre_cursor(float x, float y, adventure *adv, button *ptr)
{
    if (mouse_on_sprite(adv->bouton_s[4], adv->window)) {
        sfSprite_setScale(adv->bouton_s[4], (sfVector2f){1.1, 1.1});
    }
    else
        sfSprite_setScale(adv->bouton_s[4], (sfVector2f){1, 1});
    if (is_on_opt(adv, (sfVector2f){170, 350} , 255, 171))
        sfSprite_setColor(adv->point_s, sfColor_fromRGB(0, 0, 0));
    if (is_on_opt(adv, (sfVector2f){450, 470}, 260, 145))
        sfSprite_setColor(adv->point_s, sfColor_fromRGB(0, 0, 0));
    if (is_on_opt(adv, (sfVector2f){475, 215}, 250, 240))
        sfSprite_setColor(adv->point_s, sfColor_fromRGB(0, 0, 0));
    if (is_on_opt(adv, (sfVector2f){760, 330}, 240, 155))
        sfSprite_setColor(adv->point_s, sfColor_fromRGB(0, 0, 0));
    if (is_on_opt(adv, (sfVector2f){151, 319} , 250, 200) == 0 &&
    is_on_opt(adv, (sfVector2f){430, 460}, 300, 300) == 0 &&
    is_on_opt(adv, (sfVector2f){478, 212}, 500, 200) == 0 &&
    is_on_opt(adv, (sfVector2f){775, 320}, 500, 300) == 0)
        sfSprite_setColor(adv->point_s, sfYellow);
    if (mouse_on_sprite(adv->bouton_s[4], adv->window) &&
        sfMouse_isButtonPressed(sfMouseLeft)) {
        sfMusic_destroy(adv->music_pa);
        set_music_a2(adv);
        menu_body(adv, ptr);
    }
    play_choice(adv, ptr);
}

void play_choice(adventure *adv, button *ptr)
{
    if (press(adv, (sfVector2f) {170, 350}, 255, 171) == 1) {
        sfMusic_destroy(adv->music_pa);
        map1_body(adv, ptr);
    }
    if (press(adv, (sfVector2f){450, 470}, 260, 145) == 1) {
        sfMusic_destroy(adv->music_pa);
        map2_body(adv, ptr);
    }
    if (press(adv, (sfVector2f) {475, 215}, 250, 240) == 1) {
        sfMusic_destroy(adv->music_pa);
        combat_body(adv, ptr);
    }
    if (press(adv, (sfVector2f) {760, 330}, 240, 155) == 1) {
        sfMusic_destroy(adv->music_pa);
        aventure_body(adv, ptr);
    }
    /*if (press(g, (sfVector2f) {430, 460}, 500, 400) == 1)
        g->opt = 4;
    if (press(g, (sfVector2f) {478, 212}, 600, 300) == 1)
        g->opt = 5;
    if (press(g, (sfVector2f) {775, 320}, 500, 300) == 1)
        g->opt = 6;*/
}
