/*
** EPITECH PROJECT, 2024
** get_len.c
** File description:
** get string's length
*/

int get_len(const char *str)
{
    int i = 0;

    for (i; str[i]; i++);
    return i;
}

int get_array_len(char **array)
{
    int i = 0;

    for (i; array[i]; i++);
    return i;
}
