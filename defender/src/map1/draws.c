/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** perso
*/

#include "../../include/rpg.h"

void draw_img(adventure com, char *path, sfVector2f scale, sfVector2f pos)
{
    perso i = {sfSprite_create(), sfTexture_createFromFile(path, NULL)};

    sfSprite_setTexture(i.s, i.t, sfTrue);
    sfSprite_setScale(i.s, scale);
    sfSprite_setPosition(i.s, pos);
    sfRenderWindow_drawSprite(com.window, i.s, NULL);
    sfSprite_destroy(i.s);
    sfTexture_destroy(i.t);
}

char **image_homme(void)
{
    char **file = malloc(sizeof(char *) * 6);

    file[0] = "images/robot/Run1.png";
    file[1] = "images/robot/Run2.png";
    file[2] = "images/robot/Run3.png";
    file[3] = "images/robot/Run4.png";
    file[4] = "images/robot/Run5.png";
    file[5] = NULL;
    return (file);
}

void running(adventure *com, int *i, float x, float y)
{
    char **file = image_homme();

    draw_img(*com, file[*i], (sfVector2f) {0.15, 0.15}, (sfVector2f) {x, y});
    com->time = sfClock_getElapsedTime(com->clock);
    if (sfTime_asSeconds(com->time) > 0.07f) {
        *i = (*i == 4) ? 0 : *i + 1;
        sfClock_restart(com->clock);
    }
}

void move(adventure *adv, float *x, float *y)
{
    if (*x < 370.0)
        *x += 0.52;
    if (*x >= 370.0 && *x <= 372.0 && *y <= 482)
        *y += 0.52;
    if (*y >= 482.0 && *y <= 485.0 && *x <= 665.0)
        *x += 0.52;
    if (*y <= 485.0 && *y >= 302.0 && *x >= 665.0 && *x <= 865.0) {
        *x += 0.52;
        *y -= 0.52;
    } if (*y <= 303.0 && *y >= 301.0 && *x >= 845.0 && *x <= 965.0)
          *x += 0.52;
}

void move1(adventure *adv, float *x, float *y)
{
    if (*x < 380) {
        *x += 0.52;
        *y += 0.52;
    }
    if (*x >= 380.0 && *x <= 382.0 && *y <= 482)
        *y += 0.52;
    if (*y >= 482.0 && *y <= 485.0 && *x <= 665.0)
        *x += 0.52;
    if (*y <= 485.0 && *y >= 302.0 && *x >= 665.0 && *x <= 865.0) {
        *x += 0.52;
        *y -= 0.52;
    } if (*y <= 303.0 && *y >= 301.0 && *x >= 845.0 && *x <= 965.0)
          *x += 0.52;
    /*if (*x < 370.0)
     *x += 0.52;
     if (*x >= 370.0 && *x <= 372.0 && *y <= 482)
     *y += 0.52;
     if (*y >= 482.0 && *y <= 485.0 && *x <= 665.0)
     *x += 0.52;
     if (*y <= 485.0 && *y >= 302.0 && *x >= 665.0 && *x <= 865.0) {
     *x += 0.52;
     *y -= 0.52;
     } if (*y <= 303.0 && *y >= 301.0 && *x >= 845.0 && *x <= 965.0)
     *x += 0.52;*/
    /*if (*y <= 485.0 && *y >= 302.0 && *x >= 665.0 && *x <= 865.0) {
     *x += 0.52;
     *y -= 0.52;
     }*/
    //0 / 302;
    //x = 846.047852 & y = 301.480011
  //  printf("x = %f & y = %f\n", *x, *y);
}
