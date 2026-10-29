#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Definición de la Estructura Personaje
struct Personaje {
    string nombre;
    int vida;
    int ataque;
};

// Función para registrar un nuevo personaje en el archivo
void registrarPersonaje() {
    Personaje p;
    
    cout << "\n--- Registrar Nuevo Personaje ---\n";
    cout << "Ingrese el nombre del personaje: ";
    cin >> ws; // Limpia espacios en blanco pendientes en el buffer
    getline(cin, p.nombre);
    
    cout << "Ingrese los puntos de vida: ";
    cin >> p.vida;
    
    cout << "Ingrese los puntos de ataque: ";
    cin >> p.ataque;

    // Abrir archivo en modo de adición para no borrar registros previos
    ofstream archivo("personajes.txt", ios::app);

    // Verificar si el archivo se abrió correctamente
    if (!archivo.is_open()) {
        cout << "Error: No se pudo abrir el archivo para escritura.\n";
        return;
    }

    // Escribir los datos en el archivo estructuradamente
    archivo << p.nombre << "\n" 
            << p.vida << "\n" 
            << p.ataque << "\n";

    // Cerrar el archivo al terminar
    archivo.close();
    cout << "¡Personaje registrado y guardado exitosamente!\n";
}

// Función para consultar y leer todos los personajes almacenados
void mostrarPersonajes() {
    // Abrir archivo con ifstream para lectura
    ifstream archivo("personajes.txt");

    // Verificar si el archivo se abrió correctamente
    if (!archivo.is_open()) {
        cout << "\n[Aviso] Aún no hay registros guardados o no se pudo abrir el archivo.\n";
        return;
    }

    cout << "\n=================================\n";
    cout << "   LISTA DE PERSONAJES GUARDADOS \n";
    cout << "=================================\n";

    string nombre;
    int vida, ataque;
    int contador = 1;

    // Lectura secuencial de los datos formateados
    while (getline(archivo, nombre) && archivo >> vida >> ataque) {
        // Consumir el salto de línea pendiente tras leer los enteros
        archivo.ignore();

        cout << contador << ". Nombre: " << nombre 
             << " | Vida: " << vida 
             << " | Ataque: " << ataque << "\n";
        contador++;
    }

    if (contador == 1) {
        cout << "El archivo está vacío actualmente.\n";
    }

    // Cerrar el archivo al terminar
    archivo.close();
}

// Menú Interactivo Principal
int main() {
    int opcion;

    do {
        cout << "\n=================================\n";
        cout << "   SISTEMA DE REGISTRO DE JUEGO  \n";
        cout << "=================================\n";
        cout << "[1] Registrar nuevo personaje\n";
        cout << "[2] Ver todos los personajes guardados\n";
        cout << "[3] Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                registrarPersonaje();
                break;
            case 2:
                mostrarPersonajes();
                break;
            case 3:
                cout << "\nSaliendo del sistema. ¡Hasta pronto!\n";
                break;
            default:
                cout << "\nOpción inválida. Por favor, intente de nuevo.\n";
        }
    } while (opcion != 3);

    return 0;
}
