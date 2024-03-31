#include <iostream>
#include <sstream>

using namespace std;

// Funci�n para convertir decimal a hexadecimal
string decimalToHexadecimal(int decimal) {
    stringstream ss;
    ss << hex << decimal;
    return ss.str();
}

int main() {
    int decimal;

    // Solicita al usuario que ingrese un n�mero decimal
    cout << "Ingrese un numero decimal: ";
    cin >> decimal;

    // Convierte el n�mero decimal a hexadecimal usando la funcion
    string hexadecimal = decimalToHexadecimal(decimal);

    // Muestra el resultado
    cout << "El numero convertido en Hexadecimal es: " << hexadecimal << endl;

	system("pause");
    return 0;    
}
