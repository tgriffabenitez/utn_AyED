/*
    Obtener y emitir los tres primeros numeros perfectos
*/

#include<fstream>
using namespace std;

int main() {
    int i = 1, j, sum, cnt = 0;

    while (cnt < 3) {
        sum = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            cout << i << " es un numero perfecto" << endl;
            cnt++;
        }
        i++;
    }

    return 0;
}
