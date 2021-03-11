/*
** EPITECH PROJECT, 2020
** text2_o
** File description:
** text2_o
*/

#include "../../include/rpg.h"

void set_option2_text1(button *ptr)
{
    ptr->font[0] = sfFont_createFromFile("texts/flamme.ttf");
    ptr->text2_o[0] = sfText_create();
    sfText_setString(ptr->text2_o[0], "Setting");
    sfText_setFont(ptr->text2_o[0], ptr->font[0]);
    sfText_setCharacterSize(ptr->text2_o[0], 80);
    sfText_setPosition(ptr->text2_o[0], (sfVector2f){560, 10});
    sfText_setColor(ptr->text2_o[0], sfGreen);
    sfText_setOutlineThickness(ptr->text2_o[0], 10);
    sfText_setOutlineColor(ptr->text2_o[0], sfBlack);
}

void set_option2_text2(button *ptr)
{
    ptr->font[0] = sfFont_createFromFile("texts/flamme.ttf");
    ptr->text2_o[1] = sfText_create();
    sfText_setString(ptr->text2_o[1], "Song");
    sfText_setFont(ptr->text2_o[1], ptr->font[0]);
    sfText_setCharacterSize(ptr->text2_o[1], 70);
    sfText_setPosition(ptr->text2_o[1], (sfVector2f){60, 250});
    sfText_setColor(ptr->text2_o[1], sfYellow);
    sfText_setOutlineThickness(ptr->text2_o[1], 10);
    sfText_setOutlineColor(ptr->text2_o[1], sfRed);
}

void set_option2_text3(button *ptr)
{
    ptr->font[0] = sfFont_createFromFile("texts/flamme.ttf");
    ptr->text2_o[2] = sfText_create();
    sfText_setString(ptr->text2_o[2], "Level\nof game");
    sfText_setFont(ptr->text2_o[2], ptr->font[0]);
    sfText_setCharacterSize(ptr->text2_o[2], 60);
    sfText_setPosition(ptr->text2_o[2], (sfVector2f){600, 250});
    sfText_setColor(ptr->text2_o[2], sfRed);
    sfText_setOutlineThickness(ptr->text2_o[2], 10);
    sfText_setOutlineColor(ptr->text2_o[2], sfYellow);
}

void set_option2_text4(button *ptr)
{
    ptr->font[0] = sfFont_createFromFile("texts/flamme.ttf");
    ptr->text2_o[3] = sfText_create();
    sfText_setString(ptr->text2_o[3], "Language");
    sfText_setFont(ptr->text2_o[3], ptr->font[0]);
    sfText_setCharacterSize(ptr->text2_o[3], 60);
    sfText_setPosition(ptr->text2_o[3], (sfVector2f){1100, 250});
    sfText_setColor(ptr->text2_o[3], sfYellow);
    sfText_setOutlineThickness(ptr->text2_o[3], 10);
    sfText_setOutlineColor(ptr->text2_o[3], sfRed);
}

void set_option2_text5(button *ptr)
{
    ptr->font[0] = sfFont_createFromFile("texts/flamme.ttf");
    ptr->text2_o[4] = sfText_create();
    sfText_setString(ptr->text2_o[4], "Back");
    sfText_setFont(ptr->text2_o[4], ptr->font[1]);
    sfText_setCharacterSize(ptr->text2_o[4], 80);
    sfText_setPosition(ptr->text2_o[4], (sfVector2f){900, 554});
    sfText_setColor(ptr->text2_o[4], sfYellow);
}

void set_option2_text6(button *ptr)
{
    ptr->text2_o[5] = sfText_create();
    sfText_setString(ptr->text2_o[5], "dificult");
    sfText_setFont(ptr->text2_o[5], ptr->font[1]);
    sfText_setCharacterSize(ptr->text2_o[5], 40);
    sfText_setPosition(ptr->text2_o[5], (sfVector2f){650, 430});
    sfText_setColor(ptr->text2_o[5], sfYellow);
}

void set_option2_text7(button *ptr)
{
    ptr->text2_o[6] = sfText_create();
    sfText_setString(ptr->text2_o[6], "French");
    sfText_setFont(ptr->text2_o[6], ptr->font[1]);
    sfText_setCharacterSize(ptr->text2_o[6], 40);
    sfText_setPosition(ptr->text2_o[6], (sfVector2f){1130, 354});
    sfText_setColor(ptr->text2_o[6], sfYellow);
}

void set_option2_text8(button *ptr)
{
    ptr->text2_o[7] = sfText_create();
    sfText_setString(ptr->text2_o[7], "English");
    sfText_setFont(ptr->text2_o[7], ptr->font[1]);
    sfText_setCharacterSize(ptr->text2_o[7], 40);
    sfText_setPosition(ptr->text2_o[7], (sfVector2f){1130, 400});
    sfText_setColor(ptr->text2_o[7], sfYellow);
}