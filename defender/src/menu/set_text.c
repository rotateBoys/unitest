/*
** EPITECH PROJECT, 2020
** text_m
** File description:
** text_m
*/

#include "../../include/rpg.h"

void set_menu_text1(button *ptr)
{
    ptr->font[0] = sfFont_createFromFile("texts/flamme.ttf");
    ptr->text_m[0] = sfText_create();
    sfText_setString(ptr->text_m[0], "My_RPG");
    sfText_setFont(ptr->text_m[0], ptr->font[0]);
    sfText_setCharacterSize(ptr->text_m[0], 80);
    sfText_setPosition(ptr->text_m[0], (sfVector2f){620, 20});
    sfText_setColor(ptr->text_m[0], sfGreen);
}

void set_menu_text2(button *ptr)
{
    ptr->font[0] = sfFont_createFromFile("texts/flamme.ttf");
    ptr->text_m[1] = sfText_create();
    sfText_setString(ptr->text_m[1], "Jouer");
    sfText_setFont(ptr->text_m[1], ptr->font[0]);
    sfText_setCharacterSize(ptr->text_m[1], 70);
    sfText_setPosition(ptr->text_m[1], (sfVector2f){45, 54});
    sfText_setColor(ptr->text_m[1], sfYellow);
    sfText_setOutlineThickness(ptr->text_m[1], 10);
    sfText_setOutlineColor(ptr->text_m[1], sfRed);
}

void set_menu_text3(button *ptr)
{
    ptr->font[0] = sfFont_createFromFile("texts/flamme.ttf");
    ptr->text_m[2] = sfText_create();
    sfText_setString(ptr->text_m[2], "Parametre\ndu jeu");
    sfText_setFont(ptr->text_m[2], ptr->font[0]);
    sfText_setCharacterSize(ptr->text_m[2], 60);
    sfText_setPosition(ptr->text_m[2], (sfVector2f){35, 204});
    sfText_setColor(ptr->text_m[2], sfRed);
    sfText_setOutlineThickness(ptr->text_m[2], 10);
    sfText_setOutlineColor(ptr->text_m[2], sfYellow);
}

void set_menu_text4(button *ptr)
{
    ptr->font[0] = sfFont_createFromFile("texts/flamme.ttf");
    ptr->text_m[3] = sfText_create();
    sfText_setString(ptr->text_m[3], "Aide");
    sfText_setFont(ptr->text_m[3], ptr->font[0]);
    sfText_setCharacterSize(ptr->text_m[3], 60);
    sfText_setPosition(ptr->text_m[3], (sfVector2f){45, 404});
    sfText_setColor(ptr->text_m[3], sfYellow);
    sfText_setOutlineThickness(ptr->text_m[3], 10);
    sfText_setOutlineColor(ptr->text_m[3], sfRed);
}

void set_menu_text5(button *ptr)
{
    ptr->font[0] = sfFont_createFromFile("texts/flamme.ttf");
    ptr->text_m[4] = sfText_create();
    sfText_setString(ptr->text_m[4], "Sortir");
    sfText_setFont(ptr->text_m[4], ptr->font[0]);
    sfText_setCharacterSize(ptr->text_m[4], 80);
    sfText_setPosition(ptr->text_m[4], (sfVector2f){505, 554});
    sfText_setColor(ptr->text_m[4], sfBlue);
}