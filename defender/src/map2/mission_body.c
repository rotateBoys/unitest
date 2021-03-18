/*
** EPITECH PROJECT, 2020
** accueil
** File description:
** accueil
*/

#include "../../include/rpg.h"

int map2_body(adventure *adv, button *ptr)
{
    int i = 0;
    float x, y, w = 0, z = 50, n = 0, m = 480.0, k = 260.0, p = 150.0, a = 0.6;
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
        }
        //mission_cursor(x, y, adv, ptr);

        m2_draw(adv, ptr);
        if (n < 965.0) {
            running(adv, &i, n, z);
            running(adv, &i, n, m);
        } if (p < 965.0)
              running(adv, &i, p, k);
        move2(adv, &n, &m, a);
        move2(adv, &p, &m, a);
        //move3(adv, &w, &z);
        //running(adv, adv->time);
        sfRenderWindow_display(adv->window);
    }
    return (0);
}
