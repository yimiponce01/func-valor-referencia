//Función que Suma Dos Números

#include <iostream>

using namespace std;

// Definición de la función 'suma'
int suma(int num1, int num2) {
    return num1 + num2;
}

int main() {
    
    int numero1, numero2;

    // Solicitar al usuario que ingrese dos números
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    // Llamar a la función 'suma' y mostrar el resultado
    int resultado = suma(numero1, numero2);
    cout << "La suma de " << numero1 << " y " << numero2 << " es " << resultado << endl;
    return 0;
}
