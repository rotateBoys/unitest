/*
** EPITECH PROJECT, 2021
** tesst
** File description:
** test
*/

# include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i;

    for (i = 0; s1[i] != '\0' && s2[i] != '\0' && i < n; i++) {
        if (s1[i] < s2[i])
            return (-1);
        else  if (s1[i] > s2[i])
            return (1);
    }
    if (s1[i] < s2[i])
        return (-1);
    else  if (s1[i] > s2[i])
        return (1);
    else
        return (0);
}

Test(my_strncmp, check_player_position)
{
    int i = my_strncmp("meelo", "meelo", 5);
    int j = my_strncmp("meelo", "armel", 3);
    int k = my_strncmp("meelo", "armel", 2);

    cr_assert_eq(i, 0);
    cr_assert_eq(j, 1);
    cr_assert_eq(k, 1);
}
