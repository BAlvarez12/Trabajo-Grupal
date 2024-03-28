#include <iostream>



bool esBisiesto(int ano) {
    
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

void anno() {
    int ano;

   
    std::cout << "Ingrese Un Año: ";
    std::cin >> ano;

    if (esBisiesto(ano)) {
        std::cout << ano << "Es Un Año Bisiesto." << std::endl;
    } else {
        std::cout << ano << "No Es Un Año Bisiesto." << std::endl;
    }

    return ;
}
