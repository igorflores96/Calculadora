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

float Calculadora::multiplicar(float operadorA, float operadorB)
{
    resultado = operadorA * operadorB;

    return resultado;
}

float Calculadora::dividir(float operadorA, float operadorB)
{
    if (operadorB != 0)
    {
        resultado = operadorA / operadorB;

        return resultado;
    }
    else
    {
        return 0.0f;
    }
 
}
