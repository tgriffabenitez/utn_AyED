/*
    Hallar la medida de la hipotenusa de cada tri�ngulo rect�ngulo, sabiendo las medidas de
    sus catetos, el proceso finaliza cuando se ingrese un valor menor o igual a cero. Adem�s
    se requiere informar, cantidad de tri�ngulos y porcentajes con hipotenusa mayor a 100,
    promedio de las medidas de las hipotenusas, cantidad de tri�ngulos y porcentajes con
    hipotenusa menor o igual a 100.
*/

#include<fstream>
using namespace std;

int main(void)
{
    float cateto_1, cateto_2, hipotenusa, cantHipMayor100 = 0, longHipotenusaTotal = 0;
    int cantTriangulos = 0;

    do {
        cout << "Ingrese el valor del cateto 1: ";
        cin >> cateto_1;
        if (cateto_1 <= 0)
            break;

        cout << "Ingrese el valor del cateto 2: ";
        cin >> cateto_2;
        if (cateto_2 <= 0)
            break;

        hipotenusa = sqrt(pow(cateto_1, 2) + pow(cateto_2, 2));
        cout << "Hipotenusa: " << hipotenusa << endl;

        longHipotenusaTotal += hipotenusa;
        cantTriangulos++;

        if (hipotenusa > 100){
            cantHipMayor100++;
        }

    }while (true);

    cout << "Cantidad de triangulos: " << cantTriangulos << endl;
    cout << "Promedio de las medidas de las hiponteusas: " << (longHipotenusaTotal/cantTriangulos) << endl;
    cout << "Porcentaje con hipotenusas mayor a 100: " << cantHipMayor100/cantTriangulos << endl;
    cout << "Porcentaje con hipotenusas menores o iguales a 100: " << 1 - (cantHipMayor100/cantTriangulos) << endl;

    return 0;
}
