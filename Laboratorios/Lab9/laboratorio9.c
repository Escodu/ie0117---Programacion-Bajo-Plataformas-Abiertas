//Esteban Corrales Duarte - C02429

#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura del nodo
typedef struct Nodo {
    int dato;
    struct Nodo* siguiente;
} Nodo;

// Definición de la estructura de la cola
typedef struct Cola {
    Nodo* frente;
    Nodo* final;
} Cola;

// Función para inicializar una cola vacía cuando se inicia el programa
Cola* crearCola() {
    Cola* cola = (Cola*)malloc(sizeof(Cola));
    cola->frente = NULL;
    cola->final = NULL;
    return cola;
}

// Función para verificar si la cola está vacía
int estaVacia(Cola* cola) {
    return (cola->frente == NULL);
}

// Función para agregar un elemento a la cola
void enqueue(Cola* cola, int valor) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = NULL;
    if (estaVacia(cola)) {
        cola->frente = nuevoNodo;
    } else {
        cola->final->siguiente = nuevoNodo;
    }
    cola->final = nuevoNodo;
    printf("Elemento %d agregado a la cola.\n", valor);
}

// Función para eliminar un elemento de la cola (FIFO)
int dequeue(Cola* cola) {
    if (estaVacia(cola)) {
        printf("Error: la cola está vacía. No se puede eliminar ningún elemento.\n");
        return -1;
    }
    Nodo* temp = cola->frente;
    int valor = temp->dato;
    cola->frente = cola->frente->siguiente;
    if (cola->frente == NULL) {
        cola->final = NULL;
    }
    free(temp);
    return valor;
}

// Función para imprimir los elementos de la cola en el orden que fueron ingresados
void imprimirCola(Cola* cola) {
    if (estaVacia(cola)) {
        printf("La cola está vacía.\n");
        return;
    }
    Nodo* actual = cola->frente;
    printf("Elementos en la cola: ");
    while (actual != NULL) {
        printf("%d ", actual->dato);
        actual = actual->siguiente;
    }
    printf("\n");
}

// Función para mostrar el menú y obtener la opción del usuario
int menu() {
    int opcion;
    printf("\nMenú:\n");
    printf("1- Imprimir la cola\n");
    printf("2- Agregar un elemento\n");
    printf("3- Eliminar un elemento (El primero en ser ingresado)\n");
    printf("4- SALIR\n");
    printf("Ingrese su opción: ");
    scanf("%d", &opcion);
    return opcion;
}

// Función principal
int main() {
    Cola* cola = crearCola();
    int opcion, valor;
    do {
        opcion = menu();
        switch (opcion) {
            case 1:
                imprimirCola(cola);
                break;
            case 2:
                printf("Ingrese el valor a agregar: ");
                scanf("%d", &valor);
                enqueue(cola, valor);
                break;
            case 3:
                valor = dequeue(cola);
                if (valor != -1) {
                    printf("Elemento %d eliminado de la cola.\n", valor);
                }
                break;
            case 4:
                printf("Se salió del programa\n");
                break;
            default:
                printf("Esa no es una opción válida. Elija una del 1 al 4.\n");
        }
    } while (opcion != 4);

    // Liberar memoria
    while (!estaVacia(cola)) {
        dequeue(cola);
    }
    free(cola);
    return 0;
}
