/*
    Crear una función que recibe como parámetros dos valores enteros y retorne el resto de la
    división entera
*/

#include<fstream>
using namespace std;

bool es_divisible(int a, int b);

int main(void){
    int a, b;
    bool resultado;

    cout << "Ingrese el primer valor: ";
    cin >> a;
    cout << "Ingrese el segundo valor: ";
    cin >> b;

    resultado = es_divisible(a, b);

    if(resultado)
        cout << "Verdadero";
    else
        cout << "Falso";

    return 0;
}

bool es_divisible(int a, int b){
    bool resultado;

    if(a % b == 0)
        resultado = true;
    else
        resultado = false;

    return resultado;
}
