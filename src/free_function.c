/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** free function
*/

#include "my_bsq.h"
#include "my.h"

void my_free_array(char **array)
{
    int i = 0;

    while (array[i] != NULL) {
        free(array[i]);
        i++;
    }
    free(array);
}

void my_free_int_array(int **array)
{
    int i = 0;

    while (array[i] != NULL) {
        free(array[i]);
        i++;
    }
    free(array);
}

void free_function(t_variables *info)
{
    my_free_int_array(info->int_map);
    my_free_array(info->arr);
    my_free_array(info->temp_arr);
    free(info);
}
