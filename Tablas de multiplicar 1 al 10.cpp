#include <iostream>
//EL programa da las tablas del 1 al 10
void tablas_multiplicar_1_al_10() {
    // Ciclo externo para iterar sobre los multiplicandos del 1 al 10
    for (int multiplicando = 1; multiplicando <= 10; ++multiplicando) {
        std::cout << "Tabla de multiplicar del " << multiplicando << ":" << std::endl;
        
        // Ciclo interno para calcular y mostrar la tabla de multiplicar
        for (int multiplicador = 1; multiplicador <= 10; ++multiplicador) {
            std::cout << multiplicando << " x " << multiplicador << " = " << multiplicando * multiplicador << std::endl;
        }
        
        std::cout << std::endl; // Separador entre tablas de multiplicar
    }
    
    system("pause");
}
