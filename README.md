# Sistema de Reservas de Bilhetes (Autocarro/Comboio)

## Descrição
Este programa em **C++** simula um sistema de reservas de lugares em autocarros ou comboios. O utilizador pode:
- Visualizar o mapa de lugares (0 = Livre, 1 = Ocupado)
- Reservar lugares disponíveis
- O estado das reservas é salvo em um ficheiro (`mapa_viagem.txt`) para persistência.

## Funcionalidades
- Mostrar o mapa de lugares
- Reservar lugares (verifica se estão disponíveis)
- Persistência de dados (salva as reservas em um ficheiro de texto)

## Como Usar
1. Clone este repositório:
    ```bash
    git clone <URL_DO_REPOSITORIO>
    ```

2. Abra o projeto em um editor de C++ (ex.: Visual Studio Code).

3. Compile o código:
    ```bash
    g++ main.cpp -o programa
    ```

4. Execute o programa:
    ```bash
    ./programa   # Linux/Mac
    .\programa   # Windows
    ```

5. O menu apresentará opções:
    - `1` → Mostrar Mapa
    - `2` → Reservar Lugar
    - `0` → Sair

6. O estado das reservas será salvo no arquivo `mapa_viagem.txt`.

## Requisitos
- Compilador C++ (ex.: g++, MinGW)
- IDE ou editor de texto para C++ (ex.: Visual Studio Code)
