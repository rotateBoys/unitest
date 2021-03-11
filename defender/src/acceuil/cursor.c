/*
** EPITECH PROJECT, 2020
** cursor
** File description:
** cursor
*/

#include "../../include/rpg.h"

void button_space(float x, float y, adventure *adv, button *ptr)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace)) {
        sfMusic_destroy(adv->music_a);
        set_music_a2(adv);
        menu_body(adv, ptr);
    }
}