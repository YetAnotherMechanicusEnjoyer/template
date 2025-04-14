/*
** EPITECH PROJECT, 2024
** my_dup.c
** File description:
** strdup & arraydup
*/

#include "my.h"

char *str_dup(const char *str)
{
    char *cpy = NULL;

    if (!str)
        return NULL;
    cpy = malloc(sizeof(char) * (get_len(str) + 1));
    if (!cpy)
        return NULL;
    str_cpy(cpy, str);
    return cpy;
}

char *strn_dup(const char *str, const size_t n)
{
    char *cpy = NULL;

    if (!str)
        return NULL;
    cpy = malloc(sizeof(char) * (get_len(str) + 1));
    if (!cpy)
        return NULL;
    strn_cpy(cpy, str, n);
    return cpy;
}
