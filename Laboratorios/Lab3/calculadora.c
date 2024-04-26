// Esteban Corrales Duarte - C02429
// En este archivo se observa el código real de las funciones y como estas van a ser impresas en terminal

#include "calculadora.h"
#include <stdio.h>

void suma(int num1, int num2) {
    printf("El resultado de la suma es %d.\n", num1 + num2);
}

void resta(int num1, int num2) {
    printf("El resultado de la resta es %d.\n", num1 - num2);
}

void multiplicacion(int num1, int num2) {
    printf("El resultado de la multiplicacion es %d.\n", num1 * num2);
}

void division(int num1, int num2) {
    if (num2 != 0) {
        printf("El resultado de la division es %.2f.\n", (float)num1 / num2);
    } else {
        printf("No se puede dividir entre cero.\n");
    }
}

void pares(int num1, int num2) {
    printf("El dígito %d es %s y el dígito %d es %s.\n", num1, (num1 % 2 == 0) ? "par" : "impar",
           num2, (num2 % 2 == 0) ? "par" : "impar");
}

void modulo(int num1, int num2) {
    printf("El resultado del modulo es %d.\n", num1 % num2);
}

void potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    printf("El resultado de la potencia es %d.\n", resultado);
}