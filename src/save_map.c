/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** save map in an array
*/

#include "my.h"
#include "my_bsq.h"

char **save_map(t_variables *info)
{
    char **array = NULL;
    int p = 0;

    while (info->buff[p] != '\n')
        p++;
    p++;
    array = str_to_array(info->buff, p, info);
    return (array);
}
