#include <iostream>

using namespace std;

struct Persona {  // Estructura
    string nombre;
    int edad;
};

class Estudiante {  // Clase
    private:
        string nombre;
        int edad;
    public:
        void setDatos(string n, int e) { nombre = n; edad = e; }
        void mostrar() { cout << nombre << " tiene " << edad << " años." << endl; }
};

int main(){
    Persona persona1;
    persona1.edad = 20;
    persona1.nombre = "Eduardo";
    cout << persona1.nombre << persona1.edad << endl;
    
    Estudiante estudiante1;
    estudiante1.setDatos("Eduardo", 21);
    estudiante1.mostrar();

    return 0;
}
