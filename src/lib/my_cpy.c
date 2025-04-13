/*
** EPITECH PROJECT, 2025
** template
** File description:
** my_cpy.c
*/

#include "my.h"

void str_cpy(const char *a, char *b)
{
    size_t i = 0;

    if (!a || !b)
        return;
    for (; a[i] != '\0'; i++)
        b[i] = a[i];
    b[i] = '\0';
}

void strn_cpy(const char *a, char *b, const size_t n)
{
    size_t i = 0;

    if (!a || !b)
        return;
    for (; a[i] != '\0' && i < n; i++)
        b[i] = a[i];
    b[i] = '\0';
}

void array_cpy(const char **arr, char **cpy)
{
    size_t i = 0;

    if (!arr || !cpy)
        return;
    for (; arr[i]; i++)
        cpy[i] = (char *)arr[i];
    cpy[i] = NULL;
}

void arrayn_cpy(const char **arr, char **cpy, const size_t n)
{
    size_t i = 0;

    if (!arr || !cpy)
        return;
    for (; arr[i] && i < n; i++)
        cpy[i] = (char *)arr[i];
    cpy[i] = NULL;
}
