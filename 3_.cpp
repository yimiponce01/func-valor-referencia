//Calcular Área y Perímetro de un Rectángulo

#include <iostream>

using namespace std;

// Función para calcular el área y el perímetro de un rectángulo
void calcularRectangulo(int largo, int ancho, int &area, int &perimetro) {
    area = largo * ancho;
    perimetro = 2 * (largo + ancho);

}

int main() {

    int largo, ancho, area, perimetro;

    // Solicitar al usuario las dimensiones del rectángulo
    cout << "Ingrese el largo del rectangulo: ";
    cin >> largo;
    cout << "Ingrese el ancho del rectangulo: ";
    cin >> ancho;

    // Calcular área y perímetro
    calcularRectangulo(largo, ancho, area, perimetro);

    // Mostrar resultados
    cout << "area del rectangulo: " << area << endl;
    cout << "Perimetro del rectangulo: " << perimetro << endl;
    return 0;
}
