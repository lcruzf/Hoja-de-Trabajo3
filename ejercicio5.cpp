#include <iostream>
using namespace std;

int main() {
    int intentos;
    int clave;
    int claveCorrecta = 1234;

    do {
        cout << "Ingresa la contrasenea: " << endl;
        cin >> clave;

        if (clave == claveCorrecta) {
            cout << "Bienvenido" << endl;
            break;

        }
        intentos++;
        cout << "contrasenea incorrecta" << endl;
        cout << "Intento numero: " << 1 + intentos << endl;
    } while(intentos < 3);

        if(intentos == 3 && clave != claveCorrecta) {
            cout << "Acceso denegado." << endl;
        }

    cout << "Programa realizado por: " << endl;
    cout << "Luis Fernando Cruz Franco" << endl;

    return 0;
}