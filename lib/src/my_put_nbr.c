/*
** EPITECH PROJECT, 2022
** MY_PUT_NBR
** File description:
** function that displays the number given as a parameter
*/

#include "my.h"

void my_put_nbr(int nb)
{
    int n;
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    } else {
        if (nb >= 10) {
            n = (nb % 10);
            nb = (nb - n) / 10;
            my_put_nbr(nb);
            my_putchar(n + 48);
        } else
            my_putchar(nb % 10 + 48);
    }
}
