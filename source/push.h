/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** pushswap
*/

#ifndef swap_
    #define swap_
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <stdbool.h>
    #include <stddef.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>

typedef struct list {
    int value;
    struct list *pro ;
}list;

typedef struct start {
    list *hello;
    list *hi;
}start;

list *mister_new(void);
bool my_empty_list(list *hello);
int the_size(list *hello);
void swap_two(start *lien);
void display_list(list *hello);
list *add_to_end(list *hello, int x);
list *add_to_front(list *hello, int x);
list *remove_back(list *hello);
list *remove_front(list *hello);
list *clear_all(list *hello);
list *setting(int ac , char **av);
list *lib_all(list *hello);
int my_getnbr(char *str);
void swap_first_two(list *hello, list *ls);
int my_getnbr(char *str);
void my_putchar(char c);
int my_putstr(const char *str);
start *swap_main(start *lien);
start *operation_ppa(start *lien, int x);
start *operation_ppb(start *lien, int x);
int is_sorty(list *hello);
void swap_list(start *lien);
list *setting(int ac, char **av);
int creator(int ac, char **av);
int my_getnbr(char *str);
#endif
