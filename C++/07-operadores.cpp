#include <iostream>

using namespace std;

/*
    Operadores Aritméticos
    +   Suma dos operandos    A + B dará 30
    -   Resta el segundo operando al primero    A - B dará -10
    *   Multiplica ambos operandos    A * B dará 200
    /   Divide el numerador por el denominador    B / A dará 2
    %   Operador módulo y resto después de una división entera    B % A dará 0
    ++  Operador de incremento, aumenta el valor entero en uno    A++ dará 11
    --  Operador de decremento, disminuye el valor entero en uno    A-- dará 9
*/

/*
    Operadores Relacionales
    ==  Comprueba igualdad       (A == B) no es verdadero.
    !=  Comprueba desigualdad    (A != B) es verdadero.
    >   Comprueba mayor que       (A > B) no es verdadero.
    <   Comprueba menor que       (A < B) es verdadero.
    >=  Comprueba mayor o igual   (A >= B) no es verdadero.
    <=  Comprueba menor o igual   (A <= B) es verdadero.
*/

/*
    Operadores Lógicos
    &&  Operador Lógico AND. Si ambos operandos son diferentes de cero, entonces la condición se vuelve verdadera.  (A && B) es falso.
    ||  Operador Lógico OR. Si cualquiera de los dos operandos es diferente de cero, entonces la condición se vuelve verdadera.  (A || B) es verdadero.
    !   Operador Lógico NOT. Se usa para invertir el estado lógico de su operando. Si una condición es verdadera, el operador Lógico NOT la volverá falsa.  !(A && B) es verdadero.
*/

int main() {

     int A = 20;
    int B = 10;

    int suma = A + B;           // 20 + 10 = 30
    int resta = A - B;          // 20 - 10 = 10
    int multiplicacion = A * B; // 20 * 10 = 200
    int division = B / A;       // 10 / 20 = 0
    int modulo = B % A;         // 10 % 20 = 10

    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicacion: " << multiplicacion << endl;
    cout << "Division: " << division << endl;
    cout << "Modulo: " << modulo << endl;

    A++; // Incrementa A en 1, ahora A es 21
    B--; // Decrementa B en 1, ahora B es 9

    cout << "Incremento de A: " << A << endl;
    cout << "Decremento de B: " << B << endl;

     int C = 30;
    int D = 40;

    bool igualdad = (C == D);      // C es igual a D, es falso
    bool desigualdad = (C != D);   // C no es igual a D, es verdadero
    bool mayor = (C > D);          // C es mayor que D, es falso
    bool menor = (C < D);          // C es menor que D, es verdadero
    bool mayorOigual = (C >= D);   // C es mayor o igual que D, es falso
    bool menorOigual = (C <= D);   // C es menor o igual que D, es verdadero

    cout << "Igualdad: " << igualdad << endl;
    cout << "Desigualdad: " << desigualdad << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;
    cout << "Mayor o igual: " << mayorOigual << endl;
    cout << "Menor o igual: " << menorOigual << endl;

     bool E = true;
    bool F = false;

    bool andLogico = (E && F);  // A AND B, es falso porque B es false
    bool orLogico = (E || F);   // A OR B, es verdadero porque A es true
    bool notLogico = !E;        // NOT A, es falso porque A es true

    cout << "AND Logico: " << andLogico << endl;
    cout << "OR Logico: " << orLogico << endl;
    cout << "NOT Logico: " << notLogico << endl;

    return 0;

}