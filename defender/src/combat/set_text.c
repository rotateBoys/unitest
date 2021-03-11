/*
** EPITECH PROJECT, 2020
** c_text
** File description:
** c_text
*/

#include "../../include/rpg.h"

void set_c_text1(button *ptr)
{
    ptr->font[0] = sfFont_createFromFile("texts/flamme.ttf");
    ptr->c_text[0] = sfText_create();
    sfText_setString(ptr->c_text[0], "     choix du terrain");
    sfText_setFont(ptr->c_text[0], ptr->font[0]);
    sfText_setCharacterSize(ptr->c_text[0], 100);
    sfText_setPosition(ptr->c_text[0], (sfVector2f){140, 20});
    sfText_setColor(ptr->c_text[0], sfRed);
}

void set_c_text2(button *ptr)
{
    ptr->font[1] = sfFont_createFromFile("texts/simple.otf");
    ptr->c_text[1] = sfText_create();
    sfText_setString(ptr->c_text[1], "Tapper x pour commencer");
    sfText_setFont(ptr->c_text[1], ptr->font[1]);
    sfText_setCharacterSize(ptr->c_text[1], 70);
    sfText_setPosition(ptr->c_text[1], (sfVector2f){215, 554});
    sfText_setColor(ptr->c_text[1], sfGreen);
}