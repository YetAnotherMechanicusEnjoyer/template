/*
** EPITECH PROJECT, 2024
** my.h
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

// Lib
int get_len(const char *str);
int get_array_len(char **array);
char *my_strdup(char *src, char to_insert);
char **my_arraydup(char **src, char *to_insert);
int write_mess(char *mess);
int write_error(char *mess);
#endif
