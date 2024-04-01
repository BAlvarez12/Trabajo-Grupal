#include <iostream>
#include <string>

using namespace std;

void multiplicacion_forma_grafica() {
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

    system("pause");
}
