#include <iostream>
#include <cmath>
#include <string> // Incluimos la biblioteca para usar strings

using namespace std;

void dibujarCuadrado(int lado) {
    for (int i = 0; i < lado; ++i) {
        for (int j = 0; j < lado; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

void dibujarCirculo(int radio) {
    double radio_cuadrado = pow(radio, 2);
    for (int y = -radio; y <= radio; ++y) {
        for (int x = -radio; x <= radio; ++x) {
            double distancia_cuadrada = pow(x, 2) + pow(y, 2);
            if (distancia_cuadrada <= radio_cuadrado) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void dibujarTriangulo(int altura) {
    for (int i = 0; i < altura; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

void dibujarRectangulo(int base, int altura) {
    for (int i = 0; i < altura; ++i) {
        for (int j = 0; j < base; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    string respuesta; // Cambiar la variable a tipo string
    do {
        int figura;
        cout << "Seleccione la figura que desea dibujar:" << endl;
        cout << "1. Cuadrado" << endl;
        cout << "2. Circulo" << endl;
        cout << "3. Triangulo" << endl;
        cout << "4. Rectangulo" << endl;
        cout << "Escriba uno numero del 1 al 4 y Precione enter: ";
        cin >> figura;

        switch(figura) {
            case 1:
                int lado;
                cout << "Ingrese el tamaño del lado del cuadrado: ";
                cin >> lado;
                dibujarCuadrado(lado);
                break;
            case 2:
                int radio;
                cout << "Ingrese el radio del circulo: ";
                cin >> radio;
                dibujarCirculo(radio);
                break;
            case 3:
                int altura;
                cout << "Ingrese la altura del triangulo: ";
                cin >> altura;
                dibujarTriangulo(altura);
                break;
            case 4:
                int baseRect, alturaRect;
                cout << "Ingrese la base del rectangulo: ";
                cin >> baseRect;
                cout << "Ingrese la altura del rectangulo: ";
                cin >> alturaRect;
                dibujarRectangulo(baseRect, alturaRect);
                break;
            default:
                cout << "Opción no válida." << endl;
                break;
        }

        cout << "¿Desea dibujar otra figura? (Si/No): ";
        cin >> respuesta;
    } while(respuesta == "Si" || respuesta == "si" || respuesta == "S" || respuesta == "s");

    return 0;
}

