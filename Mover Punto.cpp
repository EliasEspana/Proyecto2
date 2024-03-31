#include <iostream>
#include <conio.h>
#include <windows.h>

// Función para establecer la posición del cursor en la pantalla de la consola
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    const int width = 80;
    const int height = 25;
    int x = width / 2;
    int y = height / 2;

    // Bucle principal
    while (true) {
        // Limpiar la pantalla antes de dibujar
        system("cls");

        // Imprimir un mensaje de ejemplo
        std::cout << "Mueve el cursor con las teclas W, A, S y D" << std::endl;

        // Establecer la posición del cursor en la pantalla
        gotoxy(x, y);

        // Capturar la tecla presionada sin esperar a que se presione Enter
        char input = getch();

        // Mover el cursor con las teclas de flecha
        switch (input) {
            case 'w':
                if (y > 0) --y;
                break;
            case 's':
                if (y < height - 1) ++y;
                break;
            case 'a':
                if (x > 0) --x;
                break;
            case 'd':
                if (x < width - 1) ++x;
                break;
            default:
                break;
        }
    }

    return 0;
}
