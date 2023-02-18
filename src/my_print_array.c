/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** print array
*/

#include "my.h"
#include "my_bsq.h"

void my_print_array(char **arr)
{
    int a = 0;

    while (arr[a] != NULL) {
        my_putstr(arr[a]);
        if (arr[a + 1] != NULL)
            my_putchar('\n');
        a++;
    }
}

void my_print_int_array(int **arr)
{
    int a = 0;
    int b = 0;

    while (arr[a] != NULL) {
        b = 0;
        while (arr[a][b] != -1) {
            my_put_nbr(arr[a][b]);
            b++;
        }
        write(1, "\n", 1);
        a++;
    }
}
