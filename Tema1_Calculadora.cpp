//Se agregan las librerias utilizar
#include <iostream>
#include <string>

using namespace std; //para que el codigo no se tenga que usar y ya lo detente en el codigo

//prototipado de funciones
float suma(float n1, float n2);
float resta(float n1, float n2);
float multip(float n1, float n2);
float division(float n1, float n2);

//se inicializa main
int main () {
	float n1 = 0, n2 = 0; //se inicializan los numeros a ingresar
    float rsuma, rresta, rmultip, rdivision; //se inicializan las variables de resultados
    cout << "Ingrese dos numeros que sean mayor a 0 y menor que 100: " << endl;//se solicitan al usuario dos numeros
    cin >> n1; //se lee y guarda el primer numero en n1
	cin >> n2; //se lee y guarda el primer numero en n2
    
	//se valida que los numeros ingresados sean mayor a 0 y menor que 100
	if (n1 > 0 && n1 < 100 && n2 > 0 && n2 < 100) {
    	rsuma = suma(n1, n2); //retorna la funcion suma y la guarda en rsuma
        	cout << "El resultado de la suma entre:" << n1 << " y " << n2  << endl;
        	cout << "es: " << rsuma; //se imprime en pantalla el resultado de suma
    	rresta = resta(n1, n2); //retorna la funcion resta y la guarda en rresta
    		cout << "\nEl resultado de la resta entre:" << n1 << " y " << n2 << endl;
        	cout << "es: " << rresta; //se imprime en pantalla el resultado de resta
    	rmultip = multip(n1, n2); //retorna la funcion multip y la guarda en rmultip
        	cout << "\nEl resultado de la multip entre:" << n1 << " y " << n2 << endl;
        	cout << "es: " << rmultip; //se imprime en pantalla el resultado de la multiplicacion
        rdivision = division(n1, n2); //retorna la funcion division y la guarda en rdivision
            cout << "\nEl resultado de la division entre:" << n1 << " y " << n2 << endl;
            cout << "es: " << rdivision; //se imprime en pantalla el resultado de la division
        } else {
            cout << "Los numeros ingresados no son validos"; //se imprime un error si los numeros ingresodos no son validos
        }
        return 0;
	}
//funcion suma
float suma(float n1, float n2) {
    return n1 + n2;
}
//funcion resta
float resta(float n1, float n2) {
    return n1 - n2;
}
//funcion multiplicacion
float multip(float n1, float n2) {
    return n1 * n2;
}
//funcion division
float division(float n1, float n2) {
    return n1 / n2;
}
