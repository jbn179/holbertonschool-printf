#include <stdio.h>
#include "main.h"

int print_string(char *s);

int main(void)
{
    char *test1;
    char *test2;
    char *test3;
    char *test4;
    int count1, count2, count3, count4;

    test1 = "Bonjour, monde !";
    count1 = print_string(test1);
    printf("\nNombre de caractères imprimés : %d\n", count1);

    test2 = "";
    count2 = print_string(test2);
    printf("Nombre de caractères imprimés (chaîne vide) : %d\n", count2);

    test3 = NULL;
    count3 = print_string(test3);
    printf("Nombre de caractères imprimés (pointeur nul) : %d\n", count3);

    test4 = "Ceci est un test.";
    count4 = print_string(test4);
    printf("\nNombre de caractères imprimés : %d\n", count4);

    return (0);
}