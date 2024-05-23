//Esteban Corrales Duarte - C02429

#include <stdio.h>
#include <stdlib.h>

// Función para calcular el Máximo Común Divisor usando el algoritmo de Euclides
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(int argc, char *argv[]) {
    // Verificar la cantidad de argumentos
    if (argc != 3) {
        if (argc < 3) {
            printf("Error: menos argumentos de la cuenta.\n");
        } else {
            printf("Error: más argumentos de la cuenta.\n");
        }
        return 1;
    }

    // Convertir los argumentos a enteros
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Verificar si los números son negativos
    if (num1 < 0 || num2 < 0) {
        printf("Error: los números negativos no son permitidos.\n");
        return 1;
    }

    // Verificar si ambos números son cero
    if (num1 == 0 && num2 == 0) {
        printf("Error: ambos números son 0.\n");
        return 1;
    }

    // Calcular el MCD
    int resultado = gcd(num1, num2);

    // Imprimir el resultado
    printf("El máximo común divisor de ambos números es: %d\n", resultado);

    return 0;
}
