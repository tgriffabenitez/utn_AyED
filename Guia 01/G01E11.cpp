/*
    Dado un valor n, entero positivo, obtener la sumatoria de la sucesi�n de Fibonacci hasta
    encontrar un valor mayor a n
*/

#include<fstream>
using namespace std;

int main(void)
{
    int n, a = 0, b = 1, c = 0;

    cout << "Ingrese el valor de n (n >= 0): ";
    cin >> n;

    if(n == 0) {
        cout << a << endl;

    } else if (n == 1) {
        cout << a << " " << b << endl;

    } else {
        cout << a << " " << b << " ";
        while(n > c) {
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
    cout << endl;
    }
    return 0;
}
