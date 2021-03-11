/*
** EPITECH PROJECT, 2020
** text_p
** File description:
** text_p
*/

#include "../../include/rpg.h"

void set_parametre_text1(button *ptr)
{
    ptr->font[0] = sfFont_createFromFile("texts/simple.otf");
    ptr->text_p[0] = sfText_create();
    sfText_setString(ptr->text_p[0], "Selectione ton terrain de jeu");
    sfText_setFont(ptr->text_p[0], ptr->font[0]);
    sfText_setCharacterSize(ptr->text_p[0], 60);
    sfText_setPosition(ptr->text_p[0], (sfVector2f){150, 10});
    sfText_setColor(ptr->text_p[0], sfColor_fromRGB(0, 179, 207));
    sfText_setOutlineThickness(ptr->text_p[0], 10);
    sfText_setOutlineColor(ptr->text_p[0], sfBlack);
}

void set_go1(adventure *adv, button *ptr)
{
    adv->bouton_t[5] = sfTexture_createFromFile("images/rogne1.png", NULL);
    adv->bouton_s[5] = sfSprite_create();
    sfSprite_setTexture(adv->bouton_s[5], adv->bouton_t[5], sfTrue);
    sfSprite_setScale (adv->bouton_s[5], (sfVector2f){0.7, 0.7});
    sfSprite_setPosition(adv->bouton_s[5], (sfVector2f) {20, 20});
}

void set_go2(adventure *adv, button *ptr)
{
    adv->bouton_t[6] = sfTexture_createFromFile("images/rogne2.png", NULL);
    adv->bouton_s[6] = sfSprite_create();
    sfSprite_setTexture(adv->bouton_s[6], adv->bouton_t[6], sfTrue);
    sfSprite_setScale (adv->bouton_s[6], (sfVector2f){0.7, 0.7});
    sfSprite_setPosition(adv->bouton_s[6], (sfVector2f) {200, 20});
}

void set_go3(adventure *adv, button *ptr)
{
    adv->bouton_t[7] = sfTexture_createFromFile("images/rogne3.png", NULL);
    adv->bouton_s[7] = sfSprite_create();
    sfSprite_setTexture(adv->bouton_s[7], adv->bouton_t[7], sfTrue);
    sfSprite_setScale (adv->bouton_s[7], (sfVector2f){0.7, 0.7});
    sfSprite_setPosition(adv->bouton_s[7], (sfVector2f) {400, 20});
}

void set_go4(adventure *adv, button *ptr)
{
    adv->bouton_t[8] = sfTexture_createFromFile("images/rogne4.png", NULL);
    adv->bouton_s[8] = sfSprite_create();
    sfSprite_setTexture(adv->bouton_s[8], adv->bouton_t[8], sfTrue);
    sfSprite_setScale (adv->bouton_s[8], (sfVector2f){0.7, 0.7});
    sfSprite_setPosition(adv->bouton_s[8], (sfVector2f) {20, 20});
}