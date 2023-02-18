/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** generating part
*/

#include "my.h"
#include "my_bsq.h"

char *make_map(t_variables *bsq)
{
    int len = my_strlen(bsq->temp_buff) - 1;
    int i = 0;
    int p = 0;

    while (i != bsq->generating_size) {
        if (p == len)
            p = 0;
        bsq->buff[i] = bsq->temp_buff[p];
        i++;
        p++;
    }
    bsq->buff[i] = '\0';
    return (bsq->buff);
}

char *generate_movement(char *buff)
{
    int size = my_strlen(buff);
    char temp = 0;

    for (int i = 0; buff[i] != '\0'; i++) {
        if (i == size - 1) {
            buff[i] = temp;
            break;
        }
        temp = buff[0];
        buff[i] = buff[i + 1];
    }
    return (buff);
}

char **generate_map(t_variables *info, char **array)
{
    int a = 0; int b = 0; int i = 0;
    for (int i = 0; i < info->generating_size; i++)
        array[i] = NULL;
    while (a != info->generating_size) {
        b = 0;
        array[a] = malloc(sizeof(char) * (my_strlen(info->buff) + 1));
        if (a > 0)
            info->buff = generate_movement(info->buff);
        i = 0;
        while (info->buff[i] != '\0') {
            array[a][b] = info->buff[i];
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

char **generating(t_variables *bsq, char **av)
{
    bsq->generating_size = my_atoi(av[1]);
    int size = my_strlen(bsq->temp_buff) * bsq->generating_size;
    int malloc_size = (sizeof(char *) * size);
    char **array = malloc(malloc_size + 1);
    bsq->buff = malloc(sizeof(char) * (bsq->generating_size) + 1);
    bsq->buff = make_map(bsq);
    array = generate_map(bsq, array);
    return (array);
}
