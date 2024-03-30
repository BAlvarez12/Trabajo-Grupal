//Conversión de número decimal a número binario

#include <iostream>

using namespace std;
void decimales_binario () {	
	int n, c, k;
	cout << "Ingrese numero decimal: "<<endl;
	cin >> n;

	cout <<"el numero en binario es: " << n << endl;

	for (c=7;c>=0;c--){
		k = n>>c;
		if (k&1){
		cout << "1";
		}else {
		cout <<"0";
		}
	}
	return;
}
