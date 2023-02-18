/*
** EPITECH PROJECT, 2022
** LIB MY
** File description:
** my atoi function
*/

int my_atoi(char *str)
{
    int i = 0;
    int atoi = 0;
    int isneg = 0;
    if (str[0] == '-') {
        isneg = 1;
        i++;
    }
    while (str[i] != '\0') {
        atoi = (atoi * 10) + str[i] - '0';
        i++;
    }
    if (isneg == 1) {
        atoi = atoi * (-1);
    }
    return (atoi);
}
