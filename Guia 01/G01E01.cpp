/*
    Dados los catetos a y b ambos reales y positivos, de un tri�ngulo rect�ngulo, se solicita
    hallar la medida de su hipotenusa.
*/


#include<fstream>
using namespace std;

main() {
    float a, b, c;

    cout << "Calcular hipotenusa con datos de catetos a y b" << endl;
    cout << "Cateto a: ";
    cin >> a;
    cout << "Cateto b: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "Hipotenusa: " << c;
    return 0;
}
