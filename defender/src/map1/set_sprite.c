/*
** EPITECH PROJECT, 2020
** sprite
** File description:
** sprite
*/

#include "../../include/rpg.h"

void set_mission(adventure *adv, button *ptr)
{
    adv->clock = sfClock_create();
    adv->back_t[7] = sfTexture_createFromFile("images/map1.jpg", NULL);
    adv->back_s[7] = sfSprite_create();
    sfSprite_setTexture(adv->back_s[7], adv->back_t[7], sfTrue);
    sfSprite_setScale(adv->back_s[7], (sfVector2f){1, 0.9});
}

void set_bande(adventure *adv, button *ptr)
{
    adv->tower_t[0] = sfTexture_createFromFile("images/bande.png", NULL);
    adv->tower_s[0] = sfSprite_create();
    sfSprite_setTexture(adv->tower_s[0], adv->tower_t[0], sfTrue);
    sfSprite_setScale(adv->tower_s[0], (sfVector2f){0.5, 0.5});
    sfSprite_setPosition(adv->tower_s[0], (sfVector2f) {380, 20});
}

void set_tower1(adventure *adv, button *ptr)
{
    adv->tower_t[1] = sfTexture_createFromFile("images/tower/tower1.png", NULL);
    adv->tower_s[1] = sfSprite_create();
    sfSprite_setTexture(adv->tower_s[1], adv->tower_t[1], sfTrue);
    sfSprite_setScale(adv->tower_s[1], (sfVector2f){0.7, 0.7});
    sfSprite_setPosition(adv->tower_s[1], (sfVector2f) {410, 20});
}

void set_tower2(adventure *adv, button *ptr)
{
    adv->tower_t[2] = sfTexture_createFromFile("images/tower/tower2.png", NULL);
    adv->tower_s[2] = sfSprite_create();
    sfSprite_setTexture(adv->tower_s[2], adv->tower_t[2], sfTrue);
    sfSprite_setScale(adv->tower_s[2], (sfVector2f){0.7, 0.7});
    sfSprite_setPosition(adv->tower_s[2], (sfVector2f) {490, 30});
}

void set_tower3(adventure *adv, button *ptr)
{
    adv->tower_t[3] = sfTexture_createFromFile("images/tower/tower3.png", NULL);
    adv->tower_s[3] = sfSprite_create();
    sfSprite_setTexture(adv->tower_s[3], adv->tower_t[3], sfTrue);
    sfSprite_setScale(adv->tower_s[3], (sfVector2f){0.7, 0.7});
    sfSprite_setPosition(adv->tower_s[3], (sfVector2f) {560, 30});
}

void set_tower4(adventure *adv, button *ptr)
{
    adv->tower_t[4] = sfTexture_createFromFile("images/tower/tower4.png", NULL);
    adv->tower_s[4] = sfSprite_create();
    sfSprite_setTexture(adv->tower_s[4], adv->tower_t[4], sfTrue);
    sfSprite_setScale(adv->tower_s[4], (sfVector2f){0.7, 0.7});
    sfSprite_setPosition(adv->tower_s[4], (sfVector2f) {640, 20});
}

void set_pause(adventure *adv, button *ptr)
{
    adv->tower_t[5] = sfTexture_createFromFile("images/pause.png", NULL);
    adv->tower_s[5] = sfSprite_create();
    sfSprite_setTexture(adv->tower_s[5], adv->tower_t[5], sfTrue);
    sfSprite_setScale(adv->tower_s[5], (sfVector2f){0.1, 0.1});
    sfSprite_setPosition(adv->tower_s[5], (sfVector2f) {950, 20});
}

void set_bande2(adventure *adv, button *ptr)
{
    adv->tower_t[6] = sfTexture_createFromFile("images/bande2.png", NULL);
    adv->tower_s[6] = sfSprite_create();
    sfSprite_setTexture(adv->tower_s[6], adv->tower_t[6], sfTrue);
    sfSprite_setScale(adv->tower_s[6], (sfVector2f){0.9, 0.9});
    sfSprite_setPosition(adv->tower_s[6], (sfVector2f) {180, 20});
}

void set_coin(adventure *adv, button *ptr)
{
    adv->tower_t[7] = sfTexture_createFromFile("images/coin.png", NULL);
    adv->tower_s[7] = sfSprite_create();
    sfSprite_setTexture(adv->tower_s[7], adv->tower_t[7], sfTrue);
    sfSprite_setScale(adv->tower_s[7], (sfVector2f){0.02, 0.02});
    sfSprite_setPosition(adv->tower_s[7], (sfVector2f) {220, 50});
}