/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** changing the map into numbers
*/

#include "my.h"
#include "my_bsq.h"

char **compare(int a, int b, char **str)
{
    if (str[a][b] == 'o')
        str[a][b] = '0';
    if (str[a][b] == '.')
        str[a][b] = '1';
    return (str);
}

char **changing_into_nbr(char **str)
{
    int a = 0;
    int b = 0;

    while (str[a] != NULL) {
        b = 0;
        while (str[a][b] != '\0') {
            str = compare(a, b, str);
            b++;
        }
        a++;
    }
    return (str);
}
