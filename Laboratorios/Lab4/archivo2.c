// Esteban Corrales Duarte - C02429

#include <stdio.h>
#include "arc.h"

int main() {
    int a = 2, b = 9; //Mi carné es C02429, por lo tanto a=2 y b=9

    // Llamar a las funciones e imprimir los resultados
    printf("Operación AND:");
    print_binary(bitwise_and(a, b));
    printf("\n");

    printf("Operación OR:");
    print_binary(bitwise_or(a, b));
    printf("\n");

    printf("Operación XOR:");
    print_binary(bitwise_xor(a, b));
    printf("\n");

    printf("Operación NOT para a:");
    print_binary(bitwise_not(a));
    printf("\n");

    printf("Operación NOT para b:");
    print_binary(bitwise_not(b));
    printf("\n");

    return 0;
}

