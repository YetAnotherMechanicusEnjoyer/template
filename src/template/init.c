/*
** EPITECH PROJECT, 2025
** template
** File description:
** init.c
*/

#include "my.h"
#include <string.h>

static size_t start(void)
{
    return EXIT_SUCCESS;
}

static size_t print_help(void)
{
    write_mess(read_file("assets/txt/help"));
    return EXIT_HELP;
}

static size_t handle_error(int argc, const char *argv[])
{
    if (argv && argv[1] && (str_cmp(argv[1], "-h") == 0 ||
        str_cmp(argv[1], "--help") == 0) && get_len(argv[1]) > 0)
        return print_help();
    if (argc > 1)
        return write_error("Error 84: Bad usage!\n\n"
        "Usage: ./template [OPTIONS]\n"
        "Options:\n\t-h\n\t--help\n");
    return EXIT_SUCCESS;
}

int initialise(int argc, const char *argv[])
{
    switch (handle_error(argc, argv)) {
        case EXIT_HELP:
            return EXIT_SUCCESS;
        case EXIT_ERROR:
            return EXIT_ERROR;
        default:
            return start();
    }
}
