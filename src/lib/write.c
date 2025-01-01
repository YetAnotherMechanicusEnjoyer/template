/*
** EPITECH PROJECT, 2024
** B-PSU-100-BDX-1-1-myls-ahmed.al-rawi
** File description:
** write.c
*/

#include "../../include/my.h"

int write_mess(char *mess)
{
    return write(1, mess, get_len(mess));
}

int write_error(char *mess)
{
    write(2, mess, get_len(mess));
    return 84;
}
