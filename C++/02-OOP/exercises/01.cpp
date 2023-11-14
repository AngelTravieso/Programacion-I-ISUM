#include <iostream>
#include <string.h>

using namespace std;

class Cuenta
{
private:
    string titular;
    double cantidad;

public:
    Cuenta(const string &titular) : titular(titular), cantidad(0.0)
    {
    }
    Cuenta(const string &titular, double cantidad) : titular(titular), cantidad(cantidad)
    {
    }
    string getTitular() const
    {
        return titular;
    }
    double getCantidad() const
    {
        return cantidad;
    }
    void setCantidad(double nuevaCantidad)
    {
        cantidad = nuevaCantidad;
    }
    string toString() const
    {
        return "El Titular " + titular + " tiene " + to_string(cantidad) + " euros en la cuenta.";
    }
    void ingresar(double cantidad)
    {
        if (cantidad > 0)
        {
            this->cantidad += cantidad;
            cout << "Se ha ingresa la cantidad de " << cantidad << " a la cuenta." << endl;
        }
        else
        {
            cout << "Error: la cantidad debe ser positiva." << endl;
        }
    }
    void retirar(double cantidad)
    {
        if (cantidad > 0)
        {

            if ((this->cantidad - cantidad) < 0)
            {
                this->cantidad = 0.0;
                cout << "Se ha retirado la cantidad de " << cantidad << ". Ahora el saldo de la cuenta es 0." << endl;
            }
            else
            {
                this->cantidad -= cantidad;
                cout << "Se ha retirado la cantidad de " << cantidad << " de la cuenta." << endl;
            }
        }
        else
        {
            cout << "Error: la cantidad debe ser positiva." << endl;
        }
    }
};

int main()
{
    Cuenta cuenta1("Angel Travieso");
    cout << cuenta1.toString() << endl;

    Cuenta cuenta2("Gustavo Castro", 1600.0);
    cout << cuenta2.toString() << endl;

    cuenta2.retirar(200);
    cuenta2.retirar(500);

    cout << cuenta2.toString() << endl;

    return 0;
}