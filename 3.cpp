//Función que Convierte de Grados Celsius a Fahrenheit

#include <iostream>

using namespace std;

// Definición de la función 'celsiusAFahrenheit'
double celsiusAFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {

    double temperaturaCelsius;

    // Solicitar al usuario que ingrese una temperatura en Celsius
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> temperaturaCelsius;

    // Llamar a la función 'celsiusAFahrenheit' y mostrar el resultado
    double temperaturaFahrenheit = celsiusAFahrenheit(temperaturaCelsius);
    cout << "La temperatura en grados Fahrenheit es: " << temperaturaFahrenheit << endl;
    return 0;
}
