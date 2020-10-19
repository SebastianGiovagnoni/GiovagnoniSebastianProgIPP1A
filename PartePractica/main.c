#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    float num = 100;

    printf("Punto 1\n");

    printf("El precio con el descuento aplicado es de: %.2f\n\n",aplicarDescuento(num));


    printf("punto 2\n");

    printf("La cantidad de veces que se repite el caracter es: %d",contarCaracteres("patricio",'i'));

    return 0;
}
