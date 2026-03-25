#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingresa un numero entero: ";
    cin >> numero;

    int fila = 1;
    do {
        int posicion = 1;
        do {
            cout << "*";
            posicion++;
        } while (posicion <= fila);

        cout << endl;
        fila++;
    } while (fila <= numero);

    cout << "Programa realizado por: " << endl;
    cout << "Luis Fernando Cruz Franco" << endl;

    return 0;
}