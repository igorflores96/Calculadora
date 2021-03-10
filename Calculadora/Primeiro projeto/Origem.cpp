#include "Calculadora.h"

using namespace std;

int main() 
{
	

	Calculadora	calculadora;

	cout << "A soma dos valores foi de: " << calculadora.somar(5.0, 5.0) << endl;
	cout << "A subtração dos valores foi de: " << calculadora.subtrair(5.0, 5.0) << endl;
	cout << "A multiplicacao dos valores foi de: " << calculadora.multiplicar(5.0, 5.0) << endl;
	cout << "A divisao dos valores foi de: " << calculadora.dividir(5.0, 5.0) << endl;

	return 0;

}