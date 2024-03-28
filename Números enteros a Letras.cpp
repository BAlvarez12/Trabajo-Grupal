#include <iostream>
#include <string>

// Función para convertir números enteros a letras
std::string convertirNumeroALetras(int numero) {
    const std::string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    const std::string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
    const std::string decenas[] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};

    if (numero < 10) {
        return unidades[numero];
    } else if (numero < 20) {
        return especiales[numero - 10];
    } else if (numero < 100) {
        int decena = numero / 10;
        int unidad = numero % 10;
        if (unidad == 0) {
            return decenas[decena];
        } else {
            return decenas[decena] + " y " + unidades[unidad];
        }
    } else if (numero == 100) {
        return "cien";
    } else {
        return "Número fuera de rango";
    }
}

int main() {
    int numero;
    std::cout << "Ingrese un número entre 1 y 100: ";
    std::cin >> numero;

    if (numero >= 1 && numero <= 100) {
        std::cout << "El número " << numero << " en letras es: " << convertirNumeroALetras(numero) << std::endl;
    } else {
        std::cout << "Número fuera de rango." << std::endl;
    }

    return 0;
}
