/*
** EPITECH PROJECT, 2020
** accueil
** File description:
** accueil
*/

#include "../../include/rpg.h"

int option_body(adventure *adv, button *ptr)
{
    float x, y;
    sfEvent event;

    set_option(adv, ptr);
    set_option_text1(ptr);
    set_option_text2(ptr);
    set_option_text3(ptr);
    set_option_text4(ptr);
    set_option_text5(ptr);
    set_option_text6(ptr);
    set_option_text7(ptr);
    set_option_text8(ptr);
    while (sfRenderWindow_isOpen(adv->window)) {
        while (sfRenderWindow_pollEvent(adv->window, &event)) {
            x = sfMouse_getPositionRenderWindow(adv->window).x;
            y = sfMouse_getPositionRenderWindow(adv->window).y;
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(adv->window);
            }
            sfSprite_setPosition(adv->point_s, (sfVector2f){x, y});
            option_cursor(x, y, adv, ptr);
            draw_o(adv, ptr);
        }
    }
    return (0);
}

int option_body2(adventure *adv, button *ptr)
{
    float x, y;
    sfEvent event;

    set_option(adv, ptr);
    set_option2_text1(ptr);
    set_option2_text2(ptr);
    set_option2_text3(ptr);
    set_option2_text4(ptr);
    set_option2_text5(ptr);
    set_option2_text6(ptr);
    set_option2_text7(ptr);
    set_option2_text8(ptr);
    while (sfRenderWindow_isOpen(adv->window)) {
        while (sfRenderWindow_pollEvent(adv->window, &event)) {
            x = sfMouse_getPositionRenderWindow(adv->window).x;
            y = sfMouse_getPositionRenderWindow(adv->window).y;
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(adv->window);
            }
            sfSprite_setPosition(adv->point_s, (sfVector2f){x, y});
            option2_cursor(x, y, adv, ptr);
            draw2_o(adv, ptr);
        }
    }
    return (0);
}