/*
	Dada una lista de n, valores enteros, encontrar el mayor valor y su posición.
*/

#include<fstream>
using namespace std;

int main(void)
{
	int lista[] = {1,2,9,3,1,2,56,6,4,21,34};
	int maximo = lista[0], indice = 0;
	int	lista_longitud = sizeof(lista)/sizeof(lista[0]);

	for(int i = 1; i < lista_longitud; i++) {
		if(maximo < lista[i]) {
			maximo = lista[i];
			indice = i;
		}
	}
	
	cout << "El maximo numero de la lista es: " << maximo << " y esta en la posicion: "	<< indice << endl;


	return 0;
}
