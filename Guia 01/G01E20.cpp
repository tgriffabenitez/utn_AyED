/*
    Crear una funci�n que recibe como par�metros dos valores enteros y retorne el resto de la
    divisi�n entera
*/

#include<fstream>
using namespace std;

int resto(int num1, int num2);

int main(void){
    int n, m;

    cout << "Ingrese el primer valor: ";
    cin >> n;
    cout << "Ingrese el segundo valor: ";
    cin >> m;

    cout << "EL resto de la division es: " << resto(n, m) << endl;

    return 0;
}

int resto(int num1, int num2){
    return num1%num2;
}
