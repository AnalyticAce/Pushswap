/*
** EPITECH PROJECT, 2023
** pushswap
** File description:
** pushswap function
*/

#include "push.h"
#include "myprintflib.h"

int the_size(list *hello)
{
    int size = 0;
    for (list *tem = hello; tem != NULL; tem = tem->pro) {
        size++;
    } return size;
}

void display_list(list *hello)
{
    for (list *tem = hello; tem != NULL; tem = tem->pro) {
        my_printf("%d ", tem->value);
    }
}

int my_getnbr(char *str)
{
    int i = 0;
    int sign = 1;
    int nb = 0;
    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign = sign * -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nb = nb * 10 + str[i] - '0';
        i++;
    } return (sign * nb);
}
