/*
** EPITECH PROJECT, 2020
** position
** File description:
** position
*/

#include "../include/rpg.h"

int mouse_on_sprite(sfSprite *sprite, sfRenderWindow *window)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(sprite);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

    if (mouse.x > rect.left && mouse.x < rect.left + rect.width
        && mouse.y > rect.top && mouse.y < rect.top + rect.height)
        return (1);
    return (0);
}

int mouse_on_text(sfText *text, sfRenderWindow *window)
{
    sfFloatRect rect = sfText_getGlobalBounds(text);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

    if (mouse.x > rect.left && mouse.x < rect.left + rect.width
        && mouse.y > rect.top && mouse.y < rect.top + rect.height)
        return (1);
    return (0);
}