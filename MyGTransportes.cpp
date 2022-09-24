#include <iostream> //librerias a utilizar
#include <cmath>

using namespace std;

int main (){

float peso, preciokg, distancia, preciokm, pesovolu, largo, ancho, alto, tarifavolu, tarifatotal;
int opcion;
preciokg= 2.5;
preciokm= 0.13;

cout <<" Bienvenido a su asistente para calcular el precio de sus encomiendas"<< endl;
cout <<" 1. Si desea transportar docuemntos la tarifa sera siempre de 40 quetzales"<< endl;
cout << "2. deseo transportar mercaderia de mas peso"<< endl;
cout << " Elija la opcion a realizar"<< endl;
cin >> opcion;

switch(opcion){
		case 1:
        cout<<endl;
        cout<< "La tarifa para documentos será de 40 Quetzales para cualquier parte del pais";
        cout<< endl;
        break;

        case 2:
        cout<< endl;
        cout <<" Ingrese el peso del paquete en kilogramos, si no conoce el peso presione 0"<< endl;
        cin >> peso;

          if (peso=0)
          {
            cout <<"Ingrese los kilometros de distancia a los que estamos de la entrega del paquete"<< endl;
            cin >> distancia;

            cout <<"Ingrese la altura del paquete en centimetros"<< endl;
            cin >> alto;
            
            cout <<"Ingrese el largo del paquete en centimetros"<< endl;
            cin >> largo;

            cout <<"Ingrese el ancho del paquete en centimetros"<< endl;
            cin >> ancho;

            pesovolu=(alto*largo*ancho)/2200;
            pesovolu= preciokg*pesovolu;
            distancia= distancia*preciokm;
            tarifavolu=pesovolu+distancia;
            
            cout <<" La tarifa total a pagar por su envio es de "<<tarifavolu << endl;

          }

          else
          {

            cout <<"Ingrese los kilometros de distancia a los que estamos de la entrega del paquete"<< endl;
            cin >> distancia;

            peso=peso*preciokg;
            distancia=distancia*preciokm;
            tarifatotal=peso+distancia;

            cout <<"La tarifa total a pagar por su envio es de: "<< tarifatotal<< endl;

          }

    system("PAUSE");
    return 0;      
        

        

        

        

        







}

}