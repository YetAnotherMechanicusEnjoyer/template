/*
** EPITECH PROJECT, 2025
** template
** File description:
** lib.c
*/

#include "my.h"

Test(str_to_int, test) {
    cr_expect(str_to_int("") == 0);
    cr_expect(str_to_int("9") == 9);
    cr_expect(str_to_int("a") == -1);
    cr_expect(str_to_int("\n") == -1);
    cr_expect(str_to_int("915648") == 915648);
}

Test(int_str, test) {
    cr_expect(str_cmp(int_str(12), "12") == 0);
    cr_expect(str_cmp(int_str(12344), "12344") == 0);
    cr_expect(str_cmp(int_str(41), "41") == 0);
    cr_expect(str_cmp(int_str(0), "0") == 0);
    cr_expect(str_cmp(int_str(-52), "-52") == 0);
}

Test(read_file, test) {
    cr_expect(str_cmp(read_file("tests/example.txt"), "abcdefg\n") == 0);
}

Test(get_len, test) {
    cr_expect(get_len("") == 0);
    cr_expect(get_len("a") == 1);
    cr_expect(get_len("ab") == 2);
    cr_expect(get_len("abc") == 3);
    cr_expect(get_len("abcd") == 4);
}

Test(get_array_len, test) {
    const char *arr1[5] = {NULL, NULL, NULL, NULL, NULL};
    const char *arr2[5] = {"a", NULL, NULL, NULL, NULL};
    const char *arr3[5] = {"a", "b", NULL, NULL, NULL};
    const char *arr4[5] = {"a", "b", "c", NULL, NULL};
    const char *arr5[5] = {"a", "b", "c", "d", NULL};

    cr_expect(get_array_len(arr1) == 0);
    cr_expect(get_array_len(arr2) == 1);
    cr_expect(get_array_len(arr3) == 2);
    cr_expect(get_array_len(arr4) == 3);
    cr_expect(get_array_len(arr5) == 4);
}

Test(get_nb_len, test) {
    cr_expect(get_nb_len(0) == 1);
    cr_expect(get_nb_len(1) == 1);
    cr_expect(get_nb_len(12) == 2);
    cr_expect(get_nb_len(-42) == 2);
    cr_expect(get_nb_len(2452) == 4);
}

Test(str_cmp, test) {
    cr_expect(str_cmp("", "") == 0);
    cr_expect(str_cmp("a", "") == 0);
    cr_expect(str_cmp("", "b") == 0);
    cr_expect(str_cmp("a", "b") == -1);
    cr_expect(str_cmp("a", "a") == 0);
}

Test(my_strdup, test) {
    cr_expect(str_cmp(my_strdup(""), "") == 0);
    cr_expect(str_cmp(my_strdup("a"), "a") == 0);
    cr_expect(str_cmp(my_strdup("ab"), "ab") == 0);
    cr_expect(str_cmp(my_strdup("abc"), "abc") == 0);
    cr_expect(str_cmp(my_strdup("abcd"), "abcd") == 0);
}

Test(str_to_word_array, test) {
    cr_expect(0 == 0);
}

Test(write_mess, test) {
    cr_expect(write_mess("aled\n") == 0);
}

Test(write_error, test) {
    cr_expect(write_error("aled\n") == 84);
}

