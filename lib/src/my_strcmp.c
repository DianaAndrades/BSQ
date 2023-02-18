/*
** EPITECH PROJECT, 2022
** MY_STRCMP
** File description:
** behavior of the strcmp function
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int count = 0;

    while (s1[count] != '\0') {
        if (s1[count] < s2[count])
            return (1);
        if (s1[count] > s2[count])
            return (-1);
        count = count + 1;
    }
    if (my_strlen(s1) < my_strlen(s2))
        return (1);
    if (my_strlen(s1) > my_strlen(s2))
        return (-1);
    else {
        return (0);
    }
}
