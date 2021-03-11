/*
** EPITECH PROJECT, 2020
** destroy
** File description:
** destroy
*/

#include "../../include/rpg.h"

void destroying_h(adventure *adv, button *ptr)
{
    sfTexture_destroy(adv->back_t[4]);
}