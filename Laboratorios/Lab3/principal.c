// Esteban Corrales Duarte - C02429
//Este código manda a llamar a las funciones ya definidas para demostrar su funcionamiento.

#include <stdio.h>
#include "calculadora.h"

int main() {
    int num1 = 6;
    int num2 = 5;
    
    suma(num1, num2);
    resta(num1, num2);
    multiplicacion(num1, num2);
    division(num1, num2);
    pares(num1, num2);
    modulo(num1, num2);
    potencia(num1, num2);
    
    return 0;
}