#include <iostream>

using namespace std;

/**
 * Una declaración de bucle while ejecuta repetidamente una declaración de destino siempre que una condición dada sea verdadera.
 * 
 * La sintaxis de un bucle while en c++ es la siguiente:
 * 
 * while(condición) {
   cuerpo del bucle
}
*/

int main() {

    // Declaración variable local (inicialización)
    int a = 10;

    // Ejecución bucle while (condición)
    while( a < 20 ) {
        cout << "El valor de a es: " << a << endl;

        // Incrementador
        a++;
    }

    return 0;

}