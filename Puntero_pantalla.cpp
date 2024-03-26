#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

void puntero(){
 

    while (true) {
        system("clear || cls");
	int x = rand() % 80;
    int y = rand() % 25;

    for (int i = 0; i < y; ++i)
       std::cout << std::endl;
        for (int j = 0; j < x; ++j)
          std::cout << " ";
           std::cout << "*";

        
        usleep(1000000);
       
    }

    return;
}

