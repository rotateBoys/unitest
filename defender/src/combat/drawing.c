/*
** EPITECH PROJECT, 2020
** draw
** File description:
** draw
*/

#include "../../include/rpg.h"

void draw_c(adventure *adv, button *ptr)
{
    sfRenderWindow_setMouseCursorVisible(adv->window, sfFalse);
    sfRenderWindow_drawSprite(adv->window, adv->back_s[6], NULL);
    //sfRenderWindow_drawText(adv->window, ptr->c_text[0], NULL);
    //sfRenderWindow_drawText(adv->window, ptr->c_text[1], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->point_s, NULL);
    sfRenderWindow_display(adv->window);
}