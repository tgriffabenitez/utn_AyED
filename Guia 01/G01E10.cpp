/*
    Dado un valor n, entero positivo incluido el cero, obtener cada uno de los t�rminos de la
    sucesi�n de Fibonacci.
*/

#include<fstream>
using namespace std;

int main(void)
{
    int n, a = 0, b = 1, c;

    cout << "Ingrese el valor de n (n >= 0): ";
    cin >> n;

    if(n == 0) {
        cout << a << endl;

    } else if (n == 1) {
        cout << a << " " << b << endl;

    } else {
        cout << a << " " << b << " ";
        for(int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}
