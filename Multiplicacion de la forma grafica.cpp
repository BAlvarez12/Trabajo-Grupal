#include <iostream>
#include <string>

using namespace std;

void multiplicacion_forma_grafica() {
    // Solicitar al usuario los n�meros a multiplicar
    int multiplicand, multiplier;
    cout << "Ingrese el multiplicando: ";
    cin >> multiplicand;
    cout << "Ingrese el multiplicador: ";
    cin >> multiplier;

    // Calcular el resultado
    int result = multiplicand * multiplier;

    // Mostrar los n�meros y el resultado en la consola
    cout << "Multiplicando: " << multiplicand << endl;
    cout << "Multiplicador: " << multiplier << endl;
    cout << "Resultado: " << result << endl;

    system("pause");
}
