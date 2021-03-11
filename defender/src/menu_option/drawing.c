/*
** EPITECH PROJECT, 2020
** draw
** File description:
** draw
*/

#include "../../include/rpg.h"

void draw_o(adventure *adv, button *ptr)
{
    sfRenderWindow_drawSprite(adv->window, adv->back_s[2], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text_o[0], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text_o[1], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text_o[2], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text_o[3], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text_o[4], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text_o[5], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text_o[6], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text_o[7], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->volo_s[0], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->volo_s[1], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->point_s, NULL);
    sfRenderWindow_display(adv->window);
}

void draw2_o(adventure *adv, button *ptr)
{
    sfRenderWindow_drawSprite(adv->window, adv->back_s[2], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text2_o[0], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text2_o[1], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text2_o[2], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text2_o[3], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text2_o[4], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text2_o[5], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text2_o[6], NULL);
    sfRenderWindow_drawText(adv->window, ptr->text2_o[7], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->volo_s[0], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->volo_s[1], NULL);
    sfRenderWindow_drawSprite(adv->window, adv->point_s, NULL);
    sfRenderWindow_display(adv->window);
}