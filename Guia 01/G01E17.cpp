/*
    Crear una función que recibe tres parámetros, el primero es un valor booleano, y los otros 2,
    valores enteros. La función deberá retornar el primer valor entero, si el valor booleano es
    verdadero, caso contrario se retorna el segundo valor entero
*/

#include<fstream>
using namespace std;

int devolver_valor(bool valor_boleano, int n, int m);

int main(void) {
    int valor1, valor2;
    bool valor_booleano;

    cout << "Ingrese si es true o false: ";
    cin >> valor_booleano;
    cout << "Ingrese el primer valor: ";
    cin >> valor1;
    cout << "Ingrese el segundo valor: ";
    cin >> valor2;

    cout << "El valor que retorna la funcion es: " << devolver_valor(valor_booleano, valor1, valor2) << endl;

    return 0;
}


int devolver_valor(bool valor_boleano, int n, int m){
    int resultado;

    if (valor_boleano)
        resultado =  n;
    else
        resultado = m;

    return resultado;
}
