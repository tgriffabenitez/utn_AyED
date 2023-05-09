/*
    Dado un valor entero n, y a continuación n ternas de valores enteros sin orden, se deberán
    emitir cada una de esas ternas en forma ordenada decreciente en las mismas variables. Por
    fin de proceso, se debe emitir el menor y el mayor valor de todas las ternas ingresadas.
*/

#include<fstream>
#include<algorithm>
using namespace std;

void bubble_sort(int terna[]);

int main(void) {
    int n;
    int menor = INT_MAX, mayor = INT_MIN;

    cout << "Ingrese un numero entero (n > 0): ";
    cin >> n;

    for(int i = 0; i < n; i++){
        int terna[3];

        cout << "Ingrese la terna: ";
        cin >> terna[0] >> terna[1] >> terna[2];

        bubble_sort(terna);

        cout << terna[0] << " " << terna[1] << " " << terna[2] << endl;

        if(menor > terna[2])
            menor = terna[2];

        if(mayor < terna[0])
            mayor = terna[0];
    }

    cout << "El menor valor es: " << menor << endl;
    cout << "El mayor valor es: " << mayor << endl;
    return 0;
}

void bubble_sort(int* terna) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2 - i; j++) {
            if(terna[j] < terna[j+1]) {
                int temp = terna[j];
                terna[j] = terna[j+1];
                terna[j+1] = temp;
            }
        }
    }

}
