/*
    Dado un valor entero n, y a continuación n ternas de valores enteros sin orden, se deberán
    emitir cada una de esas ternas en forma ordenada decreciente en las mismas variables. Por
    fin de proceso, se debe emitir el menor y el mayor valor de todas las ternas ingresadas.
*/

#include<fstream>
using namespace std;

void imprimir_menu(void);
int obtener_cantidad_ternas(void);
void obtener_terna(int terna[]);
void ordenar_terna(int terna[]);
void actualizar_menor_mayor(int terna[], int &mayor, int &menor);
void obtener_mayor(int mayor);
void obtener_menor(int menor);


int main(void) {
    int n, terna[3];
    int menor = INT_MAX, mayor = INT_MIN;

    imprimir_menu();
    n = obtener_cantidad_ternas();

    for(int i = 0; i < n; i++) {
        obtener_terna(terna);
        ordenar_terna(terna);
        actualizar_menor_mayor(terna, mayor, menor);
    }

    obtener_menor(menor);
    obtener_mayor(mayor);
    return 0;
}

void imprimir_menu(void) {
    cout << "Programa que emite las n ternas ingresadas de forma ordenada de forma decreciente." << endl;
    cout << "Tambien, imprime el numero menor y el numero mayor de todas las ternas ingresadas." << endl;
}

int obtener_cantidad_ternas(void) {
    int n;
    cout << "Ingrese el valor de n (n > 0): ";
    cin >> n;
    return n;
}

void obtener_terna(int terna[]) {
    cout << "Ingrese la terna: ";
    cin >> terna[0] >> terna[1] >> terna[2];
}

void ordenar_terna(int terna[]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2 - i; j++) {
            if(terna[j] < terna[j+1]) {
                int temp = terna[j];
                terna[j] = terna[j+1];
                terna[j+1] = temp;
            }
        }
    }

    cout << "Terna ordenada: " << terna[0] << " " << terna[1] << " " << terna[2] << endl;
}

void actualizar_menor_mayor(int terna[], int& mayor, int& menor) {
    if (menor > terna[2])
        menor = terna[2];

    if (mayor < terna[0])
        mayor = terna[0];
}

void obtener_menor(int menor) {
    cout << "El menor valor es: " << menor << endl;
}

void obtener_mayor(int mayor) {
    cout << "El mayor valor es: " << mayor << endl;
}
