#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int numero_aleatorio(int min_valor, int max_valor);
bool existe_en_arreglo(int arreglo[], int tam_arreglo, int valor);
void generar_distintos(int arreglo[], int cantidad, int min_valor, int max_valor);
void imprimir_numeros(int arreglo[], int cantidad, int min_valor, int max_valor);

int numero_aleatorio(int min_valor, int max_valor) {
    return rand() % (max_valor - min_valor + 1) + min_valor;
}

bool existe_en_arreglo(int arreglo[], int tam_arreglo, int valor) {
    for (int i = 0; i < tam_arreglo; ++i) {
        if (arreglo[i] == valor) return true;
    }
    return false;
}

void generar_distintos(int arreglo[], int cantidad, int min_valor, int max_valor) {
    for (int i = 0; i < cantidad; ++i) {
        int candidato = numero_aleatorio(min_valor, max_valor);
        while (existe_en_arreglo(arreglo, i, candidato)) {
            candidato = numero_aleatorio(min_valor, max_valor);
        }
        arreglo[i] = candidato;
    }
}

void imprimir_numeros(int arreglo[], int cantidad, int min_valor, int max_valor) {
    cout << "10 numeros distintos entre " << min_valor << " y " << max_valor << ":\n";
    for (int i = 0; i < cantidad; ++i) {
        cout << arreglo[i] << (i + 1 < cantidad ? " " : "\n");
    }
    cout << endl;
}

int main() {
    srand(time(0));

    const int CANTIDAD = 10;
    int arr1[CANTIDAD], arr2[CANTIDAD], arr3[CANTIDAD];

    generar_distintos(arr1, CANTIDAD,   30,   50);
    imprimir_numeros(arr1, CANTIDAD,   30,   50);

    generar_distintos(arr2, CANTIDAD,  100, 1000);
    imprimir_numeros(arr2, CANTIDAD,  100, 1000);

    generar_distintos(arr3, CANTIDAD,  -45,  -10);
    imprimir_numeros(arr3, CANTIDAD,  -45,  -10);

    system("pause");
    return 0;
}