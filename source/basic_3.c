/*
** EPITECH PROJECT, 2023
** pushswap
** File description:
** pushswap function
*/

#include "push.h"
#include "my_printf/myprintflib.h"

list *lib_all(list *hello)
{
    list *tem;
    for (tem = hello; tem != NULL; tem = hello) {
        hello = tem->pro;
        free(tem);
    }
    return NULL;
}

list *setting(int ac, char **av)
{
    list *hello = mister_new();
    int i = 1;
    while (av[i] != NULL) {
        hello = add_to_front(hello, my_getnbr(av[i]));
        i++;
    } display_list(hello); lib_all(hello);
}

void swap_first_two(list *hello, list *ls)
{
    int tem = ls->value;
    ls->value = hello->value;
    hello->value = tem;
}

list *mister_new(void)
{
    return NULL;
}

bool my_empty_list(list *hello)
{
    return (hello == NULL) ? true : false;
}
