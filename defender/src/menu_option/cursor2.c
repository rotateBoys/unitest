/*
** EPITECH PROJECT, 2020
** cursor
** File description:
** cursor
*/

#include "../../include/rpg.h"

void option2_cursor(float x, float y, adventure *adv, button *ptr)
{
      if (mouse_on_text(ptr->text2_o[4], adv->window)) {
         sfText_setOutlineThickness(ptr->text2_o[4], 10);
         sfText_setOutlineColor(ptr->text2_o[4], sfBlack);
         }
         else
            sfText_setOutlineThickness(ptr->text2_o[4], 0);
         if (mouse_on_text(ptr->text2_o[4], adv->window) &&
               sfMouse_isButtonPressed(sfMouseLeft)) {
                  sfMusic_pause(adv->music_m);
                  set_music_a2(adv);
                  menu_body(adv, ptr);
               }

      if (mouse_on_text(ptr->text2_o[7], adv->window)) {
         sfText_setOutlineThickness(ptr->text2_o[7], 10);
         sfText_setOutlineColor(ptr->text2_o[7], sfRed);
         }
         else
            sfText_setOutlineThickness(ptr->text2_o[7], 0);
      option2_cursor2(adv, ptr);
}

void option2_cursor2(adventure *adv, button *ptr)
{
    if (mouse_on_text(ptr->text2_o[6], adv->window)) {
         sfText_setOutlineThickness(ptr->text2_o[6], 10);
         sfText_setOutlineColor(ptr->text2_o[6], sfRed);
         }
         else
            sfText_setOutlineThickness(ptr->text2_o[6], 0);
         if (mouse_on_text(ptr->text2_o[6], adv->window) &&
               sfMouse_isButtonPressed(sfMouseLeft)) {
                  set_music_a2(adv);
                  option_body(adv, ptr);
               }
   if (mouse_on_sprite(adv->volo_s[0], adv->window))
         sfSprite_setScale(adv->volo_s[0], (sfVector2f){0.15, 0.15});
         else
            sfSprite_setScale(adv->volo_s[0], (sfVector2f){0.1, 0.1});
      if (mouse_on_sprite(adv->volo_s[0], adv->window) &&
               sfMouse_isButtonPressed(sfMouseLeft)) {
                  sfMusic_play(adv->music_m);
                  set_music_a2(adv);
                  option_body(adv, ptr);
               }
   if (mouse_on_sprite(adv->volo_s[1], adv->window))
         sfSprite_setScale(adv->volo_s[1], (sfVector2f){0.15, 0.15});
         else
            sfSprite_setScale(adv->volo_s[1], (sfVector2f){0.1, 0.1});
      if (mouse_on_sprite(adv->volo_s[1], adv->window) &&
               sfMouse_isButtonPressed(sfMouseLeft)) {
                  sfMusic_pause(adv->music_m);
                  set_music_a2(adv);
                  option_body(adv, ptr);
               }
}