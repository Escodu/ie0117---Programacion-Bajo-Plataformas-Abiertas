// Esteban Corrales Duarte - C02429

#include "arc.h"
#include <stdio.h>

// Implementación de las funciones
int bitwise_and(int a, int b) {
    return a & b;
}

int bitwise_or(int a, int b) {
    return a | b;
}

int bitwise_xor(int a, int b) {
    return a ^ b;
}

int bitwise_not(int a) {
    return ~a;
}

void print_binary(int decimal) {
    // Calcula el tamaño del entero (en bits)
    int size = sizeof(decimal) * 8;
    
    // Itera sobre cada bit
    for (int i = size - 1; i >= 0; i--) {
        // Verifica si el bit en la posición i está encendido
        if (decimal & (1 << i))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}


