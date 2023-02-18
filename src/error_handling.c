/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** error handling
*/

#include "my_bsq.h"
#include "my.h"

int diff_to_file (char *file)
{
    struct stat path;
    stat(file, &path);

    if (errno == EACCES) {
        write(2, "Permission denied\n", 18);
        return (84);
    }
    if (errno == ENOENT) {
        write(2, "No such a file of directory\n", 28);
        return (84);
    }
    if (!(S_ISREG(path.st_mode))) {
        write(2, "Invalid file\n", 14);
        return (84);
    }
    return (0);
}

int error_map(t_variables *info)
{
    int i = 0;
    while (info->buff[i] != '\n') {
        if (info->buff[i] < '0' && info->buff[i] > '9')
            return (84);
        i++;
    }
    i++;
    while (info->buff[i] != '\0') {
        if (info->buff[i] != '.' && info->buff[i] != 'o'
            && info->buff[i] != '\n')
            return (84);
        i++;
    }
    return (0);
}

int correct_nbr_lines (t_variables *info)
{
    int i = 0;
    int lines = 0;
    int nbr_lines = 0;
    char *buff = malloc(sizeof(char) * 15);
    while (info->buff[i] != '\n') {
        buff[i] = info->buff[i];
        i++;
    }
    buff[i] = '\0';
    nbr_lines = my_atoi(buff);
    i++;
    while (info->buff[i] != '\0') {
        if (info->buff[i] == '\n')
            lines++;
        i++;
    }
    if (lines != nbr_lines)
        return (84);
    return (0);
}

int error_handling(t_variables *info)
{
    if (error_map(info) == 84)
        return (84);
    if (correct_nbr_lines(info) == 84)
        return (84);
    return (0);
}
