/*
** EPITECH PROJECT, 2020
** accueil
** File description:
** accueil
*/

#include "../../include/rpg.h"

int combat_body(adventure *adv, button *ptr)
{
    int i = 0;
    float x, y, w = 0, z = 50, n = 0, m = 480.0;// k = 260.0, p = 150.0;
    sfEvent event;

    set_combat(adv, ptr);
    //set_c_text1(ptr);
    //set_c_text2(ptr);
    //set_music_g1(adv);
    while (sfRenderWindow_isOpen(adv->window)) {
        while (sfRenderWindow_pollEvent(adv->window, &event)) {
            x = sfMouse_getPositionRenderWindow(adv->window).x;
            y = sfMouse_getPositionRenderWindow(adv->window).y;
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(adv->window);
            }
            sfSprite_setPosition(adv->point_s, (sfVector2f){x, y});
            //      combat_cursor(x, y, adv, ptr);
        }
        draw_c(adv, ptr);
        running(adv, &i, w, z);
        /* if (w < 965.0) { */
        /*     running(adv, &i, w, z); */
        /*     //running(adv, &i, n, m); */
        /* } if (n < 965.0) */
        /*       running(adv, &i, n, m); */
        /* //move3(adv, &w, &z); */
        /* //move2(adv, &n, &m); */
        sfRenderWindow_display(adv->window);
    }
    return (0);
}
