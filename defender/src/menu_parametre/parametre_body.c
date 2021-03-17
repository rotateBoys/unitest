/*
** EPITECH PROJECT, 2020
** accueil
** File description:
** accueil
*/

#include "../../include/rpg.h"

int parametre_body(adventure *adv, button *ptr)
{
    float x, y;
    sfEvent event;

    set_parametre(adv, ptr);
    set_parametre_text1(ptr);
    set_go(adv, ptr);
    //set_go1(adv, ptr);
    //set_go2(adv, ptr);
    //set_go3(adv, ptr);
    /*set_parametre_text2(ptr);
    set_parametre_text3(ptr);
    set_parametre_text4(ptr);
    set_parametre_text5(ptr);*/
    set_music_p(adv);
    while (sfRenderWindow_isOpen(adv->window)) {
        while (sfRenderWindow_pollEvent(adv->window, &event)) {
            x = sfMouse_getPositionRenderWindow(adv->window).x;
            y = sfMouse_getPositionRenderWindow(adv->window).y;
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(adv->window);
            }
            sfSprite_setPosition(adv->point_s, (sfVector2f){x, y});
            parametre_cursor(x, y, adv, ptr);
            draw_p(adv, ptr);
        }
    }
    return (0);
}
