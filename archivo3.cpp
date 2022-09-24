#include <iostream>
#include <stdlib.h>
#include <fstream> //libreria para el manejo de archivos

using namespace std;

void escribir();    //funcion a crear mas adelante
               //cuerpo del programa
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


    escribir();

    system("pause");
    return 0;
}
  // funcion para crear el archivo
void escribir()
{

    ofstream miarchivo;
    string nombre_archivo;
    string texto_archivo;

    cout << "Escribe el nombre para el archivo";
    getline(cin, nombre_archivo);
    miarchivo.open(nombre_archivo.c_str(), ios::out);

    if (miarchivo.fail())  //condicion en caso de error
    {
        cout << "Error al abrir el archivo";
        exit(1);
    }
      //para escribir dentro del documento creado uso el nombre de la varibale y lo que este dentro de las comillas correra
      
    cout << "Escribe el texto a guardar en el arxhivo";
    getline(cin, texto_archivo);

    miarchivo<< texto_archivo;

    miarchivo.close(); //cerrar archivo
    
}