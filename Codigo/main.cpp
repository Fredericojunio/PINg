#include <iostream>
using namespace std;

const int FILAS = 10;
const int COLUNAS = 4;

void mostrarMapa(int lugares[FILAS][COLUNAS]) {
    cout << "\nMapa de Lugares\n\n";

    for (int i = 0; i < FILAS; i++) {
        cout << "Fila " << i + 1 << ": ";
        for (int j = 0; j < COLUNAS; j++) {
            cout << lugares[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int lugares[FILAS][COLUNAS] = {0};

    mostrarMapa(lugares);

    return 0;
}
