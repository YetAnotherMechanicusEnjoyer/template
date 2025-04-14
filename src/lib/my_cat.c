/*
** EPITECH PROJECT, 2025
** lib
** File description:
** my_cat.c
*/

#include "my.h"

void str_cat(char *dest, const char *src)
{
    if (!dest || !src)
        return;
    str_cpy(dest + get_len(dest), src);
}

char *str_catalloc(const char *str, const char *add)
{
    size_t len1 = get_len(str);
    size_t len2 = get_len(add);
    char *cpy = NULL;

    if (!str || !add)
        return NULL;
    cpy = malloc(sizeof(char *) * (len1 + len2 + 1));
    str_cpy(cpy, str);
    str_cat(cpy, add);
    return cpy;
}

void array_cat(char **dest, const char **src)
{
    if (!dest || !src)
        return;
    array_cpy(dest + get_array_len((const char **)dest), src);
}

char **array_catalloc(const char **arr, const char **add)
{
    size_t len1 = get_array_len((const char **)arr);
    size_t len2 = get_array_len((const char **)add);
    char **cpy = NULL;

    if (!arr || !add)
        return NULL;
    cpy = malloc(sizeof(char *) * (len1 + len2 + 1));
    array_cpy(cpy, arr);
    array_cat(cpy, add);
    return cpy;
}
