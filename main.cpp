#include <iostream>
#include <math.h> 

using std::cin;
using std::cout;
using std::endl;
using std::string;

int iPotencia(int&, int);

int iFatorial(int);

int main()
{
    int a = 2;
    cout << iPotencia(a, 5) << endl;

    int b = 6;
    cout << iFatorial(b) << endl;
    return 0;
}

// ########################################## questão 1
int iPotencia(int& numero, int power)
{
    int resultado = numero;
    
    for (int i = 1; i < power; i++)
    {
        resultado *= numero;
    }
    
    return resultado;
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

// Notação húngara e referência
// &atividade
