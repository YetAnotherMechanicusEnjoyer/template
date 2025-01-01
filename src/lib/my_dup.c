/*
** EPITECH PROJECT, 2024
** my_dup.c
** File description:
** strdup & arraydup
*/

#include "../../include/my.h"

char *dup_add(char *src, char to_insert)
{
    int i = 0;
    char *str = malloc(sizeof(char) * (get_len(src) + 2));

    if (!str)
        return NULL;
    for (; src[i] != '\0'; i++)
        str[i] = src[i];
    str[i] = to_insert;
    str[i + 1] = '\0';
    return str;
}

char *dup_add_str(char *src, char *to_insert)
{
    int i = 0;
    char *new = malloc(sizeof(char) * (get_len(src) + get_len(to_insert) + 2));

    if (!new)
        return NULL;
    for (; src[i] != '\0'; i++)
        new[i] = src[i];
    for (int j = 0; to_insert[j] != '\0'; j++) {
        new[i] = to_insert[j];
        i++;
    }
    new[i] = '\0';
    return new;
}

char **arraydup_add(char **src, char *to_insert)
{
    int i = 0;
    char **array = malloc(sizeof(char *) * (get_array_len(src) + 2));

    if (!array)
        return NULL;
    for (; src[i] != NULL; i++)
        array[i] = src[i];
    array[i] = to_insert;
    array[i + 1] = NULL;
    return array;
}

char *my_strdup(char *str)
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
