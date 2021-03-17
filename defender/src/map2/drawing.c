/*
** EPITECH PROJECT, 2020
** draw
** File description:
** draw
*/

#include "../../include/rpg.h"

void m2_draw(adventure *adv, button *ptr)
{
    sfRenderWindow_setMouseCursorVisible(adv->window, sfFalse);
    sfRenderWindow_drawSprite(adv->window, adv->back_s[8], NULL);
    //sfRenderWindow_drawText(adv->window, ptr->m_text[0], NULL);
    //sfRenderWindow_drawText(adv->window, ptr->m_text[1], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->point_s, NULL);
}

void move2(adventure *adv, float *x, float *y)
{
    *x += 0.52;
}
