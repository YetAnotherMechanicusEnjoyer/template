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

enum {
    EXIT_ERROR  =   84,
    EXIT_FAIL   =   -1,
    EXIT_HELP   =   2029,
};

// Lib
int get_len(const char *str);
int get_array_len(const char **array);
int get_nb_len(int nb);
char *str_dup(const char *str);
char *strn_dup(const char *str, int n);
void str_cpy(const char *a, char *b);
void strn_cpy(const char *a, char *b, int n);
int write_mess(const char *mess);
int write_error(const char *mess);
int str_cmp(const char *a, const char *b);
char **slice_words(const char *str, const char *separators, int reverse);
int str_to_int(const char *str);
char *int_str(int nb);
char *read_file(const char *path);
#endif
