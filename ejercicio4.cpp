#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {

        cout << "Menu interactivo:" << endl;
        cout << "1. Mostrar numeros del 1 al 5" << endl;
        cout << "2. Mostrar numeros pares del 1 al 10" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;


        if (opcion == 1) {
            int i = 1;
            cout << "Numeros: " << endl;
            while (i <= 5) {
                cout << i << endl;
                i++;
            }
            cout << endl;
        }


        if (opcion == 2) {
            int i = 2;
            cout << "Numeros pares: " << endl;
            while (i <= 10) {
                cout << i << endl;
                i += 2;
            }
            cout << endl;
        }



    } while (opcion != 3);

    cout << "Programa finalizado." << endl;

    cout << "Programa realizado por: " << endl;
    cout << "Luis Fernando Cruz Franco" << endl;

    return 0;
}