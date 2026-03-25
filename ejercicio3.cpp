#include <iostream>
using namespace std;

int main() {
    int contraseña;

    cout << "Ingrese la contrasenea: ";
    cin >> contraseña;

    while (contraseña != 1234 ) {
        cout << "Error vuelva a intentarlo: ";
        cin >> contraseña;
    }
    cout << "contrasenea correcta: " << contraseña << endl;

    cout << "Programa realizado por: " << endl;
    cout << "Luis Fernando Cruz Franco" << endl;

    return 0;
}