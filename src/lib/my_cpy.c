/*
** EPITECH PROJECT, 2025
** template
** File description:
** my_cpy.c
*/

#include "my.h"

void str_cpy(char *a, const char *b)
{
    size_t i = 0;

    if (!a || !b)
        return;
    for (; b[i] != '\0'; i++)
        a[i] = b[i];
    a[i] = '\0';
}

void strn_cpy(char *a, const char *b, const size_t n)
{
    size_t i = 0;

    if (!a || !b)
        return;
    for (size_t i = 0; b[i] != '\0' && i < n; i++)
        a[i] = b[i];
    a[i] = '\0';
}

void array_cpy(char **arr, const char **to_cpy)
{
    size_t i = 0;

    if (!arr || !to_cpy)
        return;
    for (; to_cpy[i]; i++)
        arr[i] = (char *)to_cpy[i];
    arr[i] = NULL;
}

void arrayn_cpy(char **arr, const char **to_cpy, const size_t n)
{
    size_t i = 0;

    if (!arr || !to_cpy)
        return;
    for (; to_cpy[i] && i < n; i++)
        arr[i] = (char *)to_cpy[i];
    arr[i] = NULL;
}
