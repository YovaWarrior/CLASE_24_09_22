#include <iostream>

using namespace std;

int main () {


/*decalracion de variables*/
long double num1, num2;

cout << "Indice de masa corporal" << "\n";

cout <<"Ingrese su peso en kilogramos " <<"\n";
cin >> num1;

cout << "Ingrese su estatura en metros " << "\n";
cin >> num2;

cout<< num1 << "/" << num2 << "El indice de masa corporal es: " << num1 / num2 << endl;

system ("Pause");
return 0;

}