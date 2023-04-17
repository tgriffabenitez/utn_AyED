/*
    Dados dos valores a y b, enteros y distintos, se pide emitir un cartel apropiado que
    informe cual es el mayor entre ellos.

*/

#include<fstream>
using namespace std;

int main(void)
{
    int a, b;

    cout << "Dado dos valores a y b, emitir un cartel que informe cual es el mayor." << endl;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    if (a > b)
        cout << "El valor a es mayor que el valor b" << endl;
    if (b > a)
        cout << "El valor b es mayor que el valor a" << endl;

    return 0;
}
