/*
** EPITECH PROJECT, 2022
** MY_PUTSTR
** File description:
** a function that displays, one-by-one, the characters of a string
*/

#include "my.h"

void my_putstr(char const *str)
{
    int  i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}
