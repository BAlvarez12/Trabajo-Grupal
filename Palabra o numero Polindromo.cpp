#include <iostream>
#include <string>

using namespace std;

bool esPalindromo(string cadena) {
  int longitud = cadena.length();
  for (int i = 0; i < longitud / 2; i++) {
    if (cadena[i] != cadena[longitud - i - 1]) {
      return false;
    }
  }
  return true;
}

void Palabra_numero_polindromo() {
  string cadena;
  cout << "Ingrese una palabra o un numero: ";
  cin >> cadena;

  if (esPalindromo(cadena)) {
    cout << "La cadena " << cadena << " es un palindromo." << endl;
  } else {
    cout << "La cadena " << cadena << " no es un palindromo." << endl;
  }

  return ;
}
