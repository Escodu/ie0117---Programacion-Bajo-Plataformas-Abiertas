//Esteban Corrales Duarte - C02429

#include <stdio.h>

// Definición del struct con los parámetros internos
struct datos_persona {
    char nombre[50];
    char apellido[50];
    int telefono;
    char carnet[20];
    char enfasis[50];
};

// Función para llenar el struct con los datos
void set_struct(struct datos_persona *persona) {
    printf("Ingrese el nombre: ");
    scanf("%s", persona->nombre);
    printf("Ingrese el primer apellido: ");
    scanf("%s", persona->apellido);
    printf("Ingrese el telefono: ");
    scanf("%d", &persona->telefono);
    printf("Ingrese el carnet: ");
    scanf("%s", persona->carnet);
    printf("Ingrese el enfasis: ");
    scanf("%s", persona->enfasis);
}

// Función para imprimir los datos del struct
void print_struct(struct datos_persona *persona) {
    printf("Nombre: %s\n", persona->nombre);
    printf("Apellido: %s\n", persona->apellido);
    printf("Telefono: %d\n", persona->telefono);
    printf("Carnet: %s\n", persona->carnet);
    printf("Enfasis: %s\n", persona->enfasis);
}

int main() {
    // Crear un arreglo de 5 structs con los datos de las personas
    struct datos_persona personas[5];

    // Llenamos los structs usando la función set_struct, se mantiene aquí durante 5 iteraciones
    for (int i = 0; i < 5; i++) {
        printf("\nIngrese los datos de la persona %d:\n", i + 1);
        set_struct(&personas[i]);
    }

    // Imprimimos los structs usando la función print_struct, se mantiene aquí durante 5 iteraciones
    for (int i = 0; i < 5; i++) {
        printf("\nDatos de la persona %d:\n", i + 1);
        print_struct(&personas[i]);
    }

    return 0;
}
