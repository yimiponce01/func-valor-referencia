//Función que Calcula el Cuadrado de un Número

#include <iostream>

using namespace std;

// Definición de la función 'cuadrado'
int cuadrado(int numero) {
    return numero * numero;
}

int main() {
    
    int numero;
    cout << "Ingrese un numero : ";
    cin >> numero;

    // Llamada a la función 'cuadrado'
    int resultado = cuadrado(numero);

    cout << "El cuadrado de " << numero << " es " << resultado << endl;
    return 0;
}
