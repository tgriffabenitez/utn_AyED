/*
    Crear una función que recibe dos valores enteros y retorne el M.C.D.
    Nota: Aplicar la siguiente estrategia:
    Repetir mientras el segundo parámetro sea distinto de cero
        Obtener el resto(parámetro1, parámetro2)
        Asignar al parámetro1 lo del parámetro2
        Asignar al parámetro2 lo del resto
    FinRepetir
    Asignar al nombre de la función lo del parámetro1
*/

#include<fstream>
using namespace std;

int calcular_MCD(int num1, int num2);

int main(void){
    int num1, num2, resultado;

    cout << "Ingrese el primero numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    resultado = calcular_MCD(num1, num2);

    cout << "El resto de " << num1 << " y " << num2 << " es: "  << resultado << endl;
    return 0;
}


int calcular_MCD(int num1, int num2){
	int resto = 0;

	while(num2 != 0){
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
	}

	return num1;
}
