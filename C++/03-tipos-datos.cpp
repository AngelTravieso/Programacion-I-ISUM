// 03 - Tipos de Datos

#include <iostream>

using namespace std;

int main() {

    /**
     *   Tipo      Keyword (palabra reservada)        Tamaño            Uso 
     *  Boolean              bool                    1 byte            
     *  Character            char                    1 byte
     *  Integer              int                     4 bytes
     *  Float                float                   4 bytes      Se usa cuando la precisión no es crítica y se desea ahorrar memoria en situaciones donde la precisión de 7 dígitos decimales es suficiente.
     *  Doble Flotante       double                  8 bytes      Se usa cuando se necesita una mayor precisión, como en cálculos científicos o financieros donde se requiere precisión de 15 dígitos decimales.
    */

   bool logico = true; // true | false
   char letra = 'a'; // "a"
   int numero = 10;
   float numeroDecimal = 10.5;
   double decimalLargo = 3.132984987651321981;

    // Mostrar tamaño del tipo de datos (ocupación en memoria)
    cout << "---------- Peso en memoria de los tipos de datos: ----------" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "--------------------" << endl;

    return 0;

}