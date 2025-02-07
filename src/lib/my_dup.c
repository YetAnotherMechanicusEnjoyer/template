/*
** EPITECH PROJECT, 2024
** my_dup.c
** File description:
** strdup & arraydup
*/

#include "my.h"

char *my_strdup(const char *str)
{
    char *cpy = malloc(sizeof(char) * get_len(str) + 1);
    int i = 0;

    if (!cpy)
        return NULL;
    for (; str[i] != '\0'; i++)
        cpy[i] = str[i];
    cpy[i] = '\0';
    return cpy;
}
