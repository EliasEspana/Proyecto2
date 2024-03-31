#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int opcion;

    // Mostrar el menú de opciones al usuario
    cout << "Seleccione una opcion:" << endl;
    cout << "1. Ejecutar Programa 1" << endl;
    cout << "2. Ejecutar Programa 2" << endl;
    cout << "3. Ejecutar Programa 20" << endl;
    cout << "4. Ejecutar Programa 1" << endl;
    cout << "5. Ejecutar Programa 2" << endl;
    cout << "6. Ejecutar Programa 1" << endl;
    cout << "7. Ejecutar Programa 2" << endl;
    cout << "8. Ejecutar Programa 1" << endl;
    cout << "9. Ejecutar Programa 2" << endl;
    cout << "10. Ejecutar Programa 1" << endl;
    cout << "11. Ejecutar Programa Decimales a Binarios" << endl;
    cout << "12. Ejecutar Programa Decimales a Hexadecimales" << endl;
    cout << "13. Ejecutar Programa Crear Figuras Geometrias Basicas" << endl;
    cout << "14. Ejecutar Programa Mover un Punto en Pantalla" << endl;
    cout << "15. Ejecutar Programa Cajero Automatico" << endl;
    cout << "16. Ejecutar Programa 2" << endl;
    cout << "17. Ejecutar Programa 1" << endl;
    cout << "18. Ejecutar Programa 2" << endl;
    cout << "19. Ejecutar Programa 2" << endl;
    cout << "20. Ejecutar Programa 20" << endl;
    cout << "Ingrese el numero de la opcion: ";
    cin >> opcion;

    // Ejecutar el programa correspondiente según la opción seleccionada
    switch (opcion) {
        case 1:
            if (system("C:\\Proyecto_Grupal\\PrograX.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 2:
            if (system("C:\\Proyecto_Grupal\\PrograX.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 3:
            if (system("C:\\Proyecto_Grupal\\PrograX.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 4:
            if (system("C:\\Proyecto_Grupal\\PrograX.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 5:
            if (system("C:\\Proyecto_Grupal\\PrograX.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 6:
            if (system("C:\\Proyecto_Grupal\\PrograX.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 7:
            if (system("C:\\Proyecto_Grupal\\PrograX.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 8:
            if (system("C:\\Proyecto_Grupal\\PrograX.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 9:
            if (system("C:\\Proyecto_Grupal\\PrograX.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 10:
            if (system("C:\\Proyecto_Grupal\\PrograX.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 11:
            if (system("C:\\Proyecto_Grupal\\decimales a binarios.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 12:
            if (system("C:\\Proyecto_Grupal\\Decimales a Hexadecimal.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 13:
            if (system("C:\\Proyecto_Grupal\\Figuras Geometricas.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 14:
            if (system("C:\\Proyecto_Grupal\\Mover Punto.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 15:
            if (system("C:\\Proyecto_Grupal\\Cajero Automatico.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 16:
            if (system("C:\\Proyecto_Grupal\\PrograX.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 17:
            if (system("C:\\Proyecto_Grupal\\PrograX.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 18:
            if (system("C:\\Proyecto_Grupal\\PrograX.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 19:
            if (system("C:\\Proyecto_Grupal\\PrograX.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 20:
            if (system("C:\\Proyecto_Grupal\\PrograX.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
    }

    return 0;
}
