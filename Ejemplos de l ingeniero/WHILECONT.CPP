
// CICLO WHILE

#include <iostream>

using namespace std;

int main()
{

    int i; // variable i

    i = 0; // variable inicia con valor 0

    while (i <= 10) // condicion  i menor que 10
    {
        cout << i << endl; // imprime el valor que tiene i por cada vuelta
        i++;               // aumente o disminuye de 1 en 1 el valor de i
    }

    system("PAUSE");
    return 0;
}