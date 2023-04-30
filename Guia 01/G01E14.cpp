#include<fstream>
#include<string>

using namespace std;

int main(void) {
	int codigo, numero_vehiculo;
	int numero_auto = 0, numero_camion = 0, numero_moto = 0;
	string nombre_piloto, apellido_piloto, nombre_copiloto, apellido_copiloto, escuderia;
	string nombre_piloto_auto, apellido_piloto_auto, nombre_copiloto_auto, apellido_copiloto_auto, escuderia_auto;
	string nombre_piloto_camion, apellido_piloto_camion, nombre_copiloto_camion, apellido_copiloto_camion, escuderia_camion;
	string nombre_piloto_moto, apellido_piloto_moto, nombre_copiloto_moto, apellido_copiloto_moto, escuderia_moto;
	float tiempo;
	float tiempo_auto_ganador = 1000.0, tiempo_camion_ganador = 1000.0, tiempo_moto_ganadora = 1000.0;

	while(true) {
        cout << "Ingrese el codigo del vehiculo" << endl;
        cout << "1. Auto" << endl;
        cout << "2. Camion" << endl;
        cout << "3. Moto" << endl;
        cout << "0. Salir" << endl;
        cout << "Codigo: ";
        cin >> codigo;

        if(codigo <= 0 || codigo > 3)
            break;

        cout << "Ingrese numero del vehiculo y escuderia: ";
        cin >> numero_vehiculo >> escuderia;
        cout << "Ingrese el tiempo de carrera: ";
        cin >> tiempo;
        cout << "Ingrese los datos del piloto: ";
        cin >> nombre_piloto >> apellido_piloto;
        cout << "Ingrese los datos del copiloto: ";
        cin >> nombre_copiloto >> apellido_copiloto;

        if(codigo == 1 && tiempo < tiempo_auto_ganador){
            nombre_piloto_auto = nombre_piloto;
            apellido_piloto_auto = apellido_piloto;
            nombre_copiloto_auto = nombre_copiloto;
            apellido_copiloto_auto = apellido_copiloto;
            escuderia_auto = escuderia;
            numero_auto = numero_vehiculo;
            tiempo_auto_ganador = tiempo;
        } else if (codigo == 2 && tiempo < tiempo_camion_ganador) {
            nombre_piloto_camion = nombre_piloto;
            apellido_piloto_camion = apellido_piloto;
            nombre_copiloto_camion = nombre_copiloto;
            apellido_copiloto_camion = apellido_copiloto;
            numero_camion = numero_vehiculo;
            escuderia_camion = escuderia;
            tiempo_camion_ganador = tiempo;
        } else if (codigo == 3 && tiempo < tiempo_moto_ganadora) {
            nombre_piloto_moto = nombre_piloto;
            apellido_piloto_moto = apellido_piloto;
            nombre_copiloto_moto = nombre_copiloto;
            apellido_copiloto_moto = apellido_copiloto;
            numero_moto = numero_vehiculo;
            escuderia_moto = escuderia;
            tiempo_moto_ganadora = tiempo;
        }
	} // end while(tue)

    if(numero_auto > 0){
        cout << "El auto ganador es: " << numero_auto << ", de la escuderia: " << escuderia_auto << endl;
        cout << "Tiempo de carrera: " << tiempo_auto_ganador << endl;
        cout << "Piloto: " << nombre_piloto_auto << " " << apellido_piloto_auto << endl;
        cout << "Copiloto: " << nombre_copiloto_auto << " " << apellido_copiloto_auto << endl;
    }

        if(numero_camion > 0){
        cout << "El camion ganador es: " << numero_camion << ", de la escuderia: " << escuderia_camion << endl;
        cout << "Tiempo de carrera: " << tiempo_camion_ganador << endl;
        cout << "Piloto: " << nombre_piloto_camion << " " << apellido_piloto_camion << endl;
        cout << "Copiloto: " << nombre_copiloto_camion << " " << apellido_copiloto_camion << endl;
    }

        if(numero_auto > 0){
        cout << "La moto ganadora es: " << numero_moto << ", de la escuderia: " << escuderia_moto << endl;
        cout << "Tiempo de carrera: " << tiempo_moto_ganadora << endl;
        cout << "Piloto: " << nombre_piloto_moto << " " << apellido_piloto_moto << endl;
        cout << "Copiloto: " << nombre_copiloto_moto << " " << apellido_copiloto_moto << endl;
    }
}
