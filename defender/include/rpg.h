/*
** EPITECH PROJECT, 2020
** rpg hearder
** File description:
** rpg hearder
*/

#ifndef MY_RPG
#define MY_RPG

#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>
#include <SFML/Audio/Music.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct t_adventure adventure;
struct t_adventure
{
    sfSprite *back_s[8];
    sfTexture *back_t[8];
    sfSprite *bouton_s[10];
    sfTexture *bouton_t[10];
    sfSprite *volo_s[3];
    sfTexture *volo_t[3];
    sfSprite *point_s;
    sfTexture *point_t;
    sfMusic *music_a;
    sfMusic *music_a2;
    sfMusic *music_m;
    sfMusic *music_pa;
    sfRenderWindow* window;
    sfEvent event;
};

typedef struct t_button button;
struct t_button
{
    sfFont* font[2];
    sfText* text[2];
    sfText* text_m[6];
    sfText* text_o[8];
    sfText* text2_o[8];
    sfText* text_p[6];
    sfText* text_h[6];
    sfText* g_text[6];
    sfText* c_text[6];
    sfText* m_text[6];
};

void usage(void);
void the_window(adventure *adv);
int main(int ac, char **av);
void  my_putchar(char c);
int  my_putstr(char *str);
int my_strlen(const char *str);
int my_strcmp(char *s1, char *s2);
void draw_a(adventure *adv, button *ptr);
void destroying_a(adventure *adv, button *ptr);
void set_accueil(adventure *adv, button *ptr);
void set_music_a(adventure *adv);
int accueil_body(adventure *adv, button *ptr);
void set_text1(button *ptr);
void set_text2(button *ptr);
void button_space(float x, float y, adventure *adv, button *ptr);
void draw_g1(adventure *adv, button *ptr);
void destroying_g1(adventure *adv, button *ptr);
void set_aventure(adventure *adv, button *ptr);
void set_music_g1(adventure *adv);
int aventure_body(adventure *adv, button *ptr);
void set_a_text1(button *ptr);
void set_a_text2(button *ptr);
void draw_c(adventure *adv, button *ptr);
void destroying_c(adventure *adv, button *ptr);
void set_combat(adventure *adv, button *ptr);
void set_music_c(adventure *adv);
int combat_body(adventure *adv, button *ptr);
void set_c_text1(button *ptr);
void set_c_text2(button *ptr);
void button_space2(float x, float y, adventure *adv, button *ptr);
void set_menu(adventure *adv, button *ptr);
void destroying_m(adventure *adv, button *ptr);
void draw_m(adventure *adv, button *ptr);
int menu_body(adventure *adv, button *ptr);
int menu_body2(adventure *adv, button *ptr);
void set_menu_text1(button *ptr);
void set_menu_text2(button *ptr);
void set_menu_text3(button *ptr);
void set_menu_text4(button *ptr);
void set_menu_text5(button *ptr);
int mouse_on_sprite(sfSprite *sprite, sfRenderWindow *window);
int mouse_on_text(sfText *text, sfRenderWindow *window);
void menu_cursor(float x, float y, adventure *adv, button *ptr);
void set_option(adventure *adv, button *ptr);
void destroying_o(adventure *adv, button *ptr);
void draw_o(adventure *adv, button *ptr);
int option_body(adventure *adv, button *ptr);
void set_option_text1(button *ptr);
void set_option_text2(button *ptr);
void set_option_text3(button *ptr);
void set_option_text4(button *ptr);
void set_option_text5(button *ptr);
void set_option_text6(button *ptr);
void set_option_text7(button *ptr);
void set_option_text8(button *ptr);
void set_option2_text1(button *ptr);
void set_option2_text2(button *ptr);
void set_option2_text3(button *ptr);
void set_option2_text4(button *ptr);
void set_option2_text5(button *ptr);
void set_option2_text6(button *ptr);
void set_option2_text7(button *ptr);
void set_option2_text8(button *ptr);
void option_cursor(float x, float y, adventure *adv, button *ptr);
void set_parametre(adventure *adv, button *ptr);
void destroying_p(adventure *adv, button *ptr);
void draw_p(adventure *adv, button *ptr);
int parametre_body(adventure *adv, button *ptr);
void set_parametre_text1(button *ptr);
void set_parametre_text2(button *ptr);
void set_parametre_text3(button *ptr);
void set_parametre_text4(button *ptr);
void set_parametre_text5(button *ptr);
void set_music_m(adventure *adv);
void set_music_a2(adventure *adv);
void parametre_cursor(float x, float y, adventure *adv, button *ptr);
void set_help(adventure *adv, button *ptr);
void set_mission(adventure *adv, button *ptr);
void destroying_h(adventure *adv, button *ptr);
void draw_h(adventure *adv, button *ptr);
int help_body(adventure *adv, button *ptr);
void set_help_text1(button *ptr);
void set_help_text2(button *ptr);
void set_help_text3(button *ptr);
void set_help_text4(button *ptr);
void set_help_text5(button *ptr);
void m_destroying(adventure *adv, button *ptr);
void m_draw(adventure *adv, button *ptr);
int map1_body(adventure *adv, button *ptr);
void m2_draw(adventure *adv, button *ptr);
int map2_body(adventure *adv, button *ptr);
void set_m_text1(button *ptr);
void set_m_text2(button *ptr);
void set_m_text3(button *ptr);
void help_cursor(float x, float y, adventure *adv, button *ptr);
void mission_cursor(float x, float y, adventure *adv, button *ptr);
void combat_cursor(float x, float y, adventure *adv, button *ptr);
void set_music_p(adventure *adv);
int option_body2(adventure *adv, button *ptr);
void draw2_o(adventure *adv, button *ptr);
void option_cursor2(adventure *adv, button *ptr);
void option2_cursor(float x, float y, adventure *adv, button *ptr);
void option2_cursor2(adventure *adv, button *ptr);
void set_go(adventure *adv, button *ptr);
void set_go1(adventure *adv, button *ptr);
void set_go2(adventure *adv, button *ptr);
void set_go3(adventure *adv, button *ptr);
int is_on_opt(adventure *g, sfVector2f p, int x, int y);
int press(adventure *g, sfVector2f p, int x, int y);
void play_choice(adventure *adv, button *ptr);
void set_map2(adventure *adv, button *ptr);



#endif /*!MY_RPG*/