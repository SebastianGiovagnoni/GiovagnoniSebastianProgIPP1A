#include <string.h>

float aplicarDescuento (float num)
{
    return num*0.95;
}
int contarCaracteres (char cadena [], char caracter)
{
    int contador=0;
    for(int i=0; i<strlen(cadena); i++)
    {
        if(cadena[i]==caracter)
        {
            contador++;
        }
    }

    return contador;
}
