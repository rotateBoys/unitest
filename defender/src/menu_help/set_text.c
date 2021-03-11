/*
** EPITECH PROJECT, 2020
** text_h
** File description:
** text_h
*/

#include "../../include/rpg.h"

void set_help_text1(button *ptr)
{
    ptr->font[0] = sfFont_createFromFile("texts/simple.otf");
    ptr->text_h[0] = sfText_create();
    sfText_setString(ptr->text_h[0], "Page d'Aide");
    sfText_setFont(ptr->text_h[0], ptr->font[0]);
    sfText_setCharacterSize(ptr->text_h[0], 70);
    sfText_setPosition(ptr->text_h[0], (sfVector2f){400, 10});
    sfText_setColor(ptr->text_h[0], sfGreen);
    sfText_setOutlineThickness(ptr->text_h[0], 10);
    sfText_setOutlineColor(ptr->text_h[0], sfBlack);
}

void set_go(adventure *adv, button *ptr)
{
    adv->bouton_t[4] = sfTexture_createFromFile("images/back.png", NULL);
    adv->bouton_s[4] = sfSprite_create();
    sfSprite_setTexture(adv->bouton_s[4], adv->bouton_t[4], sfTrue);
    //sfSprite_setScale (adv->bouton_s[i], (sfVector2f){0.7, 0.7});
    sfSprite_setPosition(adv->bouton_s[4], (sfVector2f) {1000, 554});
}