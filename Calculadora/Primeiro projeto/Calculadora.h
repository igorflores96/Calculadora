#include <iostream>

class Calculadora
{
public:

	float somar(float operadorA, float operadorB);
	float subtrair(float operadorA, float operadorB);
	float multiplicar(float operadorA, float operadorB);
	float dividir(float operadorA, float operadorB); // A/B = B n�o pode ser zero

private:

	float resultado;

};

