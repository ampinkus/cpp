// 02 Entrada y salida de informaci�n

#include <iostream>
using namespace std;

int main(void) {
	int numero;;
	float flotante;
	char caracter;
	string nombre;
	
	/*
	cout << "Digite un numero: ";
	cin >> numero;
	cout << "El valor de numero es: " <<numero<<endl;
	
	cout << "Digite un flotante: ";
	cin >> flotante;
	cout << "El valor de flotante es: " << flotante << endl;
	
	cout << "Digite un caracter: ";
	cin >> caracter;
	cout << "El valor del caracter es: " << caracter << endl;
	
	*/ 
	cout << "ingrese su nombre: ";
	//cin >> nombre; //Ojo:  solo guarda ghasta el pr�ximo caracter blanco
	
	getline(cin,nombre);  // guarda todo lo ingresado
	cout << "Su nombre es: " << nombre << endl;
	ret
	return 0; 
}

