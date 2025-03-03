/*
** EPITECH PROJECT, 2024
** B-PSU-100-BDX-1-1-myls-ahmed.al-rawi
** File description:
** write.c
*/

#include "my.h"

size_t write_mess(const char *mess)
{
    write(COUT, mess, get_len(mess));
    return EXIT_SUCCESS;
}

size_t write_error(const char *mess)
{
    write(CERR, mess, get_len(mess));
    return EXIT_ERROR;
}
