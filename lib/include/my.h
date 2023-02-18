/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <fcntl.h>
    #include <sys/stat.h>
    #include <sys/syscall.h>
    #include <sys/types.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <errno.h>
    #include <dirent.h>
    #include <pwd.h>

    int my_atoi(char *str);
    void my_put_nbr(int nb);
    void my_putchar(char c);
    void my_putstr(char const *str);
    int my_strcmp(char const *s1, char const *s2);
    int my_strlen (char const *str);

#endif
