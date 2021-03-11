/*
** EPITECH PROJECT, 2020
** accueil
** File description:
** accueil
*/

#include "../../include/rpg.h"

int map2_body(adventure *adv, button *ptr)
{
    float x, y;
    sfEvent event;

    set_map2(adv, ptr);
    //set_m_text1(ptr);
    //set_m_text2(ptr);
    //set_music_g1(adv);
    while (sfRenderWindow_isOpen(adv->window)) {
        while (sfRenderWindow_pollEvent(adv->window, &event)) {
            x = sfMouse_getPositionRenderWindow(adv->window).x;
            y = sfMouse_getPositionRenderWindow(adv->window).y;
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(adv->window);
            }
            sfSprite_setPosition(adv->point_s, (sfVector2f){x, y});
            //mission_cursor(x, y, adv, ptr);
            m2_draw(adv, ptr);
        }
    }
    return (0);
}