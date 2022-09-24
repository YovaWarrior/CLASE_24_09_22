#include <iostream>
#include <stdlib.h>  //Estas 3 son librerias que utilizare
#include <fstream>
#include <cmath>

using namespace std;
void escribir();

int main ()
{ 

  //Defino las variables que utilizare

  float tampers, IVA, Inguat, Tarifatotal;

  //Doy la bienvenida al programa y hago la pregunta de numero de personas
  cout << "Bienvenido al hotel" << endl;
   
  cout << "¿Cuantas personas desean quedarse en una de nuestras habitaciones?" << endl;
  cin >>tampers;
  //Realizo las operaciones y le asigno datos a mis variables para calcular la tarifa de habitación, asi como también el IVA y e Inguat
  tampers=tampers*85;
  IVA=tampers*0.12 ;
  Inguat=tampers*0.10;
  Tarifatotal=tampers+IVA+Inguat;
  //Muestro el resultado de las operaciones
  cout << "La tarifa de habitación según el numero de personas es: " << tampers << endl;
  cout << "El IVA de acuerdo al 12 porciento del servicio por hospedaje es: "<< IVA << endl;
  cout << "El Inguat de acuerdo al 10 porciento del servicio por hospedaje es: "<< Inguat << endl;
  cout << "La tarifa total de la habitación es: " << Tarifatotal <<endl;

   system ("PAUSE");
   return 0;

} 
 void escribir()
 {

    ofstream hotel;    //variable tipo archivo (sirve para representar el flujo de creacion y escritura en el archivo a crear)
    hotel.open("Base de datos Hotel.txt", ios::out);   //abrir el archivo , pero si no existe el archivo con ese nombre se crea y se le nombra con el texto dentro de las comillas

    if (hotel.fail())  //condicion en caso de error
    {
        cout << "Error al abrir el archivo";
        exit(1);
    }
      //para escribir dentro del documento creado uso el nombre de la varibale y lo que este dentro de las comillas correra
      
    hotel << "hj";

    hotel.close();
 

 }

    


