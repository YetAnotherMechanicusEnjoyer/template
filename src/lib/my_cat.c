/*
** EPITECH PROJECT, 2025
** lib
** File description:
** my_cat.c
*/

#include "my.h"

char *str_cat(char *dest, char const *src)
{
    size_t len = get_len(dest);

    if (!dest || !src)
        return NULL;
    str_cpy(src, &dest[len]);
    return dest;
}

char *str_catalloc(const char *str, const char *add)
{
    size_t len1 = get_len(str);
    size_t len2 = get_len(add);
    size_t i = 0;
    char *cpy = NULL;

    if (!str || !add)
        return NULL;
    cpy = malloc(sizeof(char *) * (len1 + len2 + 1));
    for (; i < len1; i++)
        cpy[i] = str[i];
    for (; i < len1 + len2; i++)
        cpy[i] = add[i - len1];
    cpy[i] = '\0';
    return cpy;
}
