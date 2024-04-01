#include <iostream>

using namespace std;

void convertidor_medidas(){
	
    int opcion;
    double cantidad;

    cout<<"Selecciona la conversion que deseas realizar: "<<endl;
    cout<<"1.Kilometros a Millas"<<endl;
    cout<<"2.Metros a Pulgadas"<<endl;
    cout<<"3.Libras a Kilos"<<endl;
    cout<<"4.Kilos a Libras"<<endl;
    cout<<"5.millas a pulgadas"<<endl;
    cout<<"6.pulgas a metros"<<endl;
    cout<<"Ingrese el número de la opcion: ";
    cin>>opcion;

    switch(opcion){
        case 1:
            cout<<"Ingrese la cantidad en kilometros: ";
            cin>>cantidad;
            cout<<cantidad<<" kilometros equivalen a "<<cantidad*0.621371<<" millas";
             cout<<""<<endl;
            break;
        case 2:
            cout<<"Ingrese la cantidad en metros: ";
            cin>>cantidad;
            cout<<cantidad<<" metros equivalen a "<<cantidad*39.3701<<" pulgadas";
             cout<<""<<endl;
            break;
        case 3:
            cout<<"Ingrese la cantidad en libras: ";
            cin>>cantidad;
            cout<<cantidad<<" libras equivalen a "<<cantidad*0.453592<<" kilos";
             cout<<""<<endl;
            break;
        case 4:
            cout<<"Ingrese la cantidad en kilos: ";
            cin>>cantidad;
            cout<<cantidad<<" kilos equivalen a "<<cantidad*2.20462<<" libras";
             cout<<""<<endl;
            break;
        case 5:
        	 cout<<"Ingrese la cantidad de millas: ";
            cin>>cantidad;
            cout<<cantidad<<" millas equivalen a "<<cantidad*1.60934<<" kilometros";
             cout<<""<<endl;
            break;
        case 6:
        	 cout<<"Ingrese la cantidad de pulgadas: ";
            cin>>cantidad;
            cout<<cantidad<<" pulgadas equivalen a "<<cantidad*0.0254<<" metros";
            cout<<""<<endl;
            break;
        
        default:
            cout<<"Opción no válida";
    }

    return ;
}
