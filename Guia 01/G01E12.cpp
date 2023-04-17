/*
    Dada una lista de n, valores enteros, encontrar el mayor valor y su posici�n.
*/

#include<fstream>
using namespace std;

int main(void)
{
    int lista[] = {1,2,3,4,5,6,7,8,9,10};
    int indice = -1, longitud, n;

    longitud = sizeof(lista)/sizeof(lista[0]);

    cout << "Ingrese el numero a buscar en la lista: ";
    cin >> n;

    for(int i = 0; i < longitud; i++) {
        if (n == lista[i]) {
            indice = i;
            break; // devuelvo la posicion del primer valor encontrado
        }
    }

    if (indice == -1) {
        cout << "El numero " << n << " no se encontro en la lista." << endl;

    } else {
        cout << "El numero " << n << " se encontro en la posicion: " << (indice + 1) << endl;
    }

    return 0;
}
