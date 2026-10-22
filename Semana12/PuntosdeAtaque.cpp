#include <iostream>
#include <string>

using namespace std;

struct personaje {
	string nombre;
	int ataque; 
};

int main () {
	personaje p1 = {"Saitama", 999999999};
	personaje p2 = {"Goku", 999999999};
	
	if (p1.ataque > p2.ataque) {
		cout << "Nombre:" << p1.nombre << "\nAtaque:" << p1.ataque << "\nEs el mas fuerte";
	}else if (p1.ataque < p2.ataque) {
		cout << "Nombre:" << p2.nombre << "\nAtaque:" << p2.ataque << "\nEs el mas fuerte";	
	}else{
		cout << "Ambos tienen el mismo ataque";
	}
	return 0;
}
