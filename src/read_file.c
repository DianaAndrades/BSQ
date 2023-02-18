/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** read file
*/

#include "my.h"
#include "my_bsq.h"

char *read_file(t_variables *info, char *argum)
{
    int fd = 0;
    int rd = 0;
    struct stat path;
    stat(argum, &path);
    if (diff_to_file(argum) == 84)
        return (NULL);
    if (path.st_size == 0)
        return (NULL);
    info->buff = malloc(sizeof(char) * (path.st_size + 1));
    fd = open(argum, O_RDONLY);
    if (fd == -1)
        return (NULL);
    rd = read(fd, info->buff, path.st_size + 1);
    if (rd == 0 || rd == -1)
        return (NULL);
    info->buff[rd] = '\0';
    close(fd);
    if (error_handling(info) == 84)
        return (NULL);
    return (info->buff);
}
