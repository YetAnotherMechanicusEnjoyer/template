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

// Lib
int get_len(const char *str);
int get_array_len(char **array);
int get_nb_len(int nb);
char *dup_add(char *src, char to_insert);
char **arraydup_add(char **src, char *to_insert);
char *my_strdup(char *str);
int write_mess(char *mess);
int write_error(char *mess);
int str_cmp(char *a, char *b);
char **str_to_word_array(char *str, char *separators);
int str_to_int(char *str);
char *int_str(int nb);
char *dup_add_str(char *src, char *to_insert);
#endif
