#include<iostream>
using namespace std;

class Datos {
private:
    int vector[5];
public:
    // Constructor para cargar los datos
    Datos() {
        for (int i = 0; i < 5; i++) {
            cout << "Ingrese el valor para el elemento " << i + 1 << ": ";
            cin >> vector[i];
        }
    }

    // Método para imprimir todo el vector
    void imprimir() {
        for (int i = 0; i < 5; i++) {
            cout << "Elemento " << i + 1 << ": " << vector[i] << endl;
        }
    }

    // Método para imprimir hasta un índice específico
    void imprimir(int hasta) {
        for (int i = 0; i < hasta && i < 5; i++) {
            cout << "Elemento " << i + 1 << ": " << vector[i] << endl;
        }
    }

    // Método para imprimir un rango de valores
    void imprimir(int desde, int hasta) {
        for (int i = desde; i < hasta && i < 5; i++) {
            cout << "Elemento " << i + 1 << ": " << vector[i] << endl;
        }
    }
};

int main() {
    Datos obj;
    obj.imprimir();
    cout << "Imprimir hasta el tercer elemento:" << endl;
    obj.imprimir(3);
    cout << "Imprimir del segundo al cuarto elemento:" << endl;
    obj.imprimir(1, 4);

    return 0;
}

