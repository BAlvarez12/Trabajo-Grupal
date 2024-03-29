#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Funci�n para convertir decimal a hexadecimal
string decimalToHexadecimal(int decimalNumber) {
    stringstream ss;
    ss << hex << decimalNumber;
    return ss.str();
}

int main() {
    int decimalNumber;

    // Solicitar al usuario que ingrese un n�mero decimal
    cout << "Ingresa un n�mero decimal: ";
    cin >> decimalNumber;

    // Convertir el n�mero decimal a hexadecimal
    string hexadecimalNumber = decimalToHexadecimal(decimalNumber);

    // Mostrar el resultado
    cout << "El n�mero hexadecimal equivalente es: " << hexadecimalNumber << endl;

    return 0;
}
