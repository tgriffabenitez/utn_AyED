/*
    Ingresar un valor n, luego calcular la sumatoria de los n�meros naturales hasta n
    incluido y emitir su resultado.
*/

#include<fstream>
using namespace std;

int main(void)
{
    int n, sumatoria = 0;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    for(int i = 0; i <= n; i++)
        sumatoria += i;

    cout << "La sumatoria es: " << sumatoria << endl;

    return 0;
}
