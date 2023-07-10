/*
** EPITECH PROJECT, 2023
** pushswap
** File description:
** pushswap function
*/

#include "push.h"
#include "myprintflib.h"

list *add_to_end(list *hello, int x)
{
    if (my_empty_list(hello)) {
        hello = malloc(sizeof(list));
        hello->value = x;
        hello->pro = NULL;
        return hello;
    }
    list *tempo = hello;
    while (tempo->pro != NULL) {
        tempo = tempo->pro;
    }
    tempo->pro = malloc(sizeof(list));
    tempo->pro->value = x;
    tempo->pro->pro = NULL;
    return hello;
}

start *operation_ppb(start *lien, int x)
{
    list *newy = malloc(sizeof(list));
    newy->value = x;
    newy->pro = NULL;
    if (my_empty_list(lien->hello)) {
        newy->pro = NULL;
    } else {
        newy->pro = lien->hello;
    }
    lien->hi = add_to_front(lien->hi, lien->hello->value);
    lien->hello = remove_front(lien->hello);
    return (lien);
    free(lien);
}

start *operation_ppa(start *lien, int x)
{
    list *newy = malloc(sizeof(list));
    newy->value = x;
    newy->pro = NULL;
    if (my_empty_list(lien->hello)) {
        newy->pro = NULL;
    } else {
        newy->pro = lien->hello;
    }
    lien->hello = add_to_front(lien->hello, lien->hi->value);
    lien->hi = remove_front(lien->hi);
    int n = the_size(lien->hello);
    return (lien);
    free(lien);
    lib_all(lien->hello); lib_all(lien->hi);
}

int is_sorty(list *hello)
{
    for (list *tem = hello; tem->pro != NULL; tem = tem->pro) {
        if (tem->value > tem->pro->value) {
            return 0;
        }
    } return 1;
}

void swap_two(start *lien)
{
    bool sorty = false;
    int size = the_size(lien->hello);
    for (int i = 0; i < size && !sorty; i++) {
        list *tmp = lien->hello;
        for (int j = 0; j < size - i - 1; j++) {
            if (tmp->value > tmp->pro->value) {
                swap_first_two(tmp, tmp->pro);
                my_printf("sa ");
            } tmp = tmp->pro;
        } if (is_sorty(lien->hello)) {
            sorty = true;
        } else {
            operation_ppb(lien, tmp->value);
            my_printf("pb ");
            operation_ppa(lien, lien->hi->value);
            my_printf("pa ");
        }
    }
}
