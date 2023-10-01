// 03 - Tipos de Datos

#include <iostream>
#include <limits>

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

   // El operador sizeof() devuelve el tamaño de varios tipos de datos, uso: sizeof(tipo_dato)

    // Mostrar tamaño del tipo de datos (ocupación en memoria)
    cout << "---------- Peso en memoria de los tipos de datos: ----------" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "-------------------- \n" << endl;

    /**
     * Para ver el mínimo y máximo de un tipo de dato hacemos lo siguiente
     * std::numeric_limits<tipo_dato>::min() -> esto devuelve el valor mínimo que puede tomar el tipo de dato dado
     *  Ejemplo:
     *      std::numeric_limits<int>::min() -> esto me va a dar el mínimo valor aceptado para el tipo de dato int
     * min() -> devuelve el valor mínimo
     * max() -> devuelve el valor máximo
     * 
     * En C++ y en otros lenguajes de programación, la palabra clave "unsigned" se utiliza para declarar variables que solo pueden contener valores no negativos, es decir, 
     * números enteros iguales o mayores que cero. Las variables declaradas como  "unsigned" no pueden contener valores negativos y no tienen signo, lo que significa que solo
     * representan números positivos o cero. Por ejemplo, puedes declarar una variable entera sin signo (unsigned int) de la siguiente manera:
        unsigned int miVariable = 42;
    */

   unsigned int miVariable = 42;

    cout << "---------- Rango del dato: ----------" << endl;
    cout << "Minimo int: " << numeric_limits<int>::min() << endl;
    cout << "Maximo int: " << numeric_limits<int>::max() << endl;
    cout << "Minimo int sin signo (solo positivos): " << numeric_limits<unsigned int>::min() << endl;
    cout << "Maximo int sin signo (solo positivos): " << numeric_limits<unsigned int>::max() << endl;
    cout << "Minimo long int: " << numeric_limits<long int>::min() << endl;
    cout << "Maximo long int: " << numeric_limits<long int>::max() << endl;
    cout << "Unsigned Long Int Min: " << numeric_limits<unsigned  long int>::min() <<endl;
    cout << "Unsigned Long Int Max: " << numeric_limits<unsigned  long int>::max() << endl;
    cout << "-------------------- \n" << endl;

    return 0;

}