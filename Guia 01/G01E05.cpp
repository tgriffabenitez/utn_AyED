/*
    Dado dos valores a y b, enteros positivos incluido el cero, hallar la potencia de a^b
    Si a = 0 entonces b > 0, s� b = 0 entonces a > 0.
*/

#include <fstream>
using namespace std;

int main() {
   int a, b;
   cout << "Ingrese el valor de a: ";
   cin >> a;
   cout << "Ingrese el valor de b: ";
   cin >> b;

   if (a == 0 && b > 0) {
      cout << "La potencia de 0 elevado a " << b << " es 1" << endl;
   } else if (b == 0 && a > 0) {
      cout << "La potencia de " << a << " elevado a 0 es 1" << endl;
   } else {
      int result = pow(a, b);
      cout << "La potencia de " << a << " elevado a " << b << " es " << result << endl;
   }

   return 0;
}

