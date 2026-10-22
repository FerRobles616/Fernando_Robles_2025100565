#include <iostream>
#include <string>

using namespace std;

// Definición de una estructura llamada 'personaje'
// agrupa las propiedades básicas de un personaje.
struct personaje {
	string nombre; //Guarda el nombre del personaje
	int ataque; //Guarda los puntos de Ataque del personaje 
};

int main () {
	personaje p1 = {"Saitama", 999999999}; // Declaración e inicialización del primer personaje
	personaje p2 = {"Goku", 999}; // Declaración e inicialización del segundo personaje
	
	// Condicional para comparar el poder de ataque de ambos personajes
	if (p1.ataque > p2.ataque) {
		cout << "Nombre:" << p1.nombre << "\nAtaque:" << p1.ataque << "\nEs el mas fuerte"; // Si el ataque de p1 es mayor, se imprime su información
	}else if (p1.ataque < p2.ataque) {
		cout << "Nombre:" << p2.nombre << "\nAtaque:" << p2.ataque << "\nEs el mas fuerte";	// Si el ataque de p2 es mayor, se imprime su información
	}else{
		cout << "Ambos tienen el mismo ataque"; // Si el ataque de los personajes es igual, se imprime indicandolo
	}
	return 0;
}
