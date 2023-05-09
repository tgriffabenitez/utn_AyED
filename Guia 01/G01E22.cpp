/*
    En un curso se toman exámenes a los alumnos por medio de una computadora. Las
    preguntas que se realizan son: Calcular el perímetro de un triángulo y su tipo (Isósceles,
    Escaleno, Equilátero), sabiendo como datos las medidas de sus lados.
    Se solicita que se informe por cada alumno su nombre y un mensaje apropiado si respondió
    bien o mal -se responde bien si contestó correctamente ambas preguntas-.
    Al finalizar el proceso se deberá emitir cantidad de respuestas correctas e incorrectas.
    Indique ud. el valor centinela. Se generará al azar las medidas de los lados y:
    a. Se asume que forman triángulo.
    b. Validar que formen triángulo. (Si (a< b+c) ^ (b<a+c) ^ (c<a+b))
*/

#include<fstream>
using namespace std;

typedef struct {
    int a;
    int b;
    int c;
} triangulo_t;

triangulo_t generar_triangulo();
string clasificacion_triangulo(triangulo_t triangulo);
float calcular_perimetro(triangulo_t triangulo);

int main(void) {
    int respuesta_correcta = 0, respuesta_incorrecta = 0;
    float perimetro_alumno;
    string nombre_alumno, tipo_triangulo, flag;

    cout << "Ingrese su nombre: ";
    cin >> nombre_alumno;

    while(true) {
        triangulo_t  triangulo = generar_triangulo();
        float perimetro_funcion = calcular_perimetro(triangulo);

        cout << "Calcular el perimetro del triangulo e indicar de que tipo es (escaleno, isosceles, equilatero)" << endl;
        cout << "Presione 1 para continuar o -1 para salir: ";
        cin >> flag;

        if(flag == "-1")
            break;

        cout << "Los dado el triangulo: " << triangulo.a << ", " << triangulo.b << ", " << triangulo.c << endl;
        cout << "Calcule el perimetro: ";
        cin >> perimetro_alumno;
        cout << "Indique que tipo de triangulo es (escaleno, isosceles, equilatero): ";
        cin >> tipo_triangulo;

        if(tipo_triangulo == clasificacion_triangulo(triangulo) && perimetro_alumno == perimetro_funcion) {
            respuesta_correcta++;
        } else {
            respuesta_incorrecta++;
        }
    }
    cout << "El alumno: " << nombre_alumno << " tuvo " << respuesta_correcta << " respuestas correctas y " << respuesta_incorrecta << " respuestas incorrectas." << endl;
    return 0;
}

triangulo_t generar_triangulo() {
    triangulo_t triangulo;
    bool es_triangulo_valido = false;

    randomize();
    while(!es_triangulo_valido) {
        triangulo.a = random(50);
        triangulo.b = random(50);
        triangulo.c = random(50);

        // si los valores generados cumplen la condicion de triangulo, salgo del while
        if((triangulo.a < (triangulo.b + triangulo.c) && triangulo.b < (triangulo.a + triangulo.c) && triangulo.c < (triangulo.a + triangulo.b))) {
            es_triangulo_valido = true;
        }
    }

    return triangulo;
}

string clasificacion_triangulo(triangulo_t triangulo) {
    string tipo_triangulo;

    if(triangulo.a == triangulo.b || triangulo.b == triangulo.c || triangulo.a == triangulo.c) {
        tipo_triangulo = "isosceles";

    } else if(triangulo.a == triangulo.b && triangulo.b == triangulo.c && triangulo.c == triangulo.a) {
        tipo_triangulo = "equilatero";

    } else {
        tipo_triangulo = "escaleno";
    }

    return tipo_triangulo;
}

float calcular_perimetro(triangulo_t triangulo) {
    return triangulo.a + triangulo.b + triangulo.c;
}
