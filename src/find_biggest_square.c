/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** find position and size of the biggest square
*/

#include "my.h"
#include "my_bsq.h"

void pos_size_square(int **map, int x, int y, t_variables *info)
{
    while (map[x][y] != -1) {
        if (map[x][y] > info->dimension) {
            info->x = x;
            info->y = y;
            info->dimension++;
        }
        y++;
    }
}

void find_biggest_square(int **map, t_variables *info)
{
    int x = 0; int y = 0;
    while (map[x] != NULL) {
        y = 0;
        pos_size_square(map, x, y, info);
        x++;
    }
}
