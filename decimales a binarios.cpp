#include <iostream>
#include <bitset>

using namespace std;

template<typename T>
string toBinary(T num) { //Plantilla que permite escribir codigo que puede funcionar con diferentes tipos de datos en este caso es String
    //Usamos Union para interpretar el número en binario
    union {
        T input;
        int output;
    } data;
    data.input = num;
    string binary = bitset<sizeof(T) * 8>(data.output).to_string();

    // Se eliminan los ceros de la izquierda
    size_t pos = binary.find('1');
    if (pos != string::npos) {
        return binary.substr(pos);
    }
    return "0";
} 

int main() {
    cout << "Ingrese un numero: ";
    if (cin.peek() == '.') {
        // Si el próximo carácter es un '.', entonces seria decimal
        float numero;
        cin >> numero;
        string binario = toBinary(numero);
        cout << "El numero " << numero << " en binario es: " << binario << endl;
    } else {
        // Si no hay un '.', entonces el usuario está ingresando un entero
        int numero;
        cin >> numero;
        string binario = toBinary(numero);
        cout << "El numero " << numero << " en binario es: " << binario << endl;
    }
    
	cout << "Presione Enter para salir...";
    cin.ignore();
    cin.get();
    return 0;
    system("pause");
}

