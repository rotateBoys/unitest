/*
** EPITECH PROJECT, 2020
** draw
** File description:
** draw
*/

#include "../../include/rpg.h"

void draw_p(adventure *adv, button *ptr)
{
    sfRenderWindow_drawSprite(adv->window, adv->back_s[3], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text_p[0], NULL);
    //sfRenderWindow_drawSprite(adv->window, adv->bouton_s[4], NULL);
    //sfRenderWindow_drawSprite(adv->window, adv->bouton_s[5], NULL);
    //fRenderWindow_drawSprite(adv->window, adv->bouton_s[6], NULL);
    //sfRenderWindow_drawSprite(adv->window, adv->bouton_s[7], NULL);
   // sfRenderWindow_drawSprite(adv->window, adv->bouton_s[8], NULL);
    /*sfRenderWindow_drawText(adv->window, ptr->text_p[1], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text_p[2], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text_p[3], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text_p[4], NULL);*/
    sfRenderWindow_drawSprite(adv->window, adv->point_s, NULL);
    sfRenderWindow_display(adv->window);
}