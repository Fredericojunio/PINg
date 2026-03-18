#include <iostream>
#include <fstream>
using namespace std;

const int FILAS = 10;
const int COLUNAS = 4;

// NOVO: carregar dados do ficheiro
void carregarMapa(int lugares[FILAS][COLUNAS]) {
    ifstream ficheiro("mapa_viagem.txt");

    if (!ficheiro) {
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUNAS; j++) {
                lugares[i][j] = 0;
            }
        }
        return;
    }

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            ficheiro >> lugares[i][j];
        }
    }

    ficheiro.close();
}

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

    cout << "Fila (1-10): ";
    cin >> fila;

    cout << "Lugar (1-4): ";
    cin >> coluna;

    fila--;
    coluna--;

    if (fila < 0 || fila >= FILAS || coluna < 0 || coluna >= COLUNAS) {
        cout << "Posição inválida!\n";
        return;
    }

    if (lugares[fila][coluna] == 0) {
        lugares[fila][coluna] = 1;
        cout << "Reservado!\n";
    } else {
        cout << "Já ocupado!\n";
    }
}

int main() {
    int lugares[FILAS][COLUNAS];
    int opcao;

    // NOVO: carregar dados ao iniciar
    carregarMapa(lugares);

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
