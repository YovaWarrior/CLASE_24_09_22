#include "iostream"
#include "stdlib.h"

using namespace std;
int main()
{

    for (int i = 1; i <= 100; i += 2)
    { // Notemos que escribir i+=2 es similar a escribir i = i + 2
        cout << i << endl;
    }
    system("PAUSE");
    return 0;
}