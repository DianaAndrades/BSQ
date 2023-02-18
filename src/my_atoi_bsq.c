/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** convert a char array into integer array
*/

#include "my.h"
#include "my_bsq.h"

int **my_atoi_bsq(t_variables *info, char **array)
{
    int nbr = 0;
    int a = 0;
    int b = 0;
    int lines = info->lines;
    int **map = malloc(sizeof(int *) * (lines + 1));
    while (array[a] != NULL) {
        b = 0;
        map[a] = malloc(sizeof(int) * (my_strlen(info->temp_arr[a]) + 1));
        while (array[a][b] != '\0') {
            nbr = array[a][b] - '0';
            map[a][b] = nbr;
            b++;
        }
        map[a][b] = -1;
        a++;
    }
    map[a] = NULL;
    return (map);
}
