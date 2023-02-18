/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** str to array
*/

#include "my.h"
#include "my_bsq.h"

int lines_counter(char *buff, t_variables *info)
{
    int i = 0;
    int c = 0;
    while (buff[i] != '\0') {
        if (buff[i] == '\n' || buff[i] == '\0')
            c++;
        i++;
    }
    info->lines = c;
    return (c);
}

int len_line(char *buff, int i)
{
    while (buff[i] != '\n' && buff[i] != '\0')
        i++;
    return (i);
}

char **str_to_array(char *buff, int i, t_variables *info)
{
    int lines = lines_counter(buff, info);
    char **array = malloc(sizeof(char *) * (lines + 1));
    int a = 0; int b = 0;
    for (int j = 0; j <= lines; j++)
        array[j] = NULL;
    while (a != lines) {
        b = 0;
        array[a] = malloc(sizeof(char) * (len_line(buff, i) + 1));
        while (buff[i] != '\n' && buff[i] != '\0') {
            array[a][b] = buff[i];
            b++;
            i++;
        }
        array[a][b] = '\0';
        i++;
        a++;
    }
    array[a] = NULL;
    return (array);
}
