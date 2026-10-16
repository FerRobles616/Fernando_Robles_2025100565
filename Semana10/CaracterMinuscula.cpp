#include <iostream>
#include <string>

using namespace std;

int main () {
	char letra;
	while (true) {
		cout << "ingrese un caracter:\n";
		cin >> letra;
		if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
			cout << "Ingresaste una vocal minuscula";
			break;
		} else {
			cout << "Puede continuar escribiendo hasta ingresar una vocal minuscula";
		}
		}
	return 0;
}
	
