//Incrementar un Número Entero

#include <iostream>

using namespace std;

// Función para incrementar el valor de una variable entera
void incrementar(int &numero) {
    numero++;
}

int main() {

    int valor = 5;

    cout << "Valor antes : " << valor << endl;
    incrementar(valor);
    cout << "Valor despues : " << valor << endl;

    return 0;
}
