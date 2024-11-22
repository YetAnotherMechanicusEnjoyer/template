/*
** EPITECH PROJECT, 2024
** my_dup.c
** File description:
** strdup & arraydup
*/

#include "my.h"

char *my_strdup(char *src, char to_insert)
{
    int i = 0;
    char *str = malloc(sizeof(char) * (get_len(src) + 2));

    for (i; src[i] != '\0'; i++)
        str[i] = src[i];
    str[i] = to_insert;
    str[i + 1] = '\0';
    return str;
}

char **my_arraydup(char **src, char *to_insert)
{
    int i = 0;
    char **array = malloc(sizeof(char *) * (get_array_len(src) + 2));

    for (i; src[i] != NULL; i++)
        array[i] = src[i];
    array[i] = to_insert;
    array[i + 1] = NULL;
    return array;
}