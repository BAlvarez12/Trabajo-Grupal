#include <iostream>

using namespace std;

void matriz_3x3() {

  int matriz[3][3];


  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }


  int determinante = 0;
  for (int i = 0; i < 3; i++) {
    determinante += matriz[0][i] * (matriz[1][(i + 1) % 3] * matriz[2][(i + 2) % 3] - matriz[1][(i + 2) % 3] * matriz[2][(i + 1) % 3]);
  }


  cout << "El determinante de la matriz es: " << determinante << endl;

  system("pause");
}
