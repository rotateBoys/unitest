/*
** EPITECH PROJECT, 2020
** text
** File description:
** text
*/

#include "../../include/rpg.h"

void set_text1(button *ptr)
{
    ptr->font[0] = sfFont_createFromFile("texts/flamme.ttf");
    ptr->text[0] = sfText_create();
    sfText_setString(ptr->text[0], "My defender");
    sfText_setFont(ptr->text[0], ptr->font[0]);
    sfText_setCharacterSize(ptr->text[0], 100);
    sfText_setPosition(ptr->text[0], (sfVector2f){50, 150});
    sfText_setColor(ptr->text[0], sfColor_fromRGB(0, 179, 207));
}

void set_text2(button *ptr)
{
    ptr->font[1] = sfFont_createFromFile("texts/simple.otf");
    ptr->text[1] = sfText_create();
    sfText_setString(ptr->text[1], "Appuyez sur Espace");
    sfText_setFont(ptr->text[1], ptr->font[1]);
    sfText_setCharacterSize(ptr->text[1], 50);
    sfText_setPosition(ptr->text[1], (sfVector2f){100, 350});
    sfText_setColor(ptr->text[1], sfRed);
}