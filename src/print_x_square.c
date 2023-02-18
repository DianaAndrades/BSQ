/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** print the square with 'x'
*/

#include "my.h"
#include "my_bsq.h"

char **print_x_square(t_variables *info, char **arr)
{
    info->int_map = algorithm(info->int_map, info);
    find_biggest_square(info->int_map, info);
    int a = info->x; int b = info->y;
    int dimension = info->dimension; int temp_dimension = dimension;
    int lines = temp_dimension;
    int x = a - (dimension - 1); int y = b - (dimension - 1);
    int temp_y = y;
    while (dimension > 0) {
        lines = temp_dimension;
        while (lines > 0) {
            arr[x][y] = 'x';
            y++;
            lines--;
        }
        x++;
        y = temp_y;
        dimension--;
    }
    return (arr);
}
