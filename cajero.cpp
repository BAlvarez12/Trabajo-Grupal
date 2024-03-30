#include <iostream>

using namespace std;

// Estructura para almacenar la informaci�n de la cuenta del usuario
struct Cuenta {
    string nombre;
    int numeroCuenta;
    float saldo;

    // Constructor
    Cuenta(string n, int num, float s) : nombre(n), numeroCuenta(num), saldo(s) {}
};

// Funci�n para mostrar el men� y obtener la opci�n del usuario
int mostrarMenu() {
    int opcion;
    cout << "Bienvenido al Cajero Autom�tico\n";
    cout << "1. Consultar saldo\n";
    cout << "2. Depositar dinero\n";
    cout << "3. Retirar dinero\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opci�n: ";
    cin >> opcion;
    return opcion;
}

// Funci�n para consultar saldo
void consultarSaldo(Cuenta cuenta) {
    cout << "Saldo actual: Q" << cuenta.saldo << endl;
}

// Funci�n para depositar dinero
void depositarDinero(Cuenta &cuenta) {
    float cantidad;
    cout << "Ingrese la cantidad a depositar (en quetzales): Q";
    cin >> cantidad;
    cuenta.saldo += cantidad;
    cout << "Dep�sito realizado con �xito\n";
}

// Funci�n para retirar dinero
void retirarDinero(Cuenta &cuenta) {
    float cantidad;
    cout << "Ingrese la cantidad a retirar (en quetzales, m�ltiplo de 50): Q";
    cin >> cantidad;

    if (cantidad < 50 || ((int)cantidad) % 50 != 0) {
        cout << "El monto a retirar debe ser un m�ltiplo de 50 quetzales.\n";
    } else if (cantidad > cuenta.saldo) {
        cout << "Saldo insuficiente\n";
    } else {
        cuenta.saldo -= cantidad;
        cout << "Retiro de Q" << cantidad << " realizado con �xito\n";
    }
}

void cajero () {
    // Crear una cuenta de ejemplo
    Cuenta cuenta("Usuario Ejemplo", 123456789, 1000.0);

    int opcion;
    do {
        opcion = mostrarMenu();
        switch (opcion) {
            case 1:
                consultarSaldo(cuenta);
                break;
            case 2:
                depositarDinero(cuenta);
                break;
            case 3:
                retirarDinero(cuenta);
                break;
            case 4:
                cout << "Gracias por utilizar nuestros servicios\n";
                break;
            default:
                cout << "Opci�n no v�lida\n";
                break;
        }
    } while (opcion != 4);

    return;
}
