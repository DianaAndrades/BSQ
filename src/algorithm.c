/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** algorithm to find the size of the biggest posible square
*/

#include "my.h"
#include "my_bsq.h"

int minor_one(int **arr, int x, int y)
{
    int temp = 0;
    int one = arr[x - 1][y - 1];
    int two = arr[x - 1][y];
    int three = arr[x][y - 1];

    if ((one == two) && (one == three) && (two == three))
        temp = one;
    if (one < two)
        temp = one;
    else
        temp = two;
    if (three < temp)
        temp = three;
    return (temp);
}

int size_square(int **arr, int x, int y)
{
    int nb = minor_one(arr, x, y);

    if (nb != 0)
        arr[x][y] = nb + 1;
    return (arr[x][y]);
}

int **go_over_string(int x, int y, int **arr, t_variables *info)
{
    while (y != my_strlen(info->temp_arr[x]) + 1) {
        if (arr[x][y] == 1)
            arr[x][y] = size_square(arr, x, y);
        y++;
    }
    return (arr);
}

int **algorithm(int **arr, t_variables *info)
{
    int x = 1;
    int y = 1;
    while (x != info->lines) {
        arr = go_over_string(x, y, arr, info);
        x++;
    }
    return (arr);
}
