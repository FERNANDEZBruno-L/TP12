#include<iostream>
#include<string>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
public:
    // Constructor para cargar los datos personales
    void cargarDatos() {
        cout << "Ingrese el nombre: ";
        cin >> nombre;
        cout << "Ingrese la edad: ";
        cin >> edad;
    }

    // Método para imprimir los datos personales
    void imprimirDatos() const {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};

class Empleado : public Persona {
private:
    double sueldo;
public:
    // Método para cargar el sueldo
    void cargarSueldo() {
        cout << "Ingrese el sueldo: ";
        cin >> sueldo;
    }

    // Método para imprimir el sueldo
    void imprimirSueldo() const {
        cout << "Sueldo: " << sueldo << endl;
    }
};

int main() {
    Persona p;
    p.cargarDatos();
    p.imprimirDatos();

    Empleado e;
    e.cargarDatos();
    e.cargarSueldo();
    e.imprimirDatos();
    e.imprimirSueldo();

    return 0;
}

