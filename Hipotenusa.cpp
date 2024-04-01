#include <iostream>
#include <cmath> 

using namespace std;

void hipotenusa() {
    double cateto1, cateto2;

    cout << "Ingrese el cateto OP: ";
    cin >> cateto1;
    cout << "Ingrese el cateto ADY: ";
    cin >> cateto2;

  
    cout << "La longitud de la hipotenusa es: " << sqrt(cateto1 * cateto1 + cateto2 * cateto2) << endl;

system("pause");
}
