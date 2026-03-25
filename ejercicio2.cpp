#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero != 0) {
        suma = suma + numero;
        cin >> numero;
    }
    cout << "La suma total es " << suma << endl;

    cout << "Programa realizado por: " << endl;
    cout << "Luis Fernando Cruz Franco" << endl;

    return 0;
}