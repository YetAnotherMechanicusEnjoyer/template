/*
** EPITECH PROJECT, 2025
** template
** File description:
** convert.c
*/

#include "../../include/my.h"

static char *add_to_str(char *str, char to_add)
{
    int i;

    for (i = 0; str[i]; i++);
    str[i] = to_add;
    str[i + 1] = '\0';
    return str;
}

static char *recursive_to_string(int nb, char *result)
{
    if (nb < 0) {
        result = add_to_str(result, '-');
        nb = -nb;
    }
    if (nb >= 10)
        result = recursive_to_string(nb / 10, result);
    return add_to_str(result, (nb % 10 + 48));
}

char *int_str(int nb)
{
    int len;
    char *result = malloc(sizeof(char) * (len + 1));

    if (nb < 0)
        len = get_nb_len(nb * -1);
    else
        len = get_nb_len(nb);
    result = malloc(sizeof(char) * (len + 1));
    return recursive_to_string(nb, result);
}

static int is_num(char c)
{
    if (c < 3)
        return 2;
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int str_to_int(char *str)
{
    int nb = 0;
    int check = 0;
    int num;

    for (int i = 0; str[i] != '\0'; i++) {
        num = is_num(str[i]);
        if (num == 0)
            return -1;
        if (num == 1 && check == 1)
            nb *= 10;
        if (num == 1) {
            nb += (str[i] - 48);
            check = 1;
        }
    }
    return nb;
}
