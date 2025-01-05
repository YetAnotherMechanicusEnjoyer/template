/*
** EPITECH PROJECT, 2024
** lib
** File description:
** str_to_word_array.c
*/

#include "../../include/my.h"

static int is_separator(char c, char *separators)
{
    for (int i = 0; separators[i] != '\0'; i++) {
        if (c == separators[i])
            return 1;
    }
    return 0;
}

static int get_word_len(char *str, char *separators)
{
    int len = 0;

    if (!str)
        return 0;
    for (; str[len] != '\0' && !is_separator(str[len], separators); len++);
    return len;
}

static char *get_word(char *str, int word_len)
{
    int j = 0;
    char *word = malloc(sizeof(char) * (word_len + 2));

    for (int i = 0; i < word_len && str[i] != '\0'; i++) {
        word[j] = str[i];
        j++;
    }
    word[j] = '\0';
    return word;
}

static int count_words(char *str, char *separators, int len)
{
    int i;
    int nb_word = 0;

    for (i = 1; i < len && str[i] != '\0'; i++) {
        if (is_separator(str[i], separators) && !is_separator(str[i - 1],
            separators))
            nb_word++;
    }
    if (!is_separator(str[i], separators))
        nb_word++;
    return nb_word;
}

static char **str_to_word_array_fr(char *str, char *separators)
{
    int len = get_len(str);
    int nb_word = count_words(str, separators, len);
    int word_len = 0;
    int index;
    char **array = malloc(sizeof(char *) * (nb_word + 2));
    int arr_i = 0;

    for (index = 0; index < len; index++) {
        word_len = get_word_len(&str[index], separators);
        if (len > 0) {
            array[arr_i] = get_word(&str[index], word_len);
            index += word_len;
            array[arr_i + 1] = NULL;
            arr_i++;
        }
    }
    return array;
}

char **str_to_word_array(char *str, char *separators)
{
    if (!str)
        return NULL;
    return str_to_word_array_fr(str, separators);
}
