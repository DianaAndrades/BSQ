/*
** EPITECH PROJECT, 2022
** CPOOL_MY_H
** File description:
** prototypes of all the functions in libmy.a
*/

#ifndef MY_BSQ_H_
    #define MY_BSQ_H_

    #include <fcntl.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <errno.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include "struct_bsq.h"

    char *read_file(t_variables *info, char *argum);
    int error_handling(t_variables *info);
    int diff_to_file (char *file);
    void bsq(t_variables *info);
    char **save_map(t_variables *info);
    char **str_to_array(char *buff, int i, t_variables *info);
    char **changing_into_nbr(char **str);
    int **my_atoi_bsq(t_variables *info, char **array);
    void my_print_array(char **final_arr);
    void my_print_int_array(int **final_arr);
    int minor_one(int **str, int x, int y);
    int size_square(int **str, int x, int y);
    int **algorithm(int **str, t_variables *info);
    char **print_x_square(t_variables *info, char **arr);
    void find_biggest_square(int **map, t_variables *info);
    t_variables *ini_variables(void);
    void free_function(t_variables *info);

    //generating
    char **generating(t_variables *bsq, char **av);
    int error_handling_generating(char *size_map, char *patern);
    void bsq_generating(t_variables *info, char **av);

#endif
