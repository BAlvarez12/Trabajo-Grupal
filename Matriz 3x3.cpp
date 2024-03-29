#include <iostream>

using namespace std;

int main() {
  // Declaramos una matriz de 3x3
  int matriz[3][3];

  // Pedimos al usuario que ingrese los datos de la matriz
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }

  // Calculamos el determinante de la matriz
  int determinante = 0;
  for (int i = 0; i < 3; i++) {
    determinante += matriz[0][i] * (matriz[1][(i + 1) % 3] * matriz[2][(i + 2) % 3] - matriz[1][(i + 2) % 3] * matriz[2][(i + 1) % 3]);
  }

  // Imprimimos el determinante
  cout << "El determinante de la matriz es: " << determinante << endl;

  return 0;
}
