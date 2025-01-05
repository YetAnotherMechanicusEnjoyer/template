/*
** EPITECH PROJECT, 2024
** get_len.c
** File description:
** get string's length
*/

int get_len(const char *str)
{
    int i = 0;

    if (!str)
        return 0;
    for (; str[i]; i++);
    return i;
}

int get_array_len(char **array)
{
    int i = 0;

    if (!array)
        return 0;
    for (; array[i]; i++);
    return i;
}

int get_nb_len(int nb)
{
    int len;

    if (nb < 0)
        nb *= -1;
    for (len = 1; nb > 9; len++)
        nb /= 10;
    return len;
}

int str_cmp(char *a, char *b)
{
    for (int i = 0; a[i] && a[i] != '\0' && b[i] && b[i] != '\0'; i++) {
        if (a[i] != b[i])
            return a[i] - b[i];
    }
    return 0;
}
