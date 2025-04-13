/*
** EPITECH PROJECT, 2025
** lib
** File description:
** array.c
*/

#include "my.h"

char **array_add(char **arr, char *add)
{
    size_t len = 0;
    char **cpy = NULL;

    if (!arr || !add)
        return NULL;
    len = get_array_len((const char **)arr) + 1;
    cpy = malloc(sizeof(char *) * (len + 1));
    array_cpy((const char **)arr, cpy);
    cpy[len - 1] = add;
    cpy[len] = NULL;
    free(arr);
    return cpy;
}

char **array_catalloc(const char **arr, const char **add)
{
    size_t len1 = get_array_len((const char **)arr);
    size_t len2 = get_array_len((const char **)add);
    size_t i = 0;
    char **cpy = NULL;

    if (!arr || !add)
        return NULL;
    cpy = malloc(sizeof(char *) * (len1 + len2 + 1));
    for (; i < len1; i++)
        cpy[i] = (char *)arr[i];
    for (; i < len1 + len2; i++)
        cpy[i] = (char *)add[i - len1];
    cpy[i] = NULL;
    return cpy;
}
