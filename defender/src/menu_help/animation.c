/*
** EPITECH PROJECT, 2020
** anim
** File description:
** anim
*/

#include "../../include/rpg.h"

int is_on_opt(adventure *g, sfVector2f p, int x, int y)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(g->window);

    if (m.x >= p.x && m.x <= p.x + x && m.y >= p.y && m.y <= p.y + y)
        return (1);
    return (0);
}

int press(adventure *g, sfVector2f p, int x, int y)
{
    if (is_on_opt(g, p, x, y) && sfMouse_isButtonPressed(sfMouseLeft)) {
        return (1);
    } return (0);
}