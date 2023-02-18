/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** bsq
*/

#include "my.h"
#include "my_bsq.h"

void bsq(t_variables *info)
{
    info->arr = save_map(info);
    info->temp_arr = save_map(info);
    info->temp_arr = changing_into_nbr(info->temp_arr);
    info->int_map = my_atoi_bsq(info, info->temp_arr);
    info->arr = print_x_square(info, info->arr);
    my_print_array(info->arr);
}

void bsq_generating(t_variables *info, char **av)
{
    info->lines = my_atoi(av[1]);
    info->size = my_strlen(av[2]);

    info->arr = generating(info, av);
    info->temp_arr = generating(info, av);
    info->temp_arr = changing_into_nbr(info->temp_arr);
    info->int_map = my_atoi_bsq(info, info->temp_arr);
    info->arr = print_x_square(info, info->arr);
    my_print_array(info->arr);
    my_putchar('\n');
}

int error_handling_generating(char *size_map, char *patern)
{
    int i = 0;
    while (size_map[i] != '\0') {
        if (size_map[i] == '-')
            return (84);
        i++;
    }
    i = 0;
    if (my_strlen(patern) == 0)
        return (84);
    while (patern[i] != '\0') {
        if (patern[i] != '.' && patern[i] != 'o') {
            write(2, "Invalid input\n", 15);
            return (84);
        }
        i++;
    }
    return (0);
}
