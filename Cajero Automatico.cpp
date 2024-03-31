#include <iostream>
#include <iomanip>
#include <limits>

class CajeroAutomatico {
private:
    float saldo;
    std::string divisa;

public:
    CajeroAutomatico(float saldoInicial, std::string divisa) : saldo(saldoInicial), divisa(divisa) {}

    void consultarSaldo() const {
        std::cout << "Saldo actual: " << divisa << " " << std::fixed << std::setprecision(2) << saldo << std::endl;
    }

    void depositar(float cantidad) {
        if (cantidad <= 0) {
            std::cout << "Error: La cantidad a depositar debe ser mayor que cero." << std::endl;
            return;
        }
        saldo += cantidad;
        std::cout << "Deposito exitoso. Nuevo saldo: " << divisa << " " << std::fixed << std::setprecision(2) << saldo << std::endl;
    }

    void retirar(float cantidad) {
        if (cantidad <= 0) {
            std::cout << "Error: La cantidad a retirar debe ser mayor que cero." << std::endl;
            return;
        }
        if (saldo < cantidad) {
            std::cout << "Error: Fondos insuficientes." << std::endl;
            return;
        }
        saldo -= cantidad;
        std::cout << "Retiro exitoso. Nuevo saldo: " << divisa << " " << std::fixed << std::setprecision(2) << saldo << std::endl;
    }
};

int main() {
    float saldoInicial = 1000;
    std::string divisa = "Q";
    float saldo = saldoInicial;

    int opcion;
    do {
        std::cout << "Bienvenido al Cajero Automatico" << std::endl;
        std::cout << "1. Consultar saldo" << std::endl;
        std::cout << "2. Realizar deposito" << std::endl;
        std::cout << "3. Realizar retiro" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Seleccione una opcion: ";

        // Verificamos si la entrada es valida
        if (!(std::cin >> opcion)) {
            std::cout << "Error: Entrada no valida. Por favor, ingrese un numero." << std::endl;
            std::cin.clear(); // Limpiamos el estado de error del flujo de entrada
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descartamos la entrada incorrecta
            continue; // Saltamos a la proxima iteracion del bucle
        }

        switch (opcion) {
            case 1:
                std::cout << "Saldo actual: " << divisa << " " << std::fixed << std::setprecision(2) << saldo << std::endl;
                break;
            case 2:
                float cantidadDeposito;
                std::cout << "Ingrese la cantidad a depositar: ";
                std::cin >> cantidadDeposito;
                if (cantidadDeposito <= 0) {
                    std::cout << "Error: La cantidad a depositar debe ser mayor que cero." << std::endl;
                } else {
                    saldo += cantidadDeposito;
                    std::cout << "Deposito exitoso. Nuevo saldo: " << divisa << " " << std::fixed << std::setprecision(2) << saldo << std::endl;
                }
                break;
            case 3:
                float cantidadRetiro;
                std::cout << "Ingrese la cantidad a retirar: ";
                std::cin >> cantidadRetiro;
                if (cantidadRetiro <= 0) {
                    std::cout << "Error: La cantidad a retirar debe ser mayor que cero." << std::endl;
                } else if (saldo < cantidadRetiro) {
                    std::cout << "Error: Fondos insuficientes." << std::endl;
                } else {
                    saldo -= cantidadRetiro;
                    std::cout << "Retiro exitoso. Nuevo saldo: " << divisa << " " << std::fixed << std::setprecision(2) << saldo << std::endl;
                }
                break;
            case 4:
                std::cout << "Gracias por utilizar el Cajero Automatico. Hasta luego!" << std::endl;
                break;
            default:
                std::cout << "Opcion no valida. Por favor, seleccione una opcion valida." << std::endl;
                break;
        }

        std::cout << std::endl;
    } while (opcion != 4);

    return 0;
}
