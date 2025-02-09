/*
** EPITECH PROJECT, 2024
** lib
** File description:
** str_to_word_array.c
*/

#include "my.h"

static int is_separator(char c, const char *separators)
{
    for (int i = 0; separators[i] != '\0'; i++) {
        if (c == separators[i])
            return 1;
    }
    return 0;
}

static int count_words(const char *str, int len)
{
    int i;
    int nb_word = 0;

    for (i = 0; i < len; i++) {
        if (str[i] != '\0')
            nb_word += 1;
        for (; str[i] != '\0'; i++);
    }
    return nb_word;
}

static char *handle_separators(char *str, const char *sep, int reverse)
{
    char *cpy = malloc(sizeof(char) * get_len(str) + 1);

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_separator(str[i], sep) && !reverse)
            cpy[i] = '\0';
        else
            cpy[i] = str[i];
    }
    return cpy;
}

static char **str_to_word_array(const char *str, const char *sep, int reverse)
{
    int len = get_len(str);
    int word_len;
    int i = 0;
    char *string = handle_separators(str_dup(str), sep, reverse);
    int count = count_words(string, len);
    char **array = malloc(sizeof(char *) * (count + 1));

    if (!array)
        return NULL;
    for (int index = 0; index < len; index++) {
        if (!(string[i] == '\0')) {
            word_len = get_len(&string[index]);
            array[i] = strn_dup(&string[index], word_len);
            index += word_len;
            i++;
        }
    }
    free(string);
    array[i] = NULL;
    return array;
}

char **slice_words(const char *str, const char *separators, int reverse)
{
    if (!str || !separators)
        return NULL;
    return str_to_word_array(str, separators, reverse);
}
