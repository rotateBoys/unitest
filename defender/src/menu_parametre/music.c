/*
** EPITECH PROJECT, 2020
** set_music
** File description:
** music
*/

#include "../../include/rpg.h"

void set_music_p(adventure *adv)
{
    adv->music_pa = sfMusic_createFromFile("music/music_p.ogg");
    sfMusic_play(adv->music_pa);
    sfMusic_setLoop(adv->music_pa, sfTrue);
}