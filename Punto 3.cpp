#include<iostream>
using namespace std;

class Punto {
private:
    int x, y;
public:
    // Constructor sin parámetros (x = 0, y = 0)
    Punto() : x(0), y(0) {}

    // Constructor con parámetros
    Punto(int x_val, int y_val) : x(x_val), y(y_val) {}

    // Método para imprimir los valores
    void imprimir() {
        cout << "Punto: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Punto p1;  // Llama al constructor sin parámetros
    Punto p2(3, 4);  // Llama al constructor con parámetros

    p1.imprimir();
    p2.imprimir();

    return 0;
}

