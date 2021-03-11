/*
** EPITECH PROJECT, 2020
** draw
** File description:
** draw
*/

#include "../../include/rpg.h"

void draw_m(adventure *adv, button *ptr)
{
    sfRenderWindow_drawSprite(adv->window, adv->back_s[1], NULL);
    for (int i = 0; i != 4; i++)
        sfRenderWindow_drawSprite(adv->window, adv->bouton_s[i], NULL);
    //sfRenderWindow_drawText(adv->window, ptr->text_m[0], NULL);
    //sfRenderWindow_drawText(adv->window, ptr->text_m[1], NULL);
    //sfRenderWindow_drawText(adv->window, ptr->text_m[2], NULL);
    //sfRenderWindow_drawText(adv->window, ptr->text_m[3], NULL);
    //sfRenderWindow_drawText(adv->window, ptr->text_m[4], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->point_s, NULL);
    sfRenderWindow_display(adv->window);
}