#include <iostream>
#include <math.h> 

using std::cin;
using std::cout;
using std::endl;
using std::string;

int iPotencia(int&, int);

int iFatorial(int);

float fProgressao(float&, float, int);

int main()
{
    int a = 2;
    cout << iPotencia(a, 5) << endl;

    int b = 6;
    cout << iFatorial(b) << endl;
    
    float c = 0;
    float razao = 0.1;
    int quantidade = 10;
    
    cout << fProgressao(c, razao, quantidade) << endl;
    
    return 0;
}

// ########################################## questão 1
int iPotencia(int& numero, int power)
{
    int base = numero;
    
    for (int i = 1; i < power; i++)
    {
        numero *= base;
    }
    
    return numero;
}

// ########################################## questão 2
int iFatorial(int iValor)
{
    int iFatorial = 1;
    if (iValor >= 0)
    {
        for (int i = iValor; i > 0; i--)
        {
            iFatorial = iFatorial * i;
        }
    }
    
    return iFatorial;
}

// ########################################## questão 3
float fProgressao(float& inicio, float razao, int elementos)
{
    for (int i = 0; i < elementos - 1; i++)
    {
        inicio += razao;
    }
    
    return inicio;
}

// Notação húngara e referência
// &atividade
