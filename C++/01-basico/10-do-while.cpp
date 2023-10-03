#include <iostream>

using namespace std;

/**
 * A diferencia de los bucles for y while, que prueban la condición del bucle en la parte superior del bucle,
 * el bucle do... while comprueba su condición en la parte inferior del bucle.
 *  Un bucle do... while es similar a un bucle while, excepto que se garantiza que un bucle do... while se ejecutará al menos una vez.
 * 
 * La sintaxis de un bucle do while es la siguiente:
 * 
 *     do {
        cuerpo del bucle;
    } 
    while( condición );
*/

int main() {

    // Declaración variable local (inicialización)
    int a = 10;

    // Ejecución bucle do while
    do {
        cout << "El valor de a es: " << a << endl;

        a++;
    } while( a <= 20 );

    return 0;

}