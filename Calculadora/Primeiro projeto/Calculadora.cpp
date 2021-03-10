#include "Calculadora.h"

float Calculadora::somar(float operadorA, float operadorB)
{
    resultado = operadorA + operadorB;

    return resultado;
}

float Calculadora::subtrair(float operadorA, float operadorB)
{
    resultado = operadorA - operadorB;
    return resultado;
}
