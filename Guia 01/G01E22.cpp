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


typedef unsigned short ushort;
typedef unsigned int uint;

typedef struct {
    uint a;
    uint b;
    uint c;
} triangulo_t;


void imprimir_menu(void);

string obtener_nombre_alumno(void);

triangulo_t generar_triangulo(void);
string clasificar_triangulo(triangulo_t triangulo);
float calcular_perimetro(triangulo_t triangulo);

float respuesta_alumno_perimetro(void);
string respuesta_alumno_tipo(void);

bool evaluar_alumno_tipo(string tipo_triangulo, string respuesta_alumno_tipo);
bool evaluar_alumno_perimetro(float perimetro_alumno, float perimetro_maquina);

void mostrar_resultados(string alumno, bool tipo_correcto, bool perimetro_correcto, ushort &respuesta_correcta, ushort &respuesta_incorrecta);

int main(void) {
    triangulo_t triangulo;
    bool tipo_correcto, perimetro_correcto;
    ushort respuesta_correcta = 0, respuesta_incorrecta = 0;
    float perimetro_alumno, perimetro_maquina;
    string tipo_alumno, tipo_maquina;
    string alumno;


    imprimir_menu();
    alumno = obtener_nombre_alumno();
    while(alumno != "*") {
        // genero los valores correctos
        triangulo = generar_triangulo();
        perimetro_maquina = calcular_perimetro(triangulo);
        string tipo_maquina = clasificar_triangulo(triangulo);

        // obtengo las respuestas del alumno
        perimetro_alumno = respuesta_alumno_perimetro();
        tipo_alumno = respuesta_alumno_tipo();

        // verifico los datos ingresados por el alumno
        perimetro_correcto = evaluar_alumno_perimetro(perimetro_alumno, perimetro_maquina);
        tipo_correcto = evaluar_alumno_tipo(tipo_maquina, tipo_alumno);

        // muestro por pantalla los resultados
        mostrar_resultados(alumno, tipo_correcto, perimetro_correcto, respuesta_correcta, respuesta_incorrecta);
        alumno = obtener_nombre_alumno();
    }

    return 0;
}

void imprimir_menu() {
    cout << "Examen de matematicas, tema: Trriangulos." << endl;
    cout << "Calcular el perimetro del triangulo e indicar de que tipo es (escaleno, isosceles, equilatero)" << endl;
}

string obtener_nombre_alumno() {
    string nombre_alumno;

    cout << "Ingrese su nombre: ";
    cin >> nombre_alumno;

    return nombre_alumno;
}

triangulo_t generar_triangulo() {
    triangulo_t triangulo;

    randomize();

    triangulo.a = random(50) + 1;
    triangulo.b = random(50) + 1;

    int min_z = abs(triangulo.a - triangulo.b) + 1;
    int max_z = triangulo.a + triangulo.b - 1;

    triangulo.c = random(min_z - max_z) + min_z;

    cout << triangulo.a << " " << triangulo.b << " " << triangulo.c << endl;

    return triangulo;
}

string clasificar_triangulo(triangulo_t triangulo) {
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

float respuesta_alumno_perimetro(void) {
    float perimetro;
    cout << "Ingrese el valor del perimetro: ";
    cin >> perimetro;
    return perimetro;
}

string respuesta_alumno_tipo(void) {
    string tipo_triangulo;
    cout << "Ingrese le tipo del triangulo (isosceles, escaleno, equilatero): ";
    cin >> tipo_triangulo;
    return tipo_triangulo;
}

bool evaluar_alumno_tipo(string tipo_triangulo, string respuesta_alumno_tipo) {
    bool resultado = false;

    if (tipo_triangulo == respuesta_alumno_tipo)
        resultado = true;

    return resultado;
}

bool evaluar_alumno_perimetro(float tipo_alumno, float tipo_maquina){
    bool resultado = false;

    if (tipo_maquina == tipo_alumno)
        resultado = true;

    return resultado;
}

void mostrar_resultados(string alumno, bool tipo_correcto, bool perimetro_correcto, ushort &respuesta_correcta, ushort &respuesta_incorrecta) {
    if (tipo_correcto && perimetro_correcto) {
        respuesta_correcta++;
        cout << alumno << " OK" << endl;

    } else{
        respuesta_incorrecta++;
        cout << alumno << " estudie+" << endl;
    }

}
