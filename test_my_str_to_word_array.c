/*
** EPITECH PROJECT, 2020
** test my_str_to_word_array
** File description:
** test_my_str_to_word_array.c
*/

#include <stdlib.h>
#include <stddef.h>
#include <criterion/criterion.h>

char **my_str_to_word_array(char const *str);

Test(my_str_to_word_array, check_array) {
    int k, j;
    char **array = my_str_to_word_array("papa est malade");
    char **to_be = malloc(sizeof(char *) * 4);

    to_be[0] = "papa";
    to_be[1] = "est";
    to_be[2] = "malade";
    to_be[3] = NULL;
    for (k = 0; array[k] != NULL; k++) ;
    for (j = 0; to_be[j] != NULL; j++) ;
    if (k != j)
        cr_assert_str_eq("h", "ha");
    else
        for (int i = 0; array[i] != NULL && to_be[i] != NULL; i++)
            cr_assert_str_eq(array[i], to_be[i]);
    for (int b = 0; array[b] != NULL; b++) free(array[b]);
    free(to_be);
    free(array);
}
