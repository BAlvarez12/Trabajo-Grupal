/Conversión de número decimal a número binario/

#include <iostream>

int main() {	
	int n, c, k;
	cout << "Ingrese numero decimal: "<<endl;
	cin >> "%d",&n;

	cout <<"%d en binario es: " << n << endl;

	for (c=7;c>=0;c--){
		k = n>>c;
		if (k&1){
		cout << "1"<<endl;
		}else {
		cout <<"0"<<endl;
		}
	
	return 0;
}
