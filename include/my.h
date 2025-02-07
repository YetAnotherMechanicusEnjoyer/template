/*
** EPITECH PROJECT, 2024
** header
** File description:
** my.h
*/

#ifndef MY
    #define MY
    #include <stdarg.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <dirent.h>
    #include <sys/stat.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <criterion/criterion.h>
    #define EXIT_ERROR 84
    #define EXIT_HELP 12

// Lib
int get_len(const char *str);
int get_array_len(const char **array);
int get_nb_len(int nb);
char *my_strdup(const char *str);
int write_mess(const char *mess);
int write_error(const char *mess);
int str_cmp(const char *a, const char *b);
char **str_to_word_array(const char *str, const char *separators);
int str_to_int(const char *str);
char *int_str(int nb);
char *read_file(const char *path);
#endif
