#include <iostream>

using namespace std;

// Por convención se recomienda escribir los nombres de las constantes en mayusculas
#define NEWLINE '\n' // También podemos definir variables fuera de la función main

int main() {

    /**
     * Hay dos maneras de definir constantes en C++
     * usando el preprocesador #define
     * usando la palabra reservada const
    */
   
   // #define identificador valor
   #define LENGTH 10
   const int WIDTH = 5;

   int area;

   area = LENGTH * WIDTH;
   cout << "El area es: "  << area << endl;

   cout << NEWLINE;

    return 0;
    
}