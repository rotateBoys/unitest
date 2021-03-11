/*
** EPITECH PROJECT, 2020
** accueil
** File description:
** accueil
*/

#include "../../include/rpg.h"

int accueil_body(adventure *adv, button *ptr)
{
    float x, y;
    sfEvent event;

    set_accueil(adv, ptr);
    set_text1(ptr);
    set_text2(ptr);
    set_music_a(adv);
    the_window(adv);
    while (sfRenderWindow_isOpen(adv->window)) {
        while (sfRenderWindow_pollEvent(adv->window, &event)) {
            x = sfMouse_getPositionRenderWindow(adv->window).x;
            y = sfMouse_getPositionRenderWindow(adv->window).y;
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(adv->window);
            }
            sfSprite_setPosition(adv->point_s, (sfVector2f){x, y});
            button_space(x, y, adv, ptr);
            draw_a(adv, ptr);
        }
    }
    destroying_a(adv, ptr);
    destroying_o(adv, ptr);
    return (0);
}