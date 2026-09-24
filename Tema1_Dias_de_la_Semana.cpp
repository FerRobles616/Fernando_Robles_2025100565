//Se agregan las librerias utilizar
#include <iostream>
#include <string>

using namespace std; //para que el codigo no se tenga que usar y ya lo detente en el codigo

//se inicializa main
int main () {
	int sem; //se inicializa sem
	cout << "\tDias de la semana" << endl;
	cout << "Ingrese un dia de la semana: " << endl; // se solicita un dia de la semana
	cin >> sem; //usamos cin para leer y guardar la semana ingresada 
	
	//usamos switch para restornar la semana ingresa al usuario
	switch(sem) {
		case 1:
			cout << "El dia ingresado es Lunes"; //se imprime un mensaje indicandole al usuario que es Lunes
			break;
		case 2:
			cout << "El dia ingresado es Martes ";//se imprime un mensaje indicandole al usuario que es Martes
			break;
		case 3:
			cout << "El dia ingresado es Miercoles";//se imprime un mensaje indicandole al usuario que es lunes
			break;
		case 4:
			cout << "El dia ingresado es Jueves";//se imprime un mensaje indicandole al usuario que es Jueves
			break;
		case 5:
			cout << "El dia ingresado es Viernes";//se imprime un mensaje indicandole al usuario que es Viernes
			break;
		case 6:
			cout << "El dia ingresado es Sabado";//se imprime un mensaje indicandole al usuario que es Sabado
			break;
		case 7:
			cout << "El dia ingresado es Domingo";//se imprime un mensaje indicandole al usuario que es Domingo
			break;
		default:
			cout << "El dia ingresado no existe";//se imprime un mensaje indicandole al usuario que la semana ingresada no existe
	}
	return 0; //se retorna 0 para terminar el programa
}
