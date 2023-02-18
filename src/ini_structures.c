/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** initialize structure
*/

#include "my.h"
#include "my_bsq.h"

t_variables *ini_variables(void)
{
    t_variables *info = malloc(sizeof(t_variables));
    info->x = 0;
    info->y = 0;
    info->dimension = 0;
    info->lines = 0;
    info->size = 0;
    info->generating_size = 0;
    info->buff = NULL;
    info->arr = NULL;
    info->temp_arr = NULL;
    info->int_map = NULL;
    info->temp_buff = NULL;
    return (info);
}
