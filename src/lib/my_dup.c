/*
** EPITECH PROJECT, 2024
** my_dup.c
** File description:
** strdup & arraydup
*/

#include "my.h"

char *str_dup(const char *str)
{
    char *cpy = malloc(sizeof(char) * get_len(str) + 1);
    size_t i = 0;

    if (!cpy)
        return NULL;
    for (; str[i] != '\0'; i++)
        cpy[i] = str[i];
    cpy[i] = '\0';
    return cpy;
}

char *strn_dup(const char *str, const size_t n)
{
    char *cpy = malloc(sizeof(char) * get_len(str) + 1);
    size_t i = 0;

    if (!cpy)
        return NULL;
    for (; str[i] != '\0' && i < n; i++)
        cpy[i] = str[i];
    cpy[i] = '\0';
    return cpy;
}
