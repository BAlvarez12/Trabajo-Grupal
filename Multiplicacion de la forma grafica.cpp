#include <iostream>
#include <string>

using namespace std;

int main() {
    // Solicitar al usuario los números a multiplicar
    int multiplicand, multiplier;
    cout << "Ingrese el multiplicando: ";
    cin >> multiplicand;
    cout << "Ingrese el multiplicador: ";
    cin >> multiplier;

    // Calcular el resultado
    int result = multiplicand * multiplier;

    // Mostrar los números y el resultado en la consola
    cout << "Multiplicando: " << multiplicand << endl;
    cout << "Multiplicador: " << multiplier << endl;
    cout << "Resultado: " << result << endl;

    return 0;
}
