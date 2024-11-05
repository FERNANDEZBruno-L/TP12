#include<iostream>
#include<string>
using namespace std;

class Socio {
private:
    string nombre;
    int antiguedad;
public:
    // Constructor para cargar datos
    Socio() {
        cout << "Ingrese el nombre del socio: ";
        cin >> nombre;
        cout << "Ingrese la antiguedad en años: ";
        cin >> antiguedad;
    }

    // Método para obtener la antigüedad
    int getAntiguedad() const {
        return antiguedad;
    }

    // Método para obtener el nombre
    string getNombre() const {
        return nombre;
    }
};

class Club {
private:
    Socio socios[3];
public:
    void imprimirSocioMasAntiguo() {
        Socio* masAntiguo = &socios[0];
        for (int i = 1; i < 3; i++) {
            if (socios[i].getAntiguedad() > masAntiguo->getAntiguedad()) {
                masAntiguo = &socios[i];
            }
        }
        cout << "El socio con mayor antiguedad es: " << masAntiguo->getNombre() << " con " << masAntiguo->getAntiguedad() << " años." << endl;
    }
};

int main() {
    Club club;
    club.imprimirSocioMasAntiguo();

    return 0;
}


