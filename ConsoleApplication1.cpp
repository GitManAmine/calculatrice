#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b) {
    return (a + b);
}

int soustraction(int a, int b) {
    return (a - b);
}

int multiplication(int a, int b) {
    return (a * b);
}

int division(int a, int b) {
    return (a / b);
}

int main() {
    int operation;
    int a;
    int b;
    int c = 1;

    int* ptr1 = &a;
    int* ptr2 = &b;

    while (1) {

    printf_s("========================================\n");
    printf_s("               CALCULATRICE             \n");
    printf_s("========================================\n");

    printf_s("1 : Addition\n");
    printf_s("2 : Soustraction\n");
    printf_s("3 : Multiplication\n");
    printf_s("4 : Division\n");
    printf_s("5 : Quitter\n");

    printf_s("Votre choix : ");
    scanf_s("%d", &operation);

    if (operation == 5) {
        printf_s("Bye");
        break;
    }

    else
    {
        switch (operation) {
        case 1:
            printf_s("========================================\n");
            printf_s("############### Addition ###############\n");
            printf_s("========================================\n");

            printf_s("Entrez deux nombres:\n");
            printf_s("1. Nombre a: ");
            scanf_s("%d", &a);
            printf_s("2. Nombre b: ");
            scanf_s("%d", &b);
            printf_s("========================================\n");
            printf_s("Resultat : %d\n", addition(*ptr1, *ptr2));
            printf_s("========================================\n");
            break;
        case 2:
            printf_s("========================================\n");
            printf_s("############# Soustraction #############\n");
            printf_s("========================================\n");

            printf_s("Entrez deux nombres:\n");
            printf_s("1. Nombre a: ");
            scanf_s("%d", &a);
            printf_s("2. Nombre b: ");
            scanf_s("%d", &b);

            printf_s("========================================\n");
            printf_s("Resultat : %d\n", soustraction(*ptr1, *ptr2));
            printf_s("========================================\n");
            break;
        case 3:
            printf_s("========================================\n");
            printf_s("############# Multiplication ############\n");
            printf_s("========================================\n");

            printf_s("Entrez deux nombres:\n");
            printf_s("1. Nombre a: ");
            scanf_s("%d", &a);
            printf_s("2. Nombre b: ");
            scanf_s("%d", &b);

            printf_s("========================================\n");
            printf_s("Resultat : %d\n", multiplication(*ptr1, *ptr2));
            printf_s("========================================\n");
            break;
        case 4:
            printf_s("========================================\n");
            printf_s("############### Division ###############\n");
            printf_s("========================================\n");

            printf_s("Entrez deux nombres:\n");
            printf_s("1. Nombre a: ");
            scanf_s("%d", &a);
            printf_s("2. Nombre b: ");
            scanf_s("%d", &b);
            if (b != 0) {
                printf_s("========================================\n");
                printf_s("Resultat : %d\n", division(*ptr1, *ptr2));
            }
            else {
                printf_s("Erreur : Division par 0 impossible\n");
            }
            printf_s("========================================\n");
            break;
        default:
            printf_s("Option non valide. Veuillez reessayer.\n");
            break;
            }
        }

    }
    return 0;
}
