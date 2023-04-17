/*
    Encontrar otra soluci�n al punto anterior para optimizar el tiempo de proceso
*/

#include<fstream>
using namespace std;

int main(void)
{
    int n, sumatoria = 0;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    sumatoria = (n * (n + 1)) / 2;

    cout << "La sumatoria es: " << sumatoria << endl;


    return 0;
}
