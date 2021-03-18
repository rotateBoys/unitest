/*
** EPITECH PROJECT, 2020
** draw
** File description:
** draw
*/

#include "../../include/rpg.h"

void m_draw(adventure *adv, button *ptr)
{
    sfRenderWindow_setMouseCursorVisible(adv->window, sfFalse);
    sfRenderWindow_drawSprite(adv->window, adv->back_s[7], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->tower_s[0], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->tower_s[1], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->tower_s[2], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->tower_s[3], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->tower_s[4], NULL);
    //sfRenderWindow_drawText(adv->window, ptr->m_text[0], NULL);
    //sfRenderWindow_drawText(adv->window, ptr->m_text[1], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->point_s, NULL);
}
