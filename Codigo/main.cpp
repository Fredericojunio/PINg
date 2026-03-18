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

void reservarLugar(int lugares[FILAS][COLUNAS]) {
    int fila, coluna;

    cout << "Fila: ";
    cin >> fila;

    cout << "Lugar: ";
    cin >> coluna;

    fila--;
    coluna--;

    if (lugares[fila][coluna] == 0) {
        lugares[fila][coluna] = 1;
        cout << "Reservado!\n";
    } else {
        cout << "Já ocupado!\n";
    }
}

int main() {
    int lugares[FILAS][COLUNAS] = {0};
    int opcao;

    do {
        cout << "\n1. Mostrar Mapa\n";
        cout << "2. Reservar Lugar\n";
        cout << "0. Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        if (opcao == 1) {
            mostrarMapa(lugares);
        } else if (opcao == 2) {
            reservarLugar(lugares);
        }

    } while (opcao != 0);

    return 0;
}
