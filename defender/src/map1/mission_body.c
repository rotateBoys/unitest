/*
** EPITECH PROJECT, 2020
** accueil
** File description:
** accueil
*/

#include "../../include/rpg.h"

int map1_body(adventure *adv, button *ptr)
{
    int i = 0, j = 0, k = 0, g = 1;
    float x, y, w = 82, z = 0, n = 0, m = 302.0, a = 0.6;
    sfEvent event;

    set_mission(adv, ptr);
    set_bande(adv, ptr);
    set_tower1(adv, ptr);
    set_tower2(adv, ptr);
    set_tower3(adv, ptr);
    set_tower4(adv, ptr);
    set_pause(adv, ptr);
    set_bande2(adv, ptr);
    set_coin(adv, ptr);
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
        } m_draw(adv, ptr);
        printf("g = %d\n", g);
        //printf("x = %f & y = %f\n", x, y);
        if (g != 0) {
            if (press(adv, (sfVector2f) {950, 20}, 100, 100) == 1)
                g = 0;
            if (w < 965.0) {
                life(adv, &j, w, z - 20);
                running(adv, &i, w, z);
            } if (n < 965.0) {
                life(adv, &k, n, m - 20);
                running(adv, &i, n, m);
            } move(adv, &n, &m, a);
            move1(adv, &w, &z, a);
        } if (press(adv, (sfVector2f) {950, 20}, 100, 100) == 1)
              g = 1;
        sfRenderWindow_display(adv->window);
    }
    return (0);
}
