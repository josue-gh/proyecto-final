//agregamos las librerias a utilizar
#include<iostream>
#include<string>

using namespace std;
struct contactos{
	
	string nombres;
	string apellidos;
	int edad;
	string telefono;
	string nacionalidad;
	char sexo;	
}; 
 int main (){
 	contactos est;
 	do {
 		cout << "\n----- PROYECTO FINAL  -----\n";
        cout << "1. Agregar contacto\n";
        cout << "2. Buscar contacto\n";
        cout << "3. Mostrar lista de contactos\n";
        cout << "4. Editar contactos existentes\n";
        cout << "5. Eliminar contacto\n";
        cout << "6. Salir\n";
        cin.ignore();
	 return 0;
}
 

 
