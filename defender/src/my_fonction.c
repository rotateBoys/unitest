/*
** EPITECH PROJECT, 2020
** my_fonctions
** File description:
** my_fonction
*/
#include "../include/rpg.h"

void  my_putchar(char c)
{
    write(1, &c, 1);
}

int  my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i = i + 1;
    }
    my_putchar('\n');
    return (0);
}

int my_strlen(const char *str)
{
    int len = 0;

    while (str[len] != '\0')
        len++;
    return len;
}

int my_strcmp(char *s1, char *s2)
{
    int c = 0;

    for (int i = 0; s2[i] != '\0'; i++) {
        if (s1[i] == '\0')
            return 1;
        if (s1[i] == s2[i])
            c++;
    }
    if (c == my_strlen(s1) && c == my_strlen(s2))
        return 0;
    else
        return 1;
}