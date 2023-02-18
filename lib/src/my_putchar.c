/*
** EPITECH PROJECT, 2022
** MY_PUTCHAR
** File description:
** print
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
