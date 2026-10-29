#include <iostream>

using namespace std;

int main () {
	int numsecreto = 7;
	int intento = 0;
	
	cout << "=== ADIVINA EL NUMERO SECRETO ===";
	
	while (intento != numsecreto) {
		cout << "\nIngrese el numero: ";
		cin >> intento;
		
		if (intento < numsecreto) {
			cout << "Muy bajo, Intentelo de nuevo";
		}else if (intento > numsecreto){
			cout << "Muy alto, Intentelo de nuevo";
		}else {
			"Felicidades Adivinaste!";
		}
	}
	return 0;
}
