//Esteban Corrales Duarte - C02429

#include <stdio.h>

// Función para imprimir pirámide
void imprimirPiramide(int tamanoBase, char caracter) {
    int inicio = tamanoBase % 2 == 0 ? 2 : 1; // Para bases pares

    for (int i = inicio; i <= tamanoBase; i += 2) {
        for (int j = 0; j < (tamanoBase - i) / 2; j++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("%c", caracter);
        }
        printf("\n");
    }
}

// Función para imprimir pirámide invertida
void imprimirPiramideInvertida(int tamanoBase, char caracter) {
    for (int i = tamanoBase; i >= 1; i -= 2) {
        for (int j = 0; j < (tamanoBase - i) / 2; j++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("%c", caracter);
        }
        printf("\n");
    }
}

int main() {
    char opcion;
    int tamanoBase;
    char caracter;

    //Menú
    do {
        printf("Elija la figura a imprimir:\n");
        printf("1. Pirámide\n");
        printf("2. Pirámide invertida\n");
        printf("Escriba 'SALIR' para salir del programa.\n");
        printf("Opción: ");
        scanf(" %c", &opcion);

        //Casos para según sea la elección del usuario
        switch (opcion) {
            case '1':
                printf("Ingrese la cantidad de caracteres en la base: ");
                scanf("%d", &tamanoBase);
                printf("Ingrese el caracter a usar: ");
                scanf(" %c", &caracter);
                imprimirPiramide(tamanoBase, caracter);
                break;
            case '2':
                printf("Ingrese la cantidad de caracteres en la base: ");
                scanf("%d", &tamanoBase);
                printf("Ingrese el caracter a usar: ");
                scanf(" %c", &caracter);
                imprimirPiramideInvertida(tamanoBase, caracter);
                break;
            case 'S':
            case 's':
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Por favor, seleccione 1, 2 o SALIR.\n");
                do {
                    scanf("%c", &opcion); // Limpiar el buffer de entrada
                } while (opcion != '\n' && opcion != EOF);
        }
    } while (opcion != 'S' && opcion != 's');

    return 0;
}
