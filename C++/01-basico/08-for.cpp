#include <iostream>

using namespace std;

/**
 * Un bucle for es una estructura de control de repetición que le permite escribir de manera eficiente un bucle que debe ejecutarse una cantidad específica de veces.
 * 
 * La sintaxis de un for en c++ es consta de 3 partes:
 *          (1)             (2)                (3)
 * for (inicializacion; condicion; incrementador/decrementador) {
 *      cuerpo del bucle
 * }
*/

int main() {
    
    // Ejecución del loop

    // Inicialización; Condición, Incrementador
    for ( int i = 10; i <= 20; i++) {
        cout << "El valor de i es: " << i << endl;
    }

    return 0;

}