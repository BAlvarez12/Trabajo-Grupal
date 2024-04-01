#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string decimalToHexadecimal(int decimalNumber) {
    stringstream ss;
    ss << hex << decimalNumber;
    return ss.str();
}

void numeros_decimales_hexadecimales() {
    int decimalNumber;


    cout << "Ingresa un numero decimal: ";
    cin >> decimalNumber;

    string hexadecimalNumber = decimalToHexadecimal(decimalNumber);


    cout << "El numero hexadecimal equivalente es: " << hexadecimalNumber << endl;

    system("pause");
}
