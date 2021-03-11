/*
** EPITECH PROJECT, 2020
** set_music
** File description:
** music
*/

#include "../../include/rpg.h"

void set_music_a(adventure *adv)
{
    adv->music_a = sfMusic_createFromFile("music/music_a.ogg");
    sfMusic_play(adv->music_a);
    sfMusic_setLoop(adv->music_a, sfTrue);
}

void set_music_a2(adventure *adv)
{
    adv->music_a2 = sfMusic_createFromFile("music/music_a2.ogg");
    sfMusic_play(adv->music_a2);
}