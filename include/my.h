/*
** EPITECH PROJECT, 2024
** header
** File description:
** my.h
*/

#ifndef MY
    #define MY
    #include <unistd.h>
    #include <stdlib.h>

enum {
    EXIT_ERROR = 84,
    EXIT_FAIL = -1,
    EXIT_HELP = 2029,
    COUT = 1,
    CERR = 2,
};

/* >------ Project ------< */
/* init.c */
int initialise(const int argc, const char *argv[]);

/* >------ Lib ------< */

/* lenght */
size_t get_len(const char *str);
size_t get_array_len(const char **array);
size_t get_nb_len(const int nb);

/* dup */
char *str_dup(const char *str);
char *strn_dup(const char *str, const size_t n);

/* cpy */
void str_cpy(char *a, const char *b);
void strn_cpy(char *a, const char *b, const size_t n);
void array_cpy(char **arr, const char **to_cpy);
void arrayn_cpy(char **arr, const char **to_cpy, const size_t n);

/* cat */
void str_cat(char *dest, const char *src);
char *str_catalloc(const char *str, const char *add);
void array_cat(char **dest, const char **src);
char **array_catalloc(const char **arr, const char **add);

/* write */
int write_mess(const char *mess);
int write_error(const char *mess);
int write_arr(const char **arr);

/* cmp */
int str_cmp(const char *a, const char *b);
int strn_cmp(char const *s1, char const *s2, const size_t n);

/* slice */
char **slice(const char *str, const char *separators, const size_t reverse);

/* convert */
int str_to_int(const char *str);
char *int_str(int nb);

/* file */
char *read_file(const char *path);

/* pointers */
void swap_int(int *a, int *b);
void swap_str(char **a, char **b);
#endif
