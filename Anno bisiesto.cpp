#include <iostream>



bool esBisiesto(int ano) {
    
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

void ano() {
    int ano;

   
    std::cout << "Ingrese Un A�o: ";
    std::cin >> ano;

    if (esBisiesto(ano)) {
        std::cout << ano << "Es Un A�o Bisiesto." << std::endl;
    } else {
        std::cout << ano << "No Es Un A�o Bisiesto." << std::endl;
    }

    return ;
}
