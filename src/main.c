/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** main
*/

#include "my.h"
#include "my_bsq.h"

int main(int ac, char **av)
{
    t_variables *info = ini_variables();
    if (ac <= 1 || ac > 3)
        return (84);
    if (ac == 2) {
        if ((info->buff = read_file(info, av[1])) == NULL)
            return (84);
        bsq(info);
        free_function(info);
    }
    if (ac == 3) {
        info->temp_buff = av[2];
        if (error_handling_generating(av[1], av[2]) == 84)
            return (84);
        bsq_generating(info, av);
        free_function(info);
    }
    return (0);
}
