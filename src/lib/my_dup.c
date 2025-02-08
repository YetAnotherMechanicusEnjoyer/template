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
    int i = 0;

    if (!cpy)
        return NULL;
    for (; str[i] != '\0'; i++)
        cpy[i] = str[i];
    cpy[i] = '\0';
    return cpy;
}

char *strn_dup(const char *str, int n)
{
    char *cpy = malloc(sizeof(char) * get_len(str) + 1);
    int i = 0;

    if (!cpy)
        return NULL;
    for (; str[i] != '\0' && i < n; i++)
        cpy[i] = str[i];
    cpy[i] = '\0';
    return cpy;
}

int str_cmp(const char *a, const char *b)
{
    for (int i = 0; a[i] && a[i] != '\0' && b[i] && b[i] != '\0'; i++) {
        if (a[i] != b[i])
            return a[i] - b[i];
    }
    return 0;
}

void str_cpy(const char *a, char *b)
{
    int i;

    for (i = 0; a[i] != '\0'; i++)
        b[i] = a[i];
    b[i] = '\0';
}

void strn_cpy(const char *a, char *b, int n)
{
    int i;

    for (i = 0; a[i] != '\0' && i < n; i++)
        b[i] = a[i];
    b[i] = '\0';
}
