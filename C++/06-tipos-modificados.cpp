#include <iostream>

using namespace std;

/**
 * Los modificadores de  tipo de datos son
 * signed
 * unsigned
 * long
 * short
*/

/**
 * Los modificadores signed, unsigned, long y short pueden ser aplicados a tipos de base entera (integer). En adición,
 * signed y unsigned pueden ser aplicados a tipos char, y long pueden ser aplicados a tipo double
*/

// Programa para mostrar la diferencia entre integers signed y unsigned
int main() {

    short int i; // un entero con signo
    short unsigned int j; // un entero sin signo

    // Inicialmente se declara una variable 'j' de tipo 'short unsigned int' y se le asigna el valor de 50000
    j = 50000;

    /**
     * Se intenta asignar el valor de 'j' a la variable 'i' que es de tipo 'short int'. El valor 50000 está fuera de
     * rango de un 'short int' con signo, que normalmente tiene un rango de -32768 a 32767 en sistemas de 16 bits
    */
    i = j;

    /**
     * Debido al desbordamiento, el valor de 'i' se comporta como si hubiera rebasado su límite superior y vuelto a comenzar
     * desde el valor más bajo en el rango permitido, que es -32768
    */

    // Esto imprime -15536 50000
    cout << i << " " << j;

    // Por lo tanto, i se establece en -15536, lo que explica por qué se imprime "-15536" para i, mientras que j conserva su valor original de 50000.

    return 0;

}