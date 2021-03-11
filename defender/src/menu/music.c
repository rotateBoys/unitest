/*
** EPITECH PROJECT, 2020
** set_music
** File description:
** music
*/

#include "../../include/rpg.h"

void set_music_m(adventure *adv)
{
    adv->music_m = sfMusic_createFromFile("music/music_m3.ogg");
    sfMusic_play(adv->music_m);
    sfMusic_setLoop(adv->music_m, sfTrue);
}