/*
** EPITECH PROJECT, 2022
** STRUCT_H
** File description:
** Struct.h
*/

#ifndef STRUCT_BSQ_H_
    #define STRUCT_BSQ_H_

    #include <stdarg.h>

    typedef struct s_variables {
        char *buff;
        char **arr;
        char **temp_arr;
        int **int_map;
        int x;
        int y;
        int dimension;
        int size;
        int lines;
        int generating_size;
        char *temp_buff;
    } t_variables;

#endif
