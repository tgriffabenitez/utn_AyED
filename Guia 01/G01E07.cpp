/*
    Hallar el n�mero irracional e, ingresando previamente un valor n, que indica la cantidad
    de t�rminos a calcular, con n>=0.
*/

#include<fstream>
using namespace std;

int main(void)
{
    int n;
    float e = 0, factorial = 1;

    cout << "Ingrese la cantidad de terminos a calcular (n >= 0): ";
    cin >> n;

    for(int i = 0; i <= n; i++) {
        if(i == 0) {
            e += 1;
        } else {
            factorial *= i;
            e += 1/factorial;
        }
    }

    cout << "El valor de e aproximado con " << n << " terminos es: " << e << endl;
    return 0;
}
