/*
** EPITECH PROJECT, 2020
** draw
** File description:
** draw
*/

#include "../../include/rpg.h"

void draw_g1(adventure *adv, button *ptr)
{
    sfRenderWindow_setMouseCursorVisible(adv->window, sfFalse);
    sfRenderWindow_drawSprite(adv->window, adv->back_s[5], NULL);
    //sfRenderWindow_drawText(adv->window, ptr->g_text[0], NULL);
   // sfRenderWindow_drawText(adv->window, ptr->g_text[1], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->point_s, NULL);
    sfRenderWindow_display(adv->window);
}