/*
** EPITECH PROJECT, 2024
** B-PSU-100-BDX-1-1-myls-ahmed.al-rawi
** File description:
** write.c
*/

#include "../../include/my.h"

int write_mess(const char *mess)
{
    write(1, mess, get_len(mess));
    return EXIT_SUCCESS;
}

int write_error(const char *mess)
{
    write(2, mess, get_len(mess));
    return EXIT_ERROR;
}
