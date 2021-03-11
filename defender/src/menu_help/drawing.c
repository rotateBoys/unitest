/*
** EPITECH PROJECT, 2020
** draw
** File description:
** draw
*/

#include "../../include/rpg.h"

void draw_h(adventure *adv, button *ptr)
{
    sfRenderWindow_drawSprite(adv->window, adv->back_s[4], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text_h[0], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->bouton_s[4], NULL);
    /*sfRenderWindow_drawText(adv->window, ptr->text_h[1], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text_h[2], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text_h[3], NULL);*/
    //sfRenderWindow_drawText(adv->window, ptr->text_h[4], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->point_s, NULL);
    sfRenderWindow_display(adv->window);
}