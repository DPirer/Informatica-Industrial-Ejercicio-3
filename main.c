#include <stdio.h>
#include <string.h>

// Pedro Antonio Estévez Pérez

// Ejercicio 3

/* Realice un programa que muestre una a una las palabras de las que está
 * compuesta una cadena de caracteres introducida por el usuario, y que
 * cuente cuántas de ellas tienen más de 2 vocales.*/

void main()
{
    /* Crearemos una cadena lo suficientemente grande como para asegurarnos de
     * que no introduzcan tantos caracteres. Pedimos al usuario que introduzca
     * la frase y almacenamos su longitud, incluyendo el salto de linea.*/

    char cadena[500];
    int longitud=0, i, contador=0;

    printf("Introduce una frase: ");
    fgets(cadena,500,stdin); //Variable donde se guarda, tamaño que coges y por teclado
    longitud = strlen(cadena);

    /* Creamos un bucle para recorrer la cadena. Si es un caracter, lo imprimimos,
     * y si es una vocal, sumamos uno. Si es un espacio, hemos acabado la palabra
     * y, por tanto, hacemos un salto de linea para preparar la siguiente palabra;
     * si el contador el mayor que 2, lo imprimimos y finalmente, lo ponemos a cero
     * para contar las vocales de la siguiente palabra.*/

    for (i=0; i<longitud; i++)
    {
        if (cadena[i] == ' ' || cadena[i] == '\n')
        {
            if (contador > 2)
                printf("  Vocales: %d", contador);

            printf("\n");
            contador = 0;
        }
        else
        {
            printf("%c", cadena[i]);
            if (cadena[i] == 'a' || cadena[i] == 'A' ||cadena[i] == 'e' || cadena[i] == 'E' ||cadena[i] == 'i' || cadena[i] == 'I' ||cadena[i] == 'o' || cadena[i] == 'O' ||cadena[i] == 'u' || cadena[i] == 'U')
                contador++;
        }
    }
    printf("\n");
}
