/*
** EPITECH PROJECT, 2023
** pushswap
** File description:
** pushswap function
*/

#include "push.h"
#include "my_printf/myprintflib.h"

start *swap_main(start *lien)
{
    !is_sorty(lien->hello) ? swap_list(lien) : 0;
    my_printf("\n");
    lib_all(lien->hello);
    lib_all(lien->hi);
}

int char_error(int ac, char **av)
{
    int i = 0;
    return (av[i][0] >= 'a' && av[i][0] <= 'z') ||
    (av[i][0] >= 'A' && av[i][0] <= 'Z') ? 84 : 0;
}

int creator(int ac, char **av)
{
    start *lien = malloc(sizeof(start));
    lien->hello = mister_new();
    lien->hi = mister_new();
    int i = 1;
    while (av[i] != NULL) {
        int n = my_getnbr(av[i]);
        lien->hello = add_to_end(lien->hello, n);
        i++;
    }
    swap_two(lien);
    my_putstr("sa sa\n");
    display_list(lien->hello);
    return 0;
}

int checker(int ac, char **av)
{
    for (int i = 1; av[i] != NULL; i++) {
        if (av[i][0] >= 'a' && av[i][0] <= 'z' ||
            av[i][0] >= 'A' && av[i][0] <= 'Z') {
            return 84;
        }
    } creator(ac, av);
}

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 1 ) return 84;
    checker(ac, av);
}
