/*
** EPITECH PROJECT, 2020
** accueil
** File description:
** accueil
*/

#include "../../include/rpg.h"

int menu_body(adventure *adv, button *ptr)
{
    float x, y;
    sfEvent event;

    set_menu(adv, ptr);
    set_music_m(adv);
    while (sfRenderWindow_isOpen(adv->window)) {
        while (sfRenderWindow_pollEvent(adv->window, &event)) {
            x = sfMouse_getPositionRenderWindow(adv->window).x;
            y = sfMouse_getPositionRenderWindow(adv->window).y;
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(adv->window);
            }
            sfSprite_setPosition(adv->point_s, (sfVector2f){x, y});
            menu_cursor(x, y, adv, ptr);
            draw_m(adv, ptr);
        }
    }
    return (0);
}