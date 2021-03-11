/*
** EPITECH PROJECT, 2020
** accueil
** File description:
** accueil
*/

#include "../../include/rpg.h"

int help_body(adventure *adv, button *ptr)
{
    float x, y;
    sfEvent event;

    set_help(adv, ptr);
    set_help_text1(ptr);
    set_go(adv, ptr);
    while (sfRenderWindow_isOpen(adv->window)) {
        while (sfRenderWindow_pollEvent(adv->window, &event)) {
            x = sfMouse_getPositionRenderWindow(adv->window).x;
            y = sfMouse_getPositionRenderWindow(adv->window).y;
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(adv->window);
            }
            sfSprite_setPosition(adv->point_s, (sfVector2f){x, y});
            help_cursor(x, y, adv, ptr);
            draw_h(adv, ptr);
        }
    }
    return (0);
}