/*
    Crear la función sgn(x). A diferencia de la función matemática, sí x = 0, deberá retornar
    cero
*/

#include<fstream>
using namespace std;

int sgn(int x);

int main(void) {
    int x;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "El resultado de la funcion sgn(" << x << ") es: " << sgn(x) << endl;

    return 0;
}


int sgn(int x){
    int resultado;

    if (x < 0)
        resultado = -1;
    else if (x > 0)
        resultado = 1;
    else
        resultado = 0;

    return resultado;
}
