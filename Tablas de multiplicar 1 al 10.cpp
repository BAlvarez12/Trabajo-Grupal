#include <iostream>

void tablas_multiplicar_1_al_10() {
 
    for (int multiplicando = 1; multiplicando <= 10; ++multiplicando) {
        std::cout << "Tabla de multiplicar del " << multiplicando << ":" << std::endl;
        
   
        for (int multiplicador = 1; multiplicador <= 10; ++multiplicador) {
            std::cout << multiplicando << " x " << multiplicador << " = " << multiplicando * multiplicador << std::endl;
        }
        
        std::cout << std::endl;
    }
    
    system("pause");
}
