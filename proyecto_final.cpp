#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Contacto {
    string nombres;
    string apellidos;
    int edad;
    string telefono;
    string nacionalidad;
    char sexo;
};
void agregarContacto(vector<Contacto>& lista) {
    Contacto nuevo;
    cout << "\n--- Agregar nuevo contacto ---\n";
    cout << "Nombres: ";
    getline(cin, nuevo.nombres);
    cout << "Apellidos: ";
    getline(cin, nuevo.apellidos);
    cout << "Edad: ";
    cin >> nuevo.edad;
    cin.ignore(); 
    cout << "Teléfono: ";
    getline(cin, nuevo.telefono);
    cout << "Nacionalidad: ";
    getline(cin, nuevo.nacionalidad);
    cout << "Sexo (M/F): ";
    cin >> nuevo.sexo;
    cin.ignore(); 
    lista.push_back(nuevo);
    cout << "Contacto agregado correctamente.\n";
}
int main() {
    vector<Contacto> contactos;
    int opcion;
    do {
        cout << "\n----- PROYECTO FINAL -----\n";
        cout << "1. Agregar contacto\n";
        cout << "2. Buscar contacto\n";
        cout << "3. Mostrar lista de contactos\n";
        cout << "4. Editar contactos existentes\n";
        cout << "5. Eliminar contacto\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore();  // Limpiar salto de línea después del número

        switch (opcion) {
            case 1:
                agregarContacto(contactos);
                break;
        }
    } while (opcion != 6);
    return 0;
}

 

 
