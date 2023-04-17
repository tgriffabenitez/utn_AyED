/*
    Dados los catetos de un tri�ngulo rect�ngulo, hallar la superficie de un cuadrado, siendo
    uno de sus lados la medida de su hipotenusa, si ella es mayor a 100; caso contrario, es el
    doble de su hipotenusa.
*/

#include<fstream>
using namespace std;

int main(void)
{
    float cateto_1, cateto_2, hipotenusa, superficie_cuadrado;

    cout << "Ingrese el valor del cateto 1: ";
    cin >> cateto_1;
    cout << "Ingrese el valor del cateto 2: ";
    cin >> cateto_2;

    hipotenusa = sqrt(pow(cateto_1, 2) + pow(cateto_2, 2));

    if (hipotenusa > 100){
        superficie_cuadrado = pow(hipotenusa, 2);
    } else {
        superficie_cuadrado = pow(2 * hipotenusa, 2);
    }

    cout << "Hipotenusa: " << hipotenusa << ". La superficie del cuadrado es: " << superficie_cuadrado << endl;

    return 0;
}
