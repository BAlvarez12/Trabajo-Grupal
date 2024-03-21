#include <iostream>

using namespace std;

void multiplicar(){
	
    int num;
    
    cout << "Ingrese un numero para realizar la tabla: ";
    cin >> num;
    
    
    cout << "Tabla de multiplicar del " <<num<<":"<< endl;
    for (int i=1;i<=10;++i) {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }

  system("Pause");
}
