/*
** EPITECH PROJECT, 2023
** pushswap
** File description:
** pushswap function
*/

#include "push.h"
#include "myprintflib.h"

void swap_list(start *lien)
{
    list *hello = lien->hello;
    int size = the_size(hello);
    for (int i = 0; i < size; i++) {
        if (hello->value > hello->pro->value) {
            swap_first_two(hello, hello->pro);
            my_printf("sa ");
        } if (!is_sorty(hello)) {
            operation_ppb(lien, hello->value);
            my_printf("pb ");
        } if (is_sorty(hello) && lien->hi != NULL) {
            operation_ppa(lien, lien->hi->value);
            my_printf("pa ");
        } if (lien->hi == NULL) {
            break;
        } hello = hello->pro;
    }
}

list *add_to_front(list *hello, int x)
{
    list *newy = malloc(sizeof(list));
    newy->value = x;
    if (hello == NULL) {
        newy->pro = NULL;
    } else {
        newy->pro = hello;
    } return newy;
}

list *remove_back(list *hello)
{
    if (my_empty_list(hello)) {
        return mister_new();
    } if (hello->pro == NULL) {
        free(hello);
        hello = NULL;
        return mister_new();
    } list *previous = hello;
    list *current = hello->pro;
    while (current->pro != NULL) {
        previous = current;
        current = current->pro;
    } previous->pro = NULL;
    free(current); current = NULL;
    return hello;
}

list *remove_front(list *hello)
{
    if (my_empty_list(hello)) {
        return hello;
    } list *new_head = hello->pro;
    free(hello); hello = NULL;
    return new_head;
}
