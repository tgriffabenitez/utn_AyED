/*
    Dado un valor n, entero positivo incluido el cero, hallar el factorial de n.
*/

#include<fstream>
using namespace std;

int main(void)
{
    int num, factorial = 1;
    cout << "Dado un valor n, entero positivo incluido el cero, hallar el factorial de n." << endl;
    cout << "Ingrese el valor de n: ";
    cin >> num;

    while(num > 1) {
        factorial *= num;
        num--;
    }

    cout << "El factorial del numero ingresado es: " << factorial << endl;
    return 0;
}
