/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** life
*/

#include "../../include/rpg.h"

char **image_life(void)
{
    char **file = malloc(sizeof(char *) * 6);

    file[0] = "images/plein.png";
    file[1] = "images/plein2.png";
    file[2] = "images/plein3.png";
    file[3] = "images/plein4.png";
    file[4] = NULL;
    return (file);
}

void life(adventure *com, int *i, float x, float y)
{
    char **file = image_life();

    draw_img(*com, file[*i], (sfVector2f) {0.7, 0.7}, (sfVector2f) {x, y});
    if (*i == 3)
        *i = 0;
    /*com->time = sfClock_getElapsedTime(com->clock);
    if (sfTime_asSeconds(com->time) > 0.07f) {
        *i = (*i == 3) ? 0 : *i + 1;
        sfClock_restart(com->clock);
        }*/
}
