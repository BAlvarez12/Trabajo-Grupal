#include <iostream>

using namespace std;

// Estructura para almacenar la información de la cuenta del usuario
struct Cuenta {
    string nombre;
    int numeroCuenta;
    float saldo;

    // Constructor
    Cuenta(string n, int num, float s) : nombre(n), numeroCuenta(num), saldo(s) {}
};

// Función para mostrar el menú y obtener la opción del usuario
int mostrarMenu() {
    int opcion;
    cout << "Bienvenido al Cajero Automático\n";
    cout << "1. Consultar saldo\n";
    cout << "2. Depositar dinero\n";
    cout << "3. Retirar dinero\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opción: ";
    cin >> opcion;
    return opcion;
}

// Función para consultar saldo
void consultarSaldo(Cuenta cuenta) {
    cout << "Saldo actual: Q" << cuenta.saldo << endl;
}

// Función para depositar dinero
void depositarDinero(Cuenta &cuenta) {
    float cantidad;
    cout << "Ingrese la cantidad a depositar (en quetzales): Q";
    cin >> cantidad;
    cuenta.saldo += cantidad;
    cout << "Depósito realizado con éxito\n";
}

// Función para retirar dinero
void retirarDinero(Cuenta &cuenta) {
    float cantidad;
    cout << "Ingrese la cantidad a retirar (en quetzales, múltiplo de 50): Q";
    cin >> cantidad;

    if (cantidad < 50 || ((int)cantidad) % 50 != 0) {
        cout << "El monto a retirar debe ser un múltiplo de 50 quetzales.\n";
    } else if (cantidad > cuenta.saldo) {
        cout << "Saldo insuficiente\n";
    } else {
        cuenta.saldo -= cantidad;
        cout << "Retiro de Q" << cantidad << " realizado con éxito\n";
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
                cout << "Opción no válida\n";
                break;
        }
    } while (opcion != 4);

    return;
}
