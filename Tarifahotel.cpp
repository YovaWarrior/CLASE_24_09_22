//JEFERSON ALEXIS SUCHITE CHAVEZ 0909-22-12681//
//MARIO FRUMENCIO TUM TZOC 0909-22-17925//
//CARLOS GIOVANNI MARTINEZ ALDANA 0909-22-//


//CALCULAR TARIFA DE UN HOTEL//
#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

void crear();
int abrir();

//para creal el programa//
int main(){
	int opcion = 0;
	system("color D0"); 
	string nombre, apellido;
	float npersonas, iva, inguat, tarifa;
	
	cout<<"---------------------------------------------\n";
	cout<<"|     Bienvenidos al Programa De Reservas   |\n";
	cout<<"|     1. Agregar Cliente                    |\n";
	cout<<"|     2. Abrir Documento del Cliente        |\n";
	cout<<"|     0. Salir                              |\n";
	cout<<"---------------------------------------------\n";
	cout<<"Elija la opcion a realizar: ";
	cin>>opcion;

//Opcion para seleccionar lo que necesitas hacer//
	switch(opcion){
		case 1:
            cout << endl;
			cout<<"Asistente de Hotel\n";
            cout << endl;
			crear();
			break;
		case 2:
			abrir();
			break;
		case 0:
			cout<<"Vuelva Pronto";
            cout << endl;
			break;
		default:
			cout<<"Opcion no Valida";
            cout << endl;
			break;
	}
	
	system("pause 0");
}

//Para crear y llenar el documento//
void crear(){
	string nombre, nombreEm, apellido, documento, extension ;
	float npersonas, iva, inguat, tarifa1, tarifa2, impuesto;
    iva = 0.12;
    inguat = 0.10;
	cout<<"Escribe el nombre del documento: " << endl;
	cin>>nombre;
	cout << "INGRESE SU NOMBRE " << endl;
    cin >> nombreEm;
	cout << "INGRESE SU APELLIDO " << endl;
	cin>>apellido;
	cout << "INGRESE EL NUMERO DE PERSONAS POR HABITACION " << endl;
	cin >> npersonas;
    tarifa1 = (npersonas * 85);
	impuesto = ((tarifa1)*(iva + inguat));
    tarifa2 = (tarifa1 + impuesto);
    cout << "LA TARIFA ES DE: Q" << tarifa1 << " + IMPUESTO DE: Q" << impuesto << " = Q" << tarifa2 << endl;
    cout << endl;
	extension = ".txt";
	documento = nombre += extension;

	//Esto se muestra dentro del documento creado//
	ofstream fs(documento.c_str());
	fs<<"           CLIENTE: " << nombreEm <<" " <<apellido <<endl; 
	fs<<"     LA TRIFA ES DE Q " << tarifa2 <<endl; 

	fs.close();
}

//Para abrir el documento//
int abrir(){
	system("color 4a");
	string nombre, documento, extension ;
	cout<<"Escribe el nombre del documento para abrir: ";
	cin>>nombre;
	extension = ".txt";
	documento = nombre += extension;

	ifstream archivo(documento.c_str());
	string linea;
	//Obtener linea de archivo, y almacenar contenido en "linea"//
	while (getline(archivo, linea)) {
		// Lo vamos imprimiendo //
		cout<<linea<<endl;
	}

	return 0;

}